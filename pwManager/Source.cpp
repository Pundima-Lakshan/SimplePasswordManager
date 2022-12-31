#include "Source.h"

#include "Form_AccountEdit.h"
#include "Form_CreateAccount.h"
#include "Form_EntryEdit.h"
#include "Form_Login.h"
#include "Form_ModeSelector.h"
#include "Form_PWManager.h"

#include "RuntimeData_ApplicationData.h"
#include "RuntimeData_EducationModeOutputData.h"

#include "Functional_PWManager.h"
#include "Functional_UserManager.h"
#include "Functional_TxtFileManager.h"

#include <string>

using namespace System;
using namespace System::Windows::Forms;

const std::string Functional_PWManager::version = "0.0";
const std::string Functional_PWManager::name = "MyPWManager";

//std::map<std::string, Functional_User> Functional_TxtFileManager::usersMap = Functional_TxtFileManager::initializeUsersMap();
//std::map<std::string, Functional_PasswordEntry> Functional_TxtFileManager::passwordMap = Functional_TxtFileManager::initializePasswordMap();

bool RuntimeData_ApplicationData::isEducationMode = true;
bool RuntimeData_ApplicationData::isModeSelectorSuccess = false;
bool RuntimeData_ApplicationData::isLoginSuccess = false;
bool RuntimeData_ApplicationData::isToEditEntryInEntryView = false;

std::string RuntimeData_ApplicationData::currentlyLoggedUsername = "admin";
std::string RuntimeData_ApplicationData::currentlyEditingPasswordID = "adminPassword";
//Functional_User RuntimeData_ApplicationData::currentlyLoggedUser = Functional_User();

const std::string RuntimeData_ApplicationData::fileFormat = ".txt";
const std::string RuntimeData_ApplicationData::directory = "\\datafiles\\";
const std::string RuntimeData_ApplicationData::usersFile = RuntimeData_ApplicationData::directory + "Users" + RuntimeData_ApplicationData::fileFormat;

std::map<std::string, Functional_User> Functional_UserManager::usersMap = Functional_TxtFileManager::readUserTxtFile();

std::string RuntimeData_EducationModeOutputData::EducationModeOutputData_string = "";

[STAThreadAttribute]

void main(array<System::String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();

	/*
	pwManager::Form_AccountEdit form_AccountEdit;
	Application::Run(% form_AccountEdit);

	pwManager::Form_CreateAccount form_CreateAccount;
	Application::Run(% form_CreateAccount);

	pwManager::Form_EducationModeOutput form_EducationModeOutput;
	Application::Run(% form_EducationModeOutput);

	pwManager::Form_EntryEdit form_EntryEdit;

	pwManager::Form_EntryView form_EntryView;

	pwManager::Form_Login form_Login;
	Application::Run(% form_Login);

	pwManager::Form_ModeSelector form_ModeSelector;
	Application::Run(% form_ModeSelector);

	pwManager::Form_PWManager form_PWManager;
	Application::Run(% form_PWManager);
	*/

	pwManager::Form_ModeSelector form_ModeSelector;
	Application::Run(% form_ModeSelector);

	if (RuntimeData_ApplicationData::isModeSelectorSuccess) {
		pwManager::Form_Login form_Login;
		Application::Run(% form_Login);
		
		if (RuntimeData_ApplicationData::isLoginSuccess) {
			pwManager::Form_PWManager form_PWManager;
			Application::Run(% form_PWManager);
		}
	}

	Application::Exit();
	
}

