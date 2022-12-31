#include "Functional_UserManager.h"

#include "Functional_TxtFileManager.h"

#include "RuntimeData_ApplicationData.h"
#include "RuntimeData_EducationModeOutputData.h"

Functional_UserManager::Functional_UserManager() {
	if (RuntimeData_ApplicationData::isEducationMode)
		RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Functional_UserManager \r\n Constructor");
}

Functional_UserManager::~Functional_UserManager() {
	if (RuntimeData_ApplicationData::isEducationMode)
		RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Functional_UserManager \r\n Destructor");
}

//std::map<std::string, Functional_User> Functional_UserManager::set_UsersMap() {
//	if (RuntimeData_ApplicationData::isEducationMode)
//		RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Functional_UserManager \r\n initializeMap");
//
//	std::map<std::string, Functional_User> theMap = std::map<std::string, Functional_User>();
//	return theMap;
//}

void Functional_UserManager::set_UsersMap(std::map<std::string, Functional_User> theUsersMap) {
	if (RuntimeData_ApplicationData::isEducationMode)
		RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Functional_UserManager \r\n set_UsersMap");

	usersMap = theUsersMap;
}

std::map<std::string, Functional_User> Functional_UserManager::get_UsersMap() {
	if (RuntimeData_ApplicationData::isEducationMode)
		RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Functional_UserManager \r\n getUsersMap");

	return usersMap;
}

bool Functional_UserManager::isValidUserLoginDetails(std::string username, std::string password) {
	if (RuntimeData_ApplicationData::isEducationMode)
		RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Functional_UserManager \r\n isValidUserLoginDetails");

	if (usersMap.count(username) > 0) {
		if (usersMap[username].password == password)
			return true;
		else
			return false;
	}
	else
		return false;
}

void Functional_UserManager::addUser(std::string username, std::string password, std::string encryptionKey) {
	if (RuntimeData_ApplicationData::isEducationMode)
		RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Functional_UserManager \r\n addUser");

	Functional_User user;
	user.username = username;
	user.password = password;
	user.encryptionKey = encryptionKey;
	usersMap[username] = user;

	Functional_TxtFileManager::createFile(username);
	updateUserTxtFile();
}

void Functional_UserManager::deleteUser(std::string username) {
	if (RuntimeData_ApplicationData::isEducationMode)
		RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Functional_UserManager \r\n deleteUser");

	usersMap.erase(username);
	Functional_TxtFileManager::deleteFile(RuntimeData_ApplicationData::directory + username + RuntimeData_ApplicationData::fileFormat);
	updateUserTxtFile();
}

void Functional_UserManager::editUser(std::string newUsername, std::string newPassword, std::string newEncryptionKey, std::string oldUsername) {
	if (RuntimeData_ApplicationData::isEducationMode)
		RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Functional_UserManager \r\n editUser");

	Functional_User user;
	user = usersMap[oldUsername];
	user.username = newUsername;
	user.password = newPassword;
	user.encryptionKey = newEncryptionKey;
	usersMap.erase(oldUsername);
	usersMap[newUsername] = user;

	RuntimeData_ApplicationData::currentlyLoggedUsername = newUsername;
	Functional_TxtFileManager::renameFile(oldUsername, newUsername);
	updateUserTxtFile();
}

void Functional_UserManager::updateUserTxtFile() {
	Functional_TxtFileManager::writeUsersToUserTxtFileFrom(usersMap);
}
