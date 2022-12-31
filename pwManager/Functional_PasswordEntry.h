#pragma once

#include <string>

struct Functional_PasswordEntry {
	std::string websiteURL;
	std::string username;
	std::string password;

	Functional_PasswordEntry();
	Functional_PasswordEntry(const Functional_PasswordEntry& u);
	Functional_PasswordEntry(std::string websiteURL, std::string username, std::string password);

	~Functional_PasswordEntry();
};