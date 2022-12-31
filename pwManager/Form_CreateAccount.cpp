#include "Form_CreateAccount.h"

#include "RuntimeData_ApplicationData.h"
#include "RuntimeData_EducationModeOutputData.h"

#include "Functional_UserManager.h"
#include "Functional_TypeConverstions.h"

System::Void pwManager::Form_CreateAccount::CustomInitialize() {
	if (RuntimeData_ApplicationData::isEducationMode)
		RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Form_CreateAccount \r\n Constructor");

	// Manage UserControl_EducationalModeOutput
	this->UserControl_EducationModeOutput->Enabled = false;
	this->UserControl_EducationModeOutput->Hide();

	if (RuntimeData_ApplicationData::isEducationMode) {
		this->UserControl_EducationModeOutput->Enabled = true;
		this->ClientSize = System::Drawing::Size(780, 610);
		this->UserControl_EducationModeOutput->Show();
	}

	if (RuntimeData_ApplicationData::isEducationMode)
		this->UserControl_EducationModeOutput->TextBox_EducationMode_Text = RuntimeData_EducationModeOutputData::get_EducationModeOutputData_SystemString();
	}

System::Void pwManager::Form_CreateAccount::CustomRelease() {
	if (RuntimeData_ApplicationData::isEducationMode)
		RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Form_CreateAccount \r\n Destructor");
}

System::Void pwManager::Form_CreateAccount::Form_CreateAccount_Button_SignUp_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!this->Form_CreateAccount_CheckBox_TermsAndConditions->Checked)
		return;

	if (RuntimeData_ApplicationData::isEducationMode)
		RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Form_CreateAccount \r\n Form_CreateAccount_Button_SignUp_Click");

	std::string enteredUsername = Functional_TypeConverstions::systemStringToStdString(this->Form_CreateAccount_TextBox_Username->Text);
	std::string enteredPassword = Functional_TypeConverstions::systemStringToStdString(this->Form_CreateAccount_TextBox_Password->Text);
	std::string enteredEncryptionKey = Functional_TypeConverstions::systemStringToStdString(this->Form_CreateAccount_TextBox_Key->Text);

	Functional_UserManager::addUser(enteredUsername, enteredPassword, enteredEncryptionKey);

	if (RuntimeData_ApplicationData::isEducationMode)
		this->UserControl_EducationModeOutput->TextBox_EducationMode_Text = RuntimeData_EducationModeOutputData::get_EducationModeOutputData_SystemString();

	Close();
}

System::Void pwManager::Form_CreateAccount::Form_CreateAccount_CheckBox_TermsAndConditions_CheckStateChanged(System::Object^ sender, System::EventArgs^ e) {
	if (RuntimeData_ApplicationData::isEducationMode)
		RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Form_CreateAccount \r\n Form_CreateAccount_CheckBox_TermsAndConditions_CheckStateChanged");

	if (this->Form_CreateAccount_CheckBox_TermsAndConditions->Checked) {
		this->Form_CreateAccount_Button_SignUp->Enabled = true;
	}
	else {
		this->Form_CreateAccount_Button_SignUp->Enabled = false;
	}

	if (RuntimeData_ApplicationData::isEducationMode)
		this->UserControl_EducationModeOutput->TextBox_EducationMode_Text = RuntimeData_EducationModeOutputData::get_EducationModeOutputData_SystemString();
}

System::Void pwManager::Form_CreateAccount::Form_CreateAccount_Label_TermsandConditionsLink_Click(System::Object^ sender, System::EventArgs^ e) {
	if (RuntimeData_ApplicationData::isEducationMode)
		RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Form_CreateAccount \r\n Form_CreateAccount_Label_TermsandConditionsLink_Click");

	MessageBox::Show("There are NO Terms and Conditions", "NO", MessageBoxButtons::OK, MessageBoxIcon::Information);

	if (RuntimeData_ApplicationData::isEducationMode)
		this->UserControl_EducationModeOutput->TextBox_EducationMode_Text = RuntimeData_EducationModeOutputData::get_EducationModeOutputData_SystemString();
}

System::Void pwManager::Form_CreateAccount::KeyShowHideButton_Hide_Click(System::Object^ sender, System::EventArgs^ e) {
	this->KeyShowHideButton_Hide->Hide();
	this->KeyShowHideButton_Show->Show();
	this->Form_CreateAccount_TextBox_Key->UseSystemPasswordChar = true;
}

System::Void pwManager::Form_CreateAccount::KeyShowHideButton_Show_Click(System::Object^ sender, System::EventArgs^ e) {
	this->KeyShowHideButton_Hide->Show();
	this->KeyShowHideButton_Show->Hide();
	this->Form_CreateAccount_TextBox_Key->UseSystemPasswordChar = false;
}

System::Void pwManager::Form_CreateAccount::PasswordShowHideButton_Hide_Click(System::Object^ sender, System::EventArgs^ e) {
	this->PasswordShowHideButton_Hide->Hide();
	this->PasswordShowHideButton_Show->Show();
	this->Form_CreateAccount_TextBox_Password->UseSystemPasswordChar = true;
}

System::Void pwManager::Form_CreateAccount::PasswordShowHideButton_Show_Click(System::Object^ sender, System::EventArgs^ e) {
	this->PasswordShowHideButton_Hide->Show();
	this->PasswordShowHideButton_Show->Hide();
	this->Form_CreateAccount_TextBox_Password->UseSystemPasswordChar = false;
}

