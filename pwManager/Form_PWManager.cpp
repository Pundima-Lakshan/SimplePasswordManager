#include "Form_PWManager.h"

#include "Form_AccountEdit.h"
#include "Form_EntryEdit.h"

#include "RuntimeData_ApplicationData.h"
#include "RuntimeData_EducationModeOutputData.h"

#include "Functional_TypeConverstions.h"
#include "Functional_UserManager.h"
#include "Functional_TxtFileManager.h"

System::Void pwManager::Form_PWManager::CustomInitialze(void) {
	if (RuntimeData_ApplicationData::isEducationMode)
		RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Form_PWManager \r\n Constructor");

	this->UserControl_EducationModeOutput->Enabled = false;
	this->UserControl_EducationModeOutput->Hide();

	if (RuntimeData_ApplicationData::isEducationMode) {
		this->UserControl_EducationModeOutput->Enabled = true;
		this->ClientSize = System::Drawing::Size(965, 811);
		this->UserControl_EducationModeOutput->Show();
	}

	std::string text = Functional_UserManager::usersMap[RuntimeData_ApplicationData::currentlyLoggedUsername].username;
	this->Form_PWManager_Label_MyVAULT->Text = Functional_TypeConverstions::stdStringToSystemString(text);

	PopulateUserData();
	PopulateVaultEntries_FlowLayoutPanel();

	if (RuntimeData_ApplicationData::isEducationMode)
		this->UserControl_EducationModeOutput->TextBox_EducationMode_Text = RuntimeData_EducationModeOutputData::get_EducationModeOutputData_SystemString();
}

System::Void pwManager::Form_PWManager::CustomRelease(void) {
	if (RuntimeData_ApplicationData::isEducationMode)
		RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Form_PWManager \r\n Destructor");
}

System::Void pwManager::Form_PWManager::Form_PWManager_Button_AddNew_Click(System::Object^ sender, System::EventArgs^ e) {
	if (RuntimeData_ApplicationData::isEducationMode)
		RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Form_PWManager \r\n Form_PWManager_Button_AddNew_Click");

	this->Hide();

	RuntimeData_ApplicationData::isToEditEntryInEntryView = false;
	pwManager::Form_EntryEdit^ form_EntryEdit = gcnew(pwManager::Form_EntryEdit);
	form_EntryEdit->ShowDialog();
	form_EntryEdit->Close();
	
	pwManager::Form_PWManager::PopulateVaultEntries_FlowLayoutPanel();

	this->Show();

	if (RuntimeData_ApplicationData::isEducationMode)
		this->UserControl_EducationModeOutput->TextBox_EducationMode_Text = RuntimeData_EducationModeOutputData::get_EducationModeOutputData_SystemString();
}

System::Void pwManager::Form_PWManager::Form_PWManager_Button_Import_Click(System::Object^ sender, System::EventArgs^ e) {
	if (RuntimeData_ApplicationData::isEducationMode)
		RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Form_PWManager \r\n Form_PWManager_Button_Import_Click");

	this->Form_PWManager_Panel_EnterEncryptionKey_Panel->Visible = true;

	if (RuntimeData_ApplicationData::isEducationMode)
		this->UserControl_EducationModeOutput->TextBox_EducationMode_Text = RuntimeData_EducationModeOutputData::get_EducationModeOutputData_SystemString();
}

System::Void pwManager::Form_PWManager::Form_PWManager_Button_EncryptionKey_Import_Click(System::Object^ sender, System::EventArgs^ e) {
	if (RuntimeData_ApplicationData::isEducationMode)
		RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Form_PWManager \r\n Form_PWManager_Button_EnterEncryptionKey_Click");

	//String^ importedFileContent;
	System::String^ importedFilenameWithPath;
	System::IO::Stream^ streamImportedFile;
	OpenFileDialog^ openFileDialog = gcnew OpenFileDialog;

	openFileDialog->InitialDirectory = "c:\\";
	openFileDialog->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
	openFileDialog->FilterIndex = 1;
	openFileDialog->RestoreDirectory = true;

	if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		if ((streamImportedFile = openFileDialog->OpenFile()) != nullptr) {
			importedFilenameWithPath = openFileDialog->FileName;
			//importedFileContent = System::IO::File::ReadAllText(importedFilename);
			streamImportedFile->Close();
		}
	}

	std::string encryptionKey = Functional_TypeConverstions::systemStringToStdString(this->Form_PWManager_TextBox_EnterEncryptionKey->Text);

	std::map<std::string, Functional_PasswordEntry> importedPasswordMap = Functional_TxtFileManager::readPasswordTxtFileOf(Functional_TypeConverstions::systemStringToStdString(importedFilenameWithPath), encryptionKey, true);
	Functional_UserManager::usersMap[RuntimeData_ApplicationData::currentlyLoggedUsername].importPasswordData(importedPasswordMap);

	this->Form_PWManager_Panel_EnterEncryptionKey_Panel->Visible = false;

	pwManager::Form_PWManager::PopulateVaultEntries_FlowLayoutPanel();

	if (RuntimeData_ApplicationData::isEducationMode)
		this->UserControl_EducationModeOutput->TextBox_EducationMode_Text = RuntimeData_EducationModeOutputData::get_EducationModeOutputData_SystemString();
}

System::Void pwManager::Form_PWManager::Form_PWManager_TextBox_EnterEncryptionKey_Click(System::Object^ sender, System::EventArgs^ e) {
	if (RuntimeData_ApplicationData::isEducationMode)
		RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Form_PWManager \r\n Form_PWManager_TextBox_EnterEncryptionKey_Click");

	if (this->Form_PWManager_TextBox_EnterEncryptionKey->Text == "Enter Key Of Import Data") {
		this->Form_PWManager_TextBox_EnterEncryptionKey->UseSystemPasswordChar = true;
		this->Form_PWManager_TextBox_EnterEncryptionKey->Text = "";
	}

	if (RuntimeData_ApplicationData::isEducationMode)
		this->UserControl_EducationModeOutput->TextBox_EducationMode_Text = RuntimeData_EducationModeOutputData::get_EducationModeOutputData_SystemString();
}

System::Void pwManager::Form_PWManager::Form_PWManager_Button_Backup_Click(System::Object^ sender, System::EventArgs^ e) {
	if (RuntimeData_ApplicationData::isEducationMode)
		RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Form_PWManager \r\n Form_PWManager_Button_Backup_Click");

	System::String^ filePathToBackupWithFileName = Functional_TypeConverstions::stdStringToSystemString(RuntimeData_ApplicationData::directory + RuntimeData_ApplicationData::currentlyLoggedUsername + RuntimeData_ApplicationData::fileFormat);
	System::String^ selectedFolderPath;

	OpenFileDialog^ folderBrowser = gcnew OpenFileDialog();

	folderBrowser->ValidateNames = false;
	folderBrowser->CheckFileExists = false;
	folderBrowser->CheckPathExists = true;
	
	folderBrowser->FileName = "Go to Folder"; // Always default to nothing

	if (folderBrowser->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		selectedFolderPath = System::IO::Path::GetDirectoryName(folderBrowser->FileName);
	}

	System::IO::FileInfo^ fileInfo = gcnew System::IO::FileInfo(filePathToBackupWithFileName);

	System::String^ thisPath = selectedFolderPath + "\\" + Functional_TypeConverstions::stdStringToSystemString(RuntimeData_ApplicationData::currentlyLoggedUsername + RuntimeData_ApplicationData::fileFormat);
	//System::Diagnostics::Debug::WriteLine(thisPath);
	try {
		fileInfo->CopyTo(thisPath);
	}
	catch (System::IO::IOException^ ioex) {
		if (MessageBox::Show("File Already Exists Do you want to overwrite it?", "Error", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes) {
			fileInfo->CopyTo(thisPath, true);
		}
	}

	if (RuntimeData_ApplicationData::isEducationMode)
		this->UserControl_EducationModeOutput->TextBox_EducationMode_Text = RuntimeData_EducationModeOutputData::get_EducationModeOutputData_SystemString();
}

System::Void pwManager::Form_PWManager::Form_PWManager_Label_MyVAULT_Click(System::Object^ sender, System::EventArgs^ e) {
	if (RuntimeData_ApplicationData::isEducationMode)
		RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Form_PWManager \r\n Form_PWManager_Label_MyVAULT_Click");

	pwManager::Form_AccountEdit^ form_AccountEdit = gcnew(pwManager::Form_AccountEdit);
	this->Hide();
	form_AccountEdit->ShowDialog();
	form_AccountEdit->Close();

	pwManager::Form_PWManager::PopulateVaultEntries_FlowLayoutPanel();

	this->Show();

	std::string text = Functional_UserManager::usersMap[RuntimeData_ApplicationData::currentlyLoggedUsername].username;
	this->Form_PWManager_Label_MyVAULT->Text = Functional_TypeConverstions::stdStringToSystemString(text);

	if (RuntimeData_ApplicationData::isEducationMode)
		this->UserControl_EducationModeOutput->TextBox_EducationMode_Text = RuntimeData_EducationModeOutputData::get_EducationModeOutputData_SystemString();
}

System::Void pwManager::Form_PWManager::An_EntryView_Button_Edit_ClickEvent(System::Object^ sender, System::EventArgs^ e) {
	if (RuntimeData_ApplicationData::isEducationMode)
		RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Form_PWManager \r\n An_EntryView_Button_Edit_ClickEvent");

	RuntimeData_ApplicationData::isToEditEntryInEntryView = true;

	pwManagerClassLibrary::EntryView^ entryView = safe_cast<pwManagerClassLibrary::EntryView^>(sender);

	this->Hide();

	RuntimeData_ApplicationData::set_currentlyEditingPasswordID(Functional_TypeConverstions::systemStringToStdString(entryView->Name));

	pwManager::Form_EntryEdit^ form_EntryEdit = gcnew pwManager::Form_EntryEdit();
	form_EntryEdit->ShowDialog();
	form_EntryEdit->Close();

	pwManager::Form_PWManager::PopulateVaultEntries_FlowLayoutPanel();

	this->Show();

	std::string text = Functional_UserManager::usersMap[RuntimeData_ApplicationData::currentlyLoggedUsername].username;
	this->Form_PWManager_Label_MyVAULT->Text = Functional_TypeConverstions::stdStringToSystemString(text);

	if (RuntimeData_ApplicationData::isEducationMode)
		this->UserControl_EducationModeOutput->TextBox_EducationMode_Text = RuntimeData_EducationModeOutputData::get_EducationModeOutputData_SystemString();
}

System::Void pwManager::Form_PWManager::An_EntryView_Button_Delete_ClickEvent(System::Object^ sender, System::EventArgs^ e) {
	if (RuntimeData_ApplicationData::isEducationMode)
		RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Form_PWManager \r\n An_EntryView_Button_Delete_ClickEvent");

	pwManagerClassLibrary::EntryView^ entryView = safe_cast<pwManagerClassLibrary::EntryView^>(sender);
	//this->Form_PWManager_FlowLayoutPanel_VaultEntries->Controls->Remove(entryView);

	Functional_UserManager::usersMap[RuntimeData_ApplicationData::currentlyLoggedUsername].deletePasswordEntry(Functional_TypeConverstions::systemStringToStdString(entryView->Name));
	
	pwManager::Form_PWManager::PopulateVaultEntries_FlowLayoutPanel();

	if (RuntimeData_ApplicationData::isEducationMode)
		this->UserControl_EducationModeOutput->TextBox_EducationMode_Text = RuntimeData_EducationModeOutputData::get_EducationModeOutputData_SystemString();
}

System::Void pwManager::Form_PWManager::PopulateVaultEntries_FlowLayoutPanel() {
	if (RuntimeData_ApplicationData::isEducationMode)
		RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Form_PWManager \r\n PopulateVaultEntries_FlowLayoutPanel");

	this->Form_PWManager_FlowLayoutPanel_VaultEntries->Controls->Clear();

	Functional_User loggedUser = Functional_UserManager::usersMap[RuntimeData_ApplicationData::currentlyLoggedUsername];

	this->Form_PWManager_FlowLayoutPanel_VaultEntries->SuspendLayout();
	this->SuspendLayout();

	int count = 0;
	for (const auto& keyValue : loggedUser.passwordMap) {
		pwManagerClassLibrary::EntryView^ entryView;

		entryView = (gcnew pwManagerClassLibrary::EntryView());

		entryView->Name = Functional_TypeConverstions::stdStringToSystemString(keyValue.first);
		entryView->Label_URL_Text = Functional_TypeConverstions::stdStringToSystemString(keyValue.second.websiteURL);
		entryView->Label_Username_Text = Functional_TypeConverstions::stdStringToSystemString(keyValue.second.username);
		entryView->Location = System::Drawing::Point(3, 3 + count * 69);

		entryView->An_EntryView_Button_Edit_Click += gcnew System::EventHandler(this, &pwManager::Form_PWManager::An_EntryView_Button_Edit_ClickEvent);
		entryView->An_EntryView_Button_Delete_Click += gcnew System::EventHandler(this, &pwManager::Form_PWManager::An_EntryView_Button_Delete_ClickEvent);

		this->Form_PWManager_FlowLayoutPanel_VaultEntries->Controls->Add(entryView);

		count++;
	}

	this->Form_PWManager_FlowLayoutPanel_VaultEntries->ResumeLayout(false);
	this->ResumeLayout(false);
	this->PerformLayout();
}

System::Void pwManager::Form_PWManager::PopulateUserData() {
	if (RuntimeData_ApplicationData::isEducationMode)
		RuntimeData_EducationModeOutputData::append_EducationModeOutputData_string("Form_PWManager \r\n PopulateUserData");

	Functional_User loggedUser = Functional_UserManager::usersMap[RuntimeData_ApplicationData::currentlyLoggedUsername];	
	loggedUser.passwordMap = Functional_TxtFileManager::readPasswordTxtFileOf(loggedUser.username, loggedUser.encryptionKey);
	Functional_UserManager::usersMap[RuntimeData_ApplicationData::currentlyLoggedUsername].passwordMap = loggedUser.passwordMap;
	//Functional_UserManager::usersMap[RuntimeData_ApplicationData::currentlyLoggedUsername].updateUsersPasswordIndexMap();

	/*for (const auto& keyValue : RuntimeData_ApplicationData::currentlyLoggedUser.passwordMap) {
		
	}*/
}

System::Void pwManager::Form_PWManager::PasswordShowHideButton_Hide_Click(System::Object^ sender, System::EventArgs^ e) {
	this->PasswordShowHideButton_Hide->Hide();
	this->PasswordShowHideButton_Show->Show();
	this->Form_PWManager_TextBox_EnterEncryptionKey->UseSystemPasswordChar = true;
}

System::Void pwManager::Form_PWManager::PasswordShowHideButton_Show_Click(System::Object^ sender, System::EventArgs^ e) {
	this->PasswordShowHideButton_Hide->Show();
	this->PasswordShowHideButton_Show->Hide();
	this->Form_PWManager_TextBox_EnterEncryptionKey->UseSystemPasswordChar = false;
}

/*private: unsigned int Count_EntryView = 0;

	private: System::Void Form_PWManager_Button_AddNew_Click(System::Object^ sender, System::EventArgs^ e) {

		pwManagerClassLibrary::EntryView^ entryView;
		entryView = (gcnew pwManagerClassLibrary::EntryView());

		this->Form_PWManager_FlowLayoutPanel_VaultEntries->Controls->Add(entryView);

		entryView->Name = L"entryView1";
		entryView->Label_URL_Text = L"www.youtube.com";
		entryView->Label_Username_Text = L"Username";
		entryView->Location = System::Drawing::Point(3, 3 + Count_EntryView * 69);

		this->PerformLayout();

		Count_EntryView++;
	}

	private: System::Void Form_PWManager_Button_Import_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Form_PWManager_FlowLayoutPanel_VaultEntries->Controls->Clear();
	}

	private: System::Void Form_PWManager_Button_Backup_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ClientSize = System::Drawing::Size(780, 610);
		this->UserControl_EducationModeOutput->Enabled = true;
		this->UserControl_EducationModeOutput->Show();
	}

	private: System::Void Form_PWManager_Label_MyVAULT_Click(System::Object^ sender, System::EventArgs^ e) {
	}
*/

