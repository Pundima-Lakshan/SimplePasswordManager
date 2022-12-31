#include "Functional_PasswordEntry.h"

#include "RuntimeData_EducationModeOutputData.h"
#include "RuntimeData_ApplicationData.h"

Functional_PasswordEntry::Functional_PasswordEntry() {
	if (RuntimeData_ApplicationData::isEducationMode)
		RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Functional_PasswordEntry \r\n Constructor - Default");
}

Functional_PasswordEntry::Functional_PasswordEntry(const Functional_PasswordEntry& u) {
	username = u.username;
	password = u.password;
	websiteURL = u.websiteURL;
}

Functional_PasswordEntry::~Functional_PasswordEntry() {
	if (RuntimeData_ApplicationData::isEducationMode)
		RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Functional_PasswordEntry \r\n Destructor");
}

Functional_PasswordEntry::Functional_PasswordEntry(std::string websiteURL, std::string username, std::string password) {
	if (RuntimeData_ApplicationData::isEducationMode)
		RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Functional_PasswordEntry \r\n Constructor - Custom");

	this->websiteURL = websiteURL;
	this->username = username;
	this->password = password;
}