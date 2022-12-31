#pragma once

#include <map>
#include <string>

#include "Functional_User.h"

class Functional_UserManager {
public:
	Functional_UserManager();
	~Functional_UserManager();

	static std::map<std::string, Functional_User> usersMap;

	static void set_UsersMap(std::map<std::string, Functional_User> theUsersMap);
	static std::map<std::string, Functional_User> get_UsersMap();

	static bool isValidUserLoginDetails(std::string username, std::string password);

	static void addUser(std::string username, std::string password, std::string encryptionKey);
	static void deleteUser(std::string username);
	static void editUser(std::string newUsername, std::string newPassword, std::string newEncryptionKey, std::string oldUsername);

	static void updateUserTxtFile();
};

