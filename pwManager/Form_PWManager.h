#pragma once

namespace pwManager {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form_PWManager
	/// </summary>
	public ref class Form_PWManager : public System::Windows::Forms::Form
	{
	public:
		Form_PWManager(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			CustomInitialze();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form_PWManager()
		{
			if (components)
			{
				delete components;
			}
			CustomRelease();
		}
	private: System::Windows::Forms::Button^ Form_PWManager_Button_AddNew;
	private: System::Windows::Forms::Label^ Form_PWManager_Label_MyVAULT;
	private: System::Windows::Forms::Button^ Form_PWManager_Button_Import;
	private: System::Windows::Forms::Button^ Form_PWManager_Button_Backup;
	private: System::Windows::Forms::Panel^ Form_PWManager_Panel_MyVAULT;
	private: System::Windows::Forms::FlowLayoutPanel^ Form_PWManager_FlowLayoutPanel_VaultEntries;

	private: System::Windows::Forms::Panel^ Form_PWManager_Panel_EducationMode_1;
	private: System::Windows::Forms::Panel^ Form_PWManager_Panel_EducationMode_2;


	private: System::Windows::Forms::TextBox^ Form_PWManager_TextBox_EnterEncryptionKey;


	private: System::Windows::Forms::Panel^ Form_PWManager_Panel_EnterEncryptionKey_Panel;
	private: System::Windows::Forms::Button^ PasswordShowHideButton_Show;
	private: System::Windows::Forms::Button^ PasswordShowHideButton_Hide;
	private: System::Windows::Forms::Button^ Form_PWManager_Button_EnterEncryptionKey_Import;

	private: pwManagerClassLibrary::EducationModeOutput^ UserControl_EducationModeOutput;
	private: System::Windows::Forms::Button^ Form_PWManager_Button_EditAccount;
	private: System::Windows::Forms::Panel^ Form_PWManager_EnterEncryptionKey_Panel_Sub2;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form_PWManager::typeid));
			this->Form_PWManager_Button_AddNew = (gcnew System::Windows::Forms::Button());
			this->Form_PWManager_Label_MyVAULT = (gcnew System::Windows::Forms::Label());
			this->Form_PWManager_Button_Import = (gcnew System::Windows::Forms::Button());
			this->Form_PWManager_Button_Backup = (gcnew System::Windows::Forms::Button());
			this->Form_PWManager_Panel_MyVAULT = (gcnew System::Windows::Forms::Panel());
			this->Form_PWManager_FlowLayoutPanel_VaultEntries = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->Form_PWManager_Panel_EducationMode_1 = (gcnew System::Windows::Forms::Panel());
			this->UserControl_EducationModeOutput = (gcnew pwManagerClassLibrary::EducationModeOutput());
			this->Form_PWManager_Panel_EducationMode_2 = (gcnew System::Windows::Forms::Panel());
			this->Form_PWManager_TextBox_EnterEncryptionKey = (gcnew System::Windows::Forms::TextBox());
			this->Form_PWManager_Panel_EnterEncryptionKey_Panel = (gcnew System::Windows::Forms::Panel());
			this->PasswordShowHideButton_Show = (gcnew System::Windows::Forms::Button());
			this->PasswordShowHideButton_Hide = (gcnew System::Windows::Forms::Button());
			this->Form_PWManager_EnterEncryptionKey_Panel_Sub2 = (gcnew System::Windows::Forms::Panel());
			this->Form_PWManager_Button_EnterEncryptionKey_Import = (gcnew System::Windows::Forms::Button());
			this->Form_PWManager_Button_EditAccount = (gcnew System::Windows::Forms::Button());
			this->Form_PWManager_Panel_EducationMode_1->SuspendLayout();
			this->Form_PWManager_Panel_EnterEncryptionKey_Panel->SuspendLayout();
			this->SuspendLayout();
			// 
			// Form_PWManager_Button_AddNew
			// 
			this->Form_PWManager_Button_AddNew->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)), static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->Form_PWManager_Button_AddNew->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Form_PWManager_Button_AddNew->FlatAppearance->BorderSize = 0;
			this->Form_PWManager_Button_AddNew->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold));
			this->Form_PWManager_Button_AddNew->ForeColor = System::Drawing::Color::White;
			this->Form_PWManager_Button_AddNew->Location = System::Drawing::Point(45, 143);
			this->Form_PWManager_Button_AddNew->Margin = System::Windows::Forms::Padding(0);
			this->Form_PWManager_Button_AddNew->Name = L"Form_PWManager_Button_AddNew";
			this->Form_PWManager_Button_AddNew->Size = System::Drawing::Size(120, 45);
			this->Form_PWManager_Button_AddNew->TabIndex = 49;
			this->Form_PWManager_Button_AddNew->Text = L"Add New";
			this->Form_PWManager_Button_AddNew->UseVisualStyleBackColor = false;
			this->Form_PWManager_Button_AddNew->Click += gcnew System::EventHandler(this, &Form_PWManager::Form_PWManager_Button_AddNew_Click);
			// 
			// Form_PWManager_Label_MyVAULT
			// 
			this->Form_PWManager_Label_MyVAULT->AutoSize = true;
			this->Form_PWManager_Label_MyVAULT->BackColor = System::Drawing::Color::Transparent;
			this->Form_PWManager_Label_MyVAULT->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Form_PWManager_Label_MyVAULT->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Form_PWManager_Label_MyVAULT->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 24, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Form_PWManager_Label_MyVAULT->Location = System::Drawing::Point(87, 42);
			this->Form_PWManager_Label_MyVAULT->Name = L"Form_PWManager_Label_MyVAULT";
			this->Form_PWManager_Label_MyVAULT->Size = System::Drawing::Size(155, 45);
			this->Form_PWManager_Label_MyVAULT->TabIndex = 47;
			this->Form_PWManager_Label_MyVAULT->Text = L"My VAULT";
			this->Form_PWManager_Label_MyVAULT->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Form_PWManager_Label_MyVAULT->Click += gcnew System::EventHandler(this, &Form_PWManager::Form_PWManager_Label_MyVAULT_Click);
			// 
			// Form_PWManager_Button_Import
			// 
			this->Form_PWManager_Button_Import->BackColor = System::Drawing::Color::White;
			this->Form_PWManager_Button_Import->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Form_PWManager_Button_Import->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)), static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->Form_PWManager_Button_Import->FlatAppearance->BorderSize = 3;
			this->Form_PWManager_Button_Import->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Form_PWManager_Button_Import->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)), static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->Form_PWManager_Button_Import->Location = System::Drawing::Point(340, 143);
			this->Form_PWManager_Button_Import->Margin = System::Windows::Forms::Padding(0);
			this->Form_PWManager_Button_Import->Name = L"Form_PWManager_Button_Import";
			this->Form_PWManager_Button_Import->Size = System::Drawing::Size(100, 45);
			this->Form_PWManager_Button_Import->TabIndex = 50;
			this->Form_PWManager_Button_Import->Text = L"Import";
			this->Form_PWManager_Button_Import->UseVisualStyleBackColor = false;
			this->Form_PWManager_Button_Import->Click += gcnew System::EventHandler(this, &Form_PWManager::Form_PWManager_Button_Import_Click);
			// 
			// Form_PWManager_Button_Backup
			// 
			this->Form_PWManager_Button_Backup->BackColor = System::Drawing::Color::White;
			this->Form_PWManager_Button_Backup->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Form_PWManager_Button_Backup->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)), static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->Form_PWManager_Button_Backup->FlatAppearance->BorderSize = 3;
			this->Form_PWManager_Button_Backup->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Form_PWManager_Button_Backup->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)), static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->Form_PWManager_Button_Backup->Location = System::Drawing::Point(221, 143);
			this->Form_PWManager_Button_Backup->Margin = System::Windows::Forms::Padding(0);
			this->Form_PWManager_Button_Backup->Name = L"Form_PWManager_Button_Backup";
			this->Form_PWManager_Button_Backup->Size = System::Drawing::Size(100, 45);
			this->Form_PWManager_Button_Backup->TabIndex = 51;
			this->Form_PWManager_Button_Backup->Text = L"Export";
			this->Form_PWManager_Button_Backup->UseVisualStyleBackColor = false;
			this->Form_PWManager_Button_Backup->Click += gcnew System::EventHandler(this, &Form_PWManager::Form_PWManager_Button_Backup_Click);
			// 
			// Form_PWManager_Panel_MyVAULT
			// 
			this->Form_PWManager_Panel_MyVAULT->BackColor = System::Drawing::Color::Black;
			this->Form_PWManager_Panel_MyVAULT->Location = System::Drawing::Point(41, 94);
			this->Form_PWManager_Panel_MyVAULT->Margin = System::Windows::Forms::Padding(0);
			this->Form_PWManager_Panel_MyVAULT->Name = L"Form_PWManager_Panel_MyVAULT";
			this->Form_PWManager_Panel_MyVAULT->Size = System::Drawing::Size(400, 1);
			this->Form_PWManager_Panel_MyVAULT->TabIndex = 52;
			// 
			// Form_PWManager_FlowLayoutPanel_VaultEntries
			// 
			this->Form_PWManager_FlowLayoutPanel_VaultEntries->AutoScroll = true;
			this->Form_PWManager_FlowLayoutPanel_VaultEntries->AutoScrollMinSize = System::Drawing::Size(0, 69);
			this->Form_PWManager_FlowLayoutPanel_VaultEntries->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Form_PWManager_FlowLayoutPanel_VaultEntries->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->Form_PWManager_FlowLayoutPanel_VaultEntries->Location = System::Drawing::Point(41, 228);
			this->Form_PWManager_FlowLayoutPanel_VaultEntries->Margin = System::Windows::Forms::Padding(0);
			this->Form_PWManager_FlowLayoutPanel_VaultEntries->Name = L"Form_PWManager_FlowLayoutPanel_VaultEntries";
			this->Form_PWManager_FlowLayoutPanel_VaultEntries->Size = System::Drawing::Size(400, 535);
			this->Form_PWManager_FlowLayoutPanel_VaultEntries->TabIndex = 53;
			this->Form_PWManager_FlowLayoutPanel_VaultEntries->WrapContents = false;
			// 
			// Form_PWManager_Panel_EducationMode_1
			// 
			this->Form_PWManager_Panel_EducationMode_1->BackColor = System::Drawing::Color::White;
			this->Form_PWManager_Panel_EducationMode_1->Controls->Add(this->UserControl_EducationModeOutput);
			this->Form_PWManager_Panel_EducationMode_1->Controls->Add(this->Form_PWManager_Panel_EducationMode_2);
			this->Form_PWManager_Panel_EducationMode_1->Location = System::Drawing::Point(486, 0);
			this->Form_PWManager_Panel_EducationMode_1->Margin = System::Windows::Forms::Padding(0);
			this->Form_PWManager_Panel_EducationMode_1->Name = L"Form_PWManager_Panel_EducationMode_1";
			this->Form_PWManager_Panel_EducationMode_1->Size = System::Drawing::Size(459, 811);
			this->Form_PWManager_Panel_EducationMode_1->TabIndex = 55;
			// 
			// UserControl_EducationModeOutput
			// 
			this->UserControl_EducationModeOutput->BackColor = System::Drawing::Color::White;
			this->UserControl_EducationModeOutput->Location = System::Drawing::Point(8, 12);
			this->UserControl_EducationModeOutput->Name = L"UserControl_EducationModeOutput";
			this->UserControl_EducationModeOutput->Size = System::Drawing::Size(470, 787);
			this->UserControl_EducationModeOutput->TabIndex = 1;
			this->UserControl_EducationModeOutput->TextBox_EducationMode_EdgeLineVisibility = false;
			this->UserControl_EducationModeOutput->TextBox_EducationMode_Height = 610;
			this->UserControl_EducationModeOutput->TextBox_EducationMode_Text = L"";
			this->UserControl_EducationModeOutput->TextBox_EducationMode_Topic_Location = System::Drawing::Point(99, 47);
			this->UserControl_EducationModeOutput->TextBox_EducationMode_Width = 370;
			// 
			// Form_PWManager_Panel_EducationMode_2
			// 
			this->Form_PWManager_Panel_EducationMode_2->BackColor = System::Drawing::Color::DimGray;
			this->Form_PWManager_Panel_EducationMode_2->Dock = System::Windows::Forms::DockStyle::Left;
			this->Form_PWManager_Panel_EducationMode_2->Location = System::Drawing::Point(0, 0);
			this->Form_PWManager_Panel_EducationMode_2->Name = L"Form_PWManager_Panel_EducationMode_2";
			this->Form_PWManager_Panel_EducationMode_2->Size = System::Drawing::Size(2, 811);
			this->Form_PWManager_Panel_EducationMode_2->TabIndex = 0;
			// 
			// Form_PWManager_TextBox_EnterEncryptionKey
			// 
			this->Form_PWManager_TextBox_EnterEncryptionKey->BackColor = System::Drawing::Color::White;
			this->Form_PWManager_TextBox_EnterEncryptionKey->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Form_PWManager_TextBox_EnterEncryptionKey->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Form_PWManager_TextBox_EnterEncryptionKey->Location = System::Drawing::Point(4, 14);
			this->Form_PWManager_TextBox_EnterEncryptionKey->Margin = System::Windows::Forms::Padding(5);
			this->Form_PWManager_TextBox_EnterEncryptionKey->Name = L"Form_PWManager_TextBox_EnterEncryptionKey";
			this->Form_PWManager_TextBox_EnterEncryptionKey->Size = System::Drawing::Size(241, 28);
			this->Form_PWManager_TextBox_EnterEncryptionKey->TabIndex = 57;
			this->Form_PWManager_TextBox_EnterEncryptionKey->Text = L"Enter Key Of Import Data";
			this->Form_PWManager_TextBox_EnterEncryptionKey->Click += gcnew System::EventHandler(this, &Form_PWManager::Form_PWManager_TextBox_EnterEncryptionKey_Click);
			// 
			// Form_PWManager_Panel_EnterEncryptionKey_Panel
			// 
			this->Form_PWManager_Panel_EnterEncryptionKey_Panel->BackColor = System::Drawing::Color::White;
			this->Form_PWManager_Panel_EnterEncryptionKey_Panel->Controls->Add(this->PasswordShowHideButton_Show);
			this->Form_PWManager_Panel_EnterEncryptionKey_Panel->Controls->Add(this->PasswordShowHideButton_Hide);
			this->Form_PWManager_Panel_EnterEncryptionKey_Panel->Controls->Add(this->Form_PWManager_TextBox_EnterEncryptionKey);
			this->Form_PWManager_Panel_EnterEncryptionKey_Panel->Controls->Add(this->Form_PWManager_EnterEncryptionKey_Panel_Sub2);
			this->Form_PWManager_Panel_EnterEncryptionKey_Panel->Controls->Add(this->Form_PWManager_Button_EnterEncryptionKey_Import);
			this->Form_PWManager_Panel_EnterEncryptionKey_Panel->Location = System::Drawing::Point(41, 134);
			this->Form_PWManager_Panel_EnterEncryptionKey_Panel->Name = L"Form_PWManager_Panel_EnterEncryptionKey_Panel";
			this->Form_PWManager_Panel_EnterEncryptionKey_Panel->Size = System::Drawing::Size(399, 54);
			this->Form_PWManager_Panel_EnterEncryptionKey_Panel->TabIndex = 59;
			this->Form_PWManager_Panel_EnterEncryptionKey_Panel->Visible = false;
			// 
			// PasswordShowHideButton_Show
			// 
			this->PasswordShowHideButton_Show->BackColor = System::Drawing::Color::White;
			this->PasswordShowHideButton_Show->Cursor = System::Windows::Forms::Cursors::Hand;
			this->PasswordShowHideButton_Show->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->PasswordShowHideButton_Show->FlatAppearance->BorderSize = 0;
			this->PasswordShowHideButton_Show->FlatAppearance->MouseDownBackColor = System::Drawing::Color::WhiteSmoke;
			this->PasswordShowHideButton_Show->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->PasswordShowHideButton_Show->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->PasswordShowHideButton_Show->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->PasswordShowHideButton_Show->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PasswordShowHideButton_Show.Image")));
			this->PasswordShowHideButton_Show->Location = System::Drawing::Point(250, 14);
			this->PasswordShowHideButton_Show->Margin = System::Windows::Forms::Padding(0);
			this->PasswordShowHideButton_Show->Name = L"PasswordShowHideButton_Show";
			this->PasswordShowHideButton_Show->Size = System::Drawing::Size(30, 30);
			this->PasswordShowHideButton_Show->TabIndex = 60;
			this->PasswordShowHideButton_Show->UseVisualStyleBackColor = false;
			this->PasswordShowHideButton_Show->Click += gcnew System::EventHandler(this, &Form_PWManager::PasswordShowHideButton_Show_Click);
			// 
			// PasswordShowHideButton_Hide
			// 
			this->PasswordShowHideButton_Hide->BackColor = System::Drawing::Color::White;
			this->PasswordShowHideButton_Hide->Cursor = System::Windows::Forms::Cursors::Hand;
			this->PasswordShowHideButton_Hide->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->PasswordShowHideButton_Hide->FlatAppearance->BorderSize = 0;
			this->PasswordShowHideButton_Hide->FlatAppearance->MouseDownBackColor = System::Drawing::Color::WhiteSmoke;
			this->PasswordShowHideButton_Hide->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->PasswordShowHideButton_Hide->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->PasswordShowHideButton_Hide->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->PasswordShowHideButton_Hide->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PasswordShowHideButton_Hide.Image")));
			this->PasswordShowHideButton_Hide->Location = System::Drawing::Point(250, 16);
			this->PasswordShowHideButton_Hide->Margin = System::Windows::Forms::Padding(0);
			this->PasswordShowHideButton_Hide->Name = L"PasswordShowHideButton_Hide";
			this->PasswordShowHideButton_Hide->Size = System::Drawing::Size(30, 30);
			this->PasswordShowHideButton_Hide->TabIndex = 60;
			this->PasswordShowHideButton_Hide->UseVisualStyleBackColor = false;
			this->PasswordShowHideButton_Hide->Visible = false;
			this->PasswordShowHideButton_Hide->Click += gcnew System::EventHandler(this, &Form_PWManager::PasswordShowHideButton_Hide_Click);
			// 
			// Form_PWManager_EnterEncryptionKey_Panel_Sub2
			// 
			this->Form_PWManager_EnterEncryptionKey_Panel_Sub2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Form_PWManager_EnterEncryptionKey_Panel_Sub2->Dock = System::Windows::Forms::DockStyle::Left;
			this->Form_PWManager_EnterEncryptionKey_Panel_Sub2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Form_PWManager_EnterEncryptionKey_Panel_Sub2->Location = System::Drawing::Point(0, 0);
			this->Form_PWManager_EnterEncryptionKey_Panel_Sub2->Name = L"Form_PWManager_EnterEncryptionKey_Panel_Sub2";
			this->Form_PWManager_EnterEncryptionKey_Panel_Sub2->Size = System::Drawing::Size(287, 54);
			this->Form_PWManager_EnterEncryptionKey_Panel_Sub2->TabIndex = 62;
			// 
			// Form_PWManager_Button_EnterEncryptionKey_Import
			// 
			this->Form_PWManager_Button_EnterEncryptionKey_Import->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)), static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->Form_PWManager_Button_EnterEncryptionKey_Import->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Form_PWManager_Button_EnterEncryptionKey_Import->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)), static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->Form_PWManager_Button_EnterEncryptionKey_Import->FlatAppearance->BorderSize = 3;
			this->Form_PWManager_Button_EnterEncryptionKey_Import->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Form_PWManager_Button_EnterEncryptionKey_Import->ForeColor = System::Drawing::Color::White;
			this->Form_PWManager_Button_EnterEncryptionKey_Import->Location = System::Drawing::Point(295, 5);
			this->Form_PWManager_Button_EnterEncryptionKey_Import->Margin = System::Windows::Forms::Padding(0);
			this->Form_PWManager_Button_EnterEncryptionKey_Import->Name = L"Form_PWManager_Button_EnterEncryptionKey_Import";
			this->Form_PWManager_Button_EnterEncryptionKey_Import->Size = System::Drawing::Size(100, 45);
			this->Form_PWManager_Button_EnterEncryptionKey_Import->TabIndex = 61;
			this->Form_PWManager_Button_EnterEncryptionKey_Import->Text = L"Import";
			this->Form_PWManager_Button_EnterEncryptionKey_Import->UseVisualStyleBackColor = false;
			this->Form_PWManager_Button_EnterEncryptionKey_Import->Click += gcnew System::EventHandler(this, &Form_PWManager::Form_PWManager_Button_EncryptionKey_Import_Click);
			// 
			// Form_PWManager_Button_EditAccount
			// 
			this->Form_PWManager_Button_EditAccount->BackColor = System::Drawing::Color::Transparent;
			this->Form_PWManager_Button_EditAccount->FlatAppearance->BorderSize = 0;
			this->Form_PWManager_Button_EditAccount->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Form_PWManager_Button_EditAccount.Image")));
			this->Form_PWManager_Button_EditAccount->Location = System::Drawing::Point(36, 42);
			this->Form_PWManager_Button_EditAccount->Margin = System::Windows::Forms::Padding(0);
			this->Form_PWManager_Button_EditAccount->Name = L"Form_PWManager_Button_EditAccount";
			this->Form_PWManager_Button_EditAccount->Size = System::Drawing::Size(45, 45);
			this->Form_PWManager_Button_EditAccount->TabIndex = 60;
			this->Form_PWManager_Button_EditAccount->UseVisualStyleBackColor = false;
			this->Form_PWManager_Button_EditAccount->Click += gcnew System::EventHandler(this, &Form_PWManager::Form_PWManager_Label_MyVAULT_Click);
			// 
			// Form_PWManager
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(484, 811);
			this->Controls->Add(this->Form_PWManager_Button_EditAccount);
			this->Controls->Add(this->Form_PWManager_Panel_EnterEncryptionKey_Panel);
			this->Controls->Add(this->Form_PWManager_FlowLayoutPanel_VaultEntries);
			this->Controls->Add(this->Form_PWManager_Panel_MyVAULT);
			this->Controls->Add(this->Form_PWManager_Button_Backup);
			this->Controls->Add(this->Form_PWManager_Button_Import);
			this->Controls->Add(this->Form_PWManager_Button_AddNew);
			this->Controls->Add(this->Form_PWManager_Label_MyVAULT);
			this->Controls->Add(this->Form_PWManager_Panel_EducationMode_1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Form_PWManager";
			this->ShowIcon = false;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Form_PWManager";
			this->Form_PWManager_Panel_EducationMode_1->ResumeLayout(false);
			this->Form_PWManager_Panel_EnterEncryptionKey_Panel->ResumeLayout(false);
			this->Form_PWManager_Panel_EnterEncryptionKey_Panel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CustomInitialze(void);
	private: System::Void CustomRelease(void);

	private: System::Void PopulateVaultEntries_FlowLayoutPanel(void);
	private: System::Void An_EntryView_Button_Edit_ClickEvent(System::Object^ sender, System::EventArgs^ e);
	private: System::Void An_EntryView_Button_Delete_ClickEvent(System::Object^ sender, System::EventArgs^ e);

	private: System::Void PopulateUserData(void);

	private: System::Void Form_PWManager_Button_AddNew_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Form_PWManager_Button_Import_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Form_PWManager_Button_Backup_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Form_PWManager_Label_MyVAULT_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Form_PWManager_Button_EncryptionKey_Import_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Form_PWManager_TextBox_EnterEncryptionKey_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void PasswordShowHideButton_Hide_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void PasswordShowHideButton_Show_Click(System::Object^ sender, System::EventArgs^ e);
};
}
