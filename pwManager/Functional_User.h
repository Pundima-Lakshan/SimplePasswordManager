#pragma once

#include <map>
#include <string>

#include "Functional_PasswordEntry.h"

class Functional_User {
public:
	Functional_User();
	Functional_User(std::string username, std::string password, std::string encryptionKey);
	Functional_User(const Functional_User& u);

	~Functional_User();

	std::string username;
	std::string password;
	std::string encryptionKey;

	std::map<std::string, Functional_PasswordEntry> passwordMap;
	//std::map<int, std::string> passwordIndexMap;

	void addPasswordEntry(std::string websiteURL, std::string username, std::string password);
	void deletePasswordEntry(std::string passwordEntryID);
	void editPasswordEntry(std::string passwordEntryID, std::string newWebsiteURL, std::string newUsername, std::string newPassword);

	void Functional_User::updateUsersPasswordTxtFile();
	//void Functional_User::updateUsersPasswordIndexMap();
	void importPasswordData(std::map<std::string, Functional_PasswordEntry> importedPasswordMap);
};

