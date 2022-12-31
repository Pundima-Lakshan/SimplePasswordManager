#pragma once

#include <map>
#include <string>

#include "Functional_User.h"
#include "Functional_PasswordEntry.h"

class Functional_TxtFileManager {
public:
	Functional_TxtFileManager();
	~Functional_TxtFileManager();

	//static std::map<std::string, Functional_User> usersMap;
	//static std::map<std::string, Functional_PasswordEntry> loggedInUsersPasswordMap;

	//static void set_UsersMap(std::map<std::string, Functional_User>);
	//static void set_loggedInUsersPasswordMap(std::map<std::string, Functional_PasswordEntry>);

	//static std::map<std::string, Functional_User> get_UsersMap();
	//static std::map<std::string, Functional_PasswordEntry> get_loggedInUsersPasswordMap();

	static std::map<std::string, Functional_User> readUserTxtFile();
	static std::map<std::string, Functional_PasswordEntry> readPasswordTxtFileOf(std::string username, std::string encryptionKey);
	static std::map<std::string, Functional_PasswordEntry> readPasswordTxtFileOf(std::string fileNameWithPath, std::string encryptionKey, bool t);

	static void writeUsersToUserTxtFileFrom(std::map<std::string, Functional_User>);
	static void writePasswordsToUserPasswordTxtFileFrom(std::map<std::string, Functional_PasswordEntry> passwordMap, std::string username, std::string encryptionKey);

	static void createFile(std::string filename);
	static void deleteFile(std::string filename);
	static void renameFile(std::string oldFilename, std::string newFilename);
};

