#include "Form_AccountEdit.h"

#include "RuntimeData_ApplicationData.h"
#include "RuntimeData_EducationModeOutputData.h"
#include "Functional_TypeConverstions.h"
#include "Functional_UserManager.h"

System::Void pwManager::Form_AccountEdit::CustomInitialize(void) {
	if (RuntimeData_ApplicationData::isEducationMode)
		RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Form_AccountEdit \r\n Constructor");

	// Manage UserControl_EducationalModeOutput
	this->UserControl_EducationModeOutput->Enabled = false;
	this->UserControl_EducationModeOutput->Hide();

	if (RuntimeData_ApplicationData::isEducationMode) {
		this->UserControl_EducationModeOutput->Enabled = true;
		this->ClientSize = System::Drawing::Size(780, 610);
		this->UserControl_EducationModeOutput->Show();
	}

	std::string text = Functional_UserManager::usersMap[RuntimeData_ApplicationData::currentlyLoggedUsername].username;
	this->Form_AccountEdit_TextBox_Username->Text = Functional_TypeConverstions::stdStringToSystemString(text);

	text = Functional_UserManager::usersMap[RuntimeData_ApplicationData::currentlyLoggedUsername].password;
	this->Form_AccountEdit_TextBox_Password->Text = Functional_TypeConverstions::stdStringToSystemString(text);

	text = Functional_UserManager::usersMap[RuntimeData_ApplicationData::currentlyLoggedUsername].encryptionKey;
	this->Form_AccountEdit_TextBox_Key->Text = Functional_TypeConverstions::stdStringToSystemString(text);

	if (RuntimeData_ApplicationData::isEducationMode)
		this->UserControl_EducationModeOutput->TextBox_EducationMode_Text = RuntimeData_EducationModeOutputData::get_EducationModeOutputData_SystemString();
	}

System::Void pwManager::Form_AccountEdit::CustomRelease(void) {
	if (RuntimeData_ApplicationData::isEducationMode)
		RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Form_AccountEdit \r\n Destructor");
}

System::Void pwManager::Form_AccountEdit::Form_AccountEdit_Button_Save_Click(System::Object^ sender, System::EventArgs^ e) {
	if (RuntimeData_ApplicationData::isEducationMode)
		RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Form_AccountEdit \r\n Form_AccountEdit_Button_Save_Click");

	std::string enteredNewUsername = Functional_TypeConverstions::systemStringToStdString(this->Form_AccountEdit_TextBox_Username->Text);
	std::string enteredNewPassword = Functional_TypeConverstions::systemStringToStdString(this->Form_AccountEdit_TextBox_Password->Text);
	std::string enteredNewEncryptionKey = Functional_TypeConverstions::systemStringToStdString(this->Form_AccountEdit_TextBox_Key->Text);

	Functional_UserManager::editUser(enteredNewUsername, enteredNewPassword, enteredNewEncryptionKey, RuntimeData_ApplicationData::currentlyLoggedUsername);

	if (RuntimeData_ApplicationData::isEducationMode)
		this->UserControl_EducationModeOutput->TextBox_EducationMode_Text = RuntimeData_EducationModeOutputData::get_EducationModeOutputData_SystemString();

	Close();
}

System::Void pwManager::Form_AccountEdit::Form_AccountEdit_Button_Exit_Click(System::Object^ sender, System::EventArgs^ e) {
	if (RuntimeData_ApplicationData::isEducationMode)
		RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Form_AccountEdit \r\n Form_AccountEdit_Button_Exit_Click");

	if (RuntimeData_ApplicationData::isEducationMode)
		this->UserControl_EducationModeOutput->TextBox_EducationMode_Text = RuntimeData_EducationModeOutputData::get_EducationModeOutputData_SystemString();

	Close();
}

System::Void pwManager::Form_AccountEdit::KeyShowHideButton_Hide_Click(System::Object^ sender, System::EventArgs^ e) {
	this->KeyShowHideButton_Hide->Hide();
	this->KeyShowHideButton_Show->Show();
	this->Form_AccountEdit_TextBox_Key->UseSystemPasswordChar = true;
}

System::Void pwManager::Form_AccountEdit::KeyShowHideButton_Show_Click(System::Object^ sender, System::EventArgs^ e) {
	this->KeyShowHideButton_Hide->Show();
	this->KeyShowHideButton_Show->Hide();
	this->Form_AccountEdit_TextBox_Key->UseSystemPasswordChar = false;
}

System::Void pwManager::Form_AccountEdit::PasswordShowHideButton_Hide_Click(System::Object^ sender, System::EventArgs^ e) {
	this->PasswordShowHideButton_Hide->Hide();
	this->PasswordShowHideButton_Show->Show();
	this->Form_AccountEdit_TextBox_Password->UseSystemPasswordChar = true;
}

System::Void pwManager::Form_AccountEdit::PasswordShowHideButton_Show_Click(System::Object^ sender, System::EventArgs^ e) {
	this->PasswordShowHideButton_Hide->Show();
	this->PasswordShowHideButton_Show->Hide();
	this->Form_AccountEdit_TextBox_Password->UseSystemPasswordChar = false;
}

/*private: System::Void Form_AccountEdit_Button_Save_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ClientSize = System::Drawing::Size(780, 610);
	this->UserControl_EducationModeOutput->Enabled = true;
	this->UserControl_EducationModeOutput->Show();

	this->UserControl_EducationModeOutput->TextBox_EducationMode_Text = this->Form_AccountEdit_TextBox_Username->Text;
}*/

