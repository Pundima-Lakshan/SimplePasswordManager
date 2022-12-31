#pragma once

#include <string>

#include "Functional_User.h"

using namespace System::Windows::Forms;

struct RuntimeData_ApplicationData {
public:
	RuntimeData_ApplicationData();
	~RuntimeData_ApplicationData();

public:
	static bool isEducationMode;
	static void set_isEducationMode(bool t);
	static bool get_isEducationMode();

	static bool isModeSelectorSuccess;
	static void set_isModeSelectorSuccess(bool t);
	static bool get_isModeSelectorSuccess();

	static bool isLoginSuccess;
	static void set_isLoginSuccess(bool t);
	static bool get_isLoginSuccess();

	static bool isToEditEntryInEntryView;
	static void set_isToEditEntryInEntryView(bool t);
	static bool get_isToEditEntryInEntryView();

	static std::string currentlyEditingPasswordID;
	static void set_currentlyEditingPasswordID(std::string t);
	static std::string get_currentlyEditingPasswordID();

	static std::string currentlyLoggedUsername;
	static void set_currentlyLoggedUsername(std::string t);
	static std::string get_currentlyLoggedUsername();

	//static Functional_User currentlyLoggedUser;
	//static void set_currentlyLoggedUser(Functional_User u);
	//static Functional_User get_currentlyLoggedUser();

	static const std::string fileFormat;
	static const std::string directory;
	static const std::string usersFile;
};