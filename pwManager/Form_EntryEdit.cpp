#include "Form_EntryEdit.h"

#include "RuntimeData_ApplicationData.h"
#include "RuntimeData_EducationModeOutputData.h"

#include "Functional_TypeConverstions.h"
#include "Functional_UserManager.h"
#include "Functional_User.h"

#include "Form_PWManager.h"

System::Void pwManager::Form_EntryEdit::CustomInitialize() {
	if (RuntimeData_ApplicationData::isEducationMode)
		RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Form_EntryEdit \r\n Constructor");

	if (RuntimeData_ApplicationData::isToEditEntryInEntryView)
		this->Text = "Form_EntryEdit";
	else
		this->Text = "Form_NewEntry";

	this->UserControl_EducationModeOutput->Enabled = false;
	this->UserControl_EducationModeOutput->Hide();

	if (RuntimeData_ApplicationData::isEducationMode) {
		this->UserControl_EducationModeOutput->Enabled = true;
		this->ClientSize = System::Drawing::Size(780, 610);
		this->UserControl_EducationModeOutput->Show();
	}

	if (RuntimeData_ApplicationData::isToEditEntryInEntryView) {
		Functional_User loggedInUser = Functional_UserManager::usersMap[RuntimeData_ApplicationData::currentlyLoggedUsername];

		//Functional_PasswordEntry passswordEntryOfLoggedInUser = loggedInUser.passwordMap[RuntimeData_ApplicationData::currentlyEditingPasswordID];

		Functional_PasswordEntry passswordEntryOfLoggedInUser(loggedInUser.passwordMap[RuntimeData_ApplicationData::currentlyEditingPasswordID]);

		this->Form_EntryEdit_TextBox_URL->Text = Functional_TypeConverstions::stdStringToSystemString(passswordEntryOfLoggedInUser.websiteURL);
		this->Form_EntryEdit_TextBox_Username->Text = Functional_TypeConverstions::stdStringToSystemString(passswordEntryOfLoggedInUser.username);
		this->Form_EntryEdit_TextBox_Password->Text = Functional_TypeConverstions::stdStringToSystemString(passswordEntryOfLoggedInUser.password);
	}

	if (RuntimeData_ApplicationData::isEducationMode)
		this->UserControl_EducationModeOutput->TextBox_EducationMode_Text = RuntimeData_EducationModeOutputData::get_EducationModeOutputData_SystemString();
	}

System::Void pwManager::Form_EntryEdit::CustomRelease() {
	if (RuntimeData_ApplicationData::isEducationMode)
		RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Form_EntryEdit \r\n Destructor");
}

System::Void pwManager::Form_EntryEdit::Form_EntryEdit_Button_Save_Click(System::Object^ sender, System::EventArgs^ e) {
	if (RuntimeData_ApplicationData::isEducationMode)
		RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Form_EntryEdit \r\n Form_EntryEdit_Button_Save_Click");
	
	std::string enteredWebsiteURL = Functional_TypeConverstions::systemStringToStdString(this->Form_EntryEdit_TextBox_URL->Text);
	std::string enteredUsername = Functional_TypeConverstions::systemStringToStdString(this->Form_EntryEdit_TextBox_Username->Text);
	std::string enteredPassword = Functional_TypeConverstions::systemStringToStdString(this->Form_EntryEdit_TextBox_Password->Text);

	if (RuntimeData_ApplicationData::isToEditEntryInEntryView) {
		Functional_UserManager::usersMap[RuntimeData_ApplicationData::currentlyLoggedUsername].editPasswordEntry(RuntimeData_ApplicationData::currentlyEditingPasswordID, enteredWebsiteURL, enteredUsername, enteredPassword);
	}
	else {
		Functional_UserManager::usersMap[RuntimeData_ApplicationData::currentlyLoggedUsername].addPasswordEntry(enteredWebsiteURL, enteredUsername, enteredPassword);
	}

	if (RuntimeData_ApplicationData::isEducationMode)
		this->UserControl_EducationModeOutput->TextBox_EducationMode_Text = RuntimeData_EducationModeOutputData::get_EducationModeOutputData_SystemString();

	Close();
}

System::Void pwManager::Form_EntryEdit::Form_EntryEdit_Button_Exit_Click(System::Object^ sender, System::EventArgs^ e) {
	if (RuntimeData_ApplicationData::isEducationMode)
		RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Form_EntryEdit \r\n Form_EntryEdit_Button_Exit_Click");

	if (RuntimeData_ApplicationData::isEducationMode)
		this->UserControl_EducationModeOutput->TextBox_EducationMode_Text = RuntimeData_EducationModeOutputData::get_EducationModeOutputData_SystemString();

	Close();
}

System::Void pwManager::Form_EntryEdit::PasswordShowHideButton_Hide_Click(System::Object^ sender, System::EventArgs^ e) {
	this->PasswordShowHideButton_Hide->Hide();
	this->PasswordShowHideButton_Show->Show();
	this->Form_EntryEdit_TextBox_Password->UseSystemPasswordChar = true;
}

System::Void pwManager::Form_EntryEdit::PasswordShowHideButton_Show_Click(System::Object^ sender, System::EventArgs^ e) {
	this->PasswordShowHideButton_Hide->Show();
	this->PasswordShowHideButton_Show->Hide();
	this->Form_EntryEdit_TextBox_Password->UseSystemPasswordChar = false;
}