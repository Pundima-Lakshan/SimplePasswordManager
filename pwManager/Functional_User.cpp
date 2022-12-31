#include "Functional_User.h"

#include "RuntimeData_EducationModeOutputData.h"
#include "RuntimeData_ApplicationData.h"

#include "Functional_TxtFileManager.h"

Functional_User::Functional_User() {
	if (RuntimeData_ApplicationData::isEducationMode)
		RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Functional_User \r\n Constructor - Default");
}

Functional_User::Functional_User(std::string username, std::string password, std::string encryptionKey) {
	if (RuntimeData_ApplicationData::isEducationMode)
		RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Functional_User \r\n Constructor - Custom");

	this->username = username;
	this->password = password;
	this->encryptionKey = encryptionKey;
}

Functional_User::Functional_User(const Functional_User& u) {
	username = u.username;
	password = u.password;
	encryptionKey = u.encryptionKey;

	passwordMap = u.passwordMap;
	//passwordIndexMap = u.passwordIndexMap;
}

Functional_User::~Functional_User() {
	if (RuntimeData_ApplicationData::isEducationMode)
		RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Functional_User \r\n Destructor");
}

void Functional_User::addPasswordEntry(std::string websiteURL, std::string username, std::string password) {
	if (RuntimeData_ApplicationData::isEducationMode)
		RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Functional_User \r\n addPasswordEntry");

	Functional_PasswordEntry passwordEntry(websiteURL, username, password);

	if (!passwordMap.empty()) {
		std::string element = prev(passwordMap.end())->first;
		int num = stoi(element);
		num++;
		element = std::to_string(num);
		passwordMap[element] = passwordEntry;
	}
	else
		passwordMap["1"] = passwordEntry;

	updateUsersPasswordTxtFile();
}

void Functional_User::deletePasswordEntry(std::string passwordId) {
	if (RuntimeData_ApplicationData::isEducationMode)
		RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Functional_User \r\n deletePasswordEntry");

	//std::string passwordEntryId = passwordIndexMap[std::stoi(index)];
	passwordMap.erase(passwordId);

	updateUsersPasswordTxtFile();
}

void Functional_User::editPasswordEntry(std::string passwordEntryID, std::string newWebsiteURL, std::string newUsername, std::string newPassword) {
	if (RuntimeData_ApplicationData::isEducationMode)
		RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Functional_User \r\n editPasswordEntry");

	//std::string passwordEntryID = passwordIndexMap[passwordEntryIndex];
	Functional_PasswordEntry passwordEntry(newWebsiteURL, newUsername, newPassword);
	passwordMap.erase(passwordEntryID);
	passwordMap[passwordEntryID] = passwordEntry;

	updateUsersPasswordTxtFile();
}

void Functional_User::updateUsersPasswordTxtFile() {
	if (RuntimeData_ApplicationData::isEducationMode)
		RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Functional_User \r\n updateUsersPasswordTxtFile");

	Functional_TxtFileManager::writePasswordsToUserPasswordTxtFileFrom(passwordMap, username, encryptionKey);
}

void Functional_User::importPasswordData(std::map<std::string, Functional_PasswordEntry> importedPasswordMap) {
	if (RuntimeData_ApplicationData::isEducationMode)
		RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Functional_User \r\n importPasswordData");

	int num;
	if (!passwordMap.empty()) {
		std::string element = prev(passwordMap.end())->first;
		num = stoi(element) + 1;
	}
	else
		num = 1;

	for (const auto& keyValue : importedPasswordMap) {
		passwordMap[std::to_string(num)] = keyValue.second;
		num++;
	}

	updateUsersPasswordTxtFile();
}

//void Functional_User::updateUsersPasswordIndexMap() {
//	int count = 1;
//	for (const auto& keyValue : passwordMap) {
//		passwordIndexMap[count] = keyValue.first;
//		count++;
//	}
//}
