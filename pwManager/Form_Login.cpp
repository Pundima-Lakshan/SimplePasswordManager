#include "Form_Login.h"
#include "Form_CreateAccount.h"

#include "RuntimeData_ApplicationData.h"
#include "RuntimeData_EducationModeOutputData.h"

#include "Functional_UserManager.h"
#include "Functional_TypeConverstions.h"
#include "Functional_TxtFileManager.h"

void pwManager::Form_Login::CustomInitialize() {
	if (RuntimeData_ApplicationData::isEducationMode)
		RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Form_Login \r\n Constructor");

	this->UserControl_EducationModeOutput->Enabled = false;
	this->UserControl_EducationModeOutput->Hide();

	if (RuntimeData_ApplicationData::isEducationMode) {
		this->UserControl_EducationModeOutput->Enabled = true;
		this->ClientSize = System::Drawing::Size(780, 610);
		this->UserControl_EducationModeOutput->Show();
	}

	Functional_UserManager::set_UsersMap(Functional_TxtFileManager::readUserTxtFile());

	if (RuntimeData_ApplicationData::isEducationMode)
		this->UserControl_EducationModeOutput->TextBox_EducationMode_Text = RuntimeData_EducationModeOutputData::get_EducationModeOutputData_SystemString();

	this->UserControl_EducationModeOutput->TextBox_EducationMode_Text = RuntimeData_EducationModeOutputData::get_EducationModeOutputData_SystemString();
}

void pwManager::Form_Login::CustomRelease() {
	if (RuntimeData_ApplicationData::isEducationMode)
		RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Form_Login \r\n Destructor");
}

System::Void pwManager::Form_Login::Form_Login_Button_SignIn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (RuntimeData_ApplicationData::isEducationMode)
		RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Form_Login \r\n Form_Login_Button_SignIn_Click");

	std::string enteredUsername = Functional_TypeConverstions::systemStringToStdString(this->Form_Login_TextBox_Username->Text);
	std::string enteredPassword = Functional_TypeConverstions::systemStringToStdString(this->Form_Login_TextBox_Password->Text);

	if (Functional_UserManager::isValidUserLoginDetails(enteredUsername, enteredPassword)) {
		RuntimeData_ApplicationData::set_isLoginSuccess(true);
		
		RuntimeData_ApplicationData::currentlyLoggedUsername = enteredUsername;

		Close();
	}
	else {
		MessageBox::Show("Username Password Not found", "", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
	}

	if (RuntimeData_ApplicationData::isEducationMode)
		this->UserControl_EducationModeOutput->TextBox_EducationMode_Text = RuntimeData_EducationModeOutputData::get_EducationModeOutputData_SystemString();
}

System::Void pwManager::Form_Login::Form_Login_Label_CreateNewAccount_Click(System::Object^ sender, System::EventArgs^ e) {
	if (RuntimeData_ApplicationData::isEducationMode)
		RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Form_Login \r\n Form_Login_Label_CreateNewAccount_Click");

	this->Hide();

	pwManager::Form_CreateAccount^ form_CreatAccount = gcnew(pwManager::Form_CreateAccount);
	form_CreatAccount->ShowDialog();
	form_CreatAccount->Close();
	
	this->Show();

	if (RuntimeData_ApplicationData::isEducationMode)
		this->UserControl_EducationModeOutput->TextBox_EducationMode_Text = RuntimeData_EducationModeOutputData::get_EducationModeOutputData_SystemString();
}

System::Void pwManager::Form_Login::PasswordShowHideButton_Hide_Click(System::Object^ sender, System::EventArgs^ e) {
	this->PasswordShowHideButton_Hide->Hide();
	this->PasswordShowHideButton_Show->Show();
	this->Form_Login_TextBox_Password->UseSystemPasswordChar = true;
}

System::Void pwManager::Form_Login::PasswordShowHideButton_Show_Click(System::Object^ sender, System::EventArgs^ e) {
	this->PasswordShowHideButton_Hide->Show();
	this->PasswordShowHideButton_Show->Hide();
	this->Form_Login_TextBox_Password->UseSystemPasswordChar = false;
}