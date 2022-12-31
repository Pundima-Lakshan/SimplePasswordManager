#pragma once

namespace pwManager {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form_CreateAccount
	/// </summary>
	public ref class Form_CreateAccount : public System::Windows::Forms::Form
	{
	public:
		Form_CreateAccount(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			CustomInitialize();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form_CreateAccount()
		{
			if (components)
			{
				delete components;
			}
			CustomRelease();
		}
	private: System::Windows::Forms::Button^ Form_CreateAccount_Button_SignUp;
	private: System::Windows::Forms::TextBox^ Form_CreateAccount_TextBox_Key;
	private: System::Windows::Forms::TextBox^ Form_CreateAccount_TextBox_Password;
	private: System::Windows::Forms::TextBox^ Form_CreateAccount_TextBox_Username;
	private: System::Windows::Forms::Label^ Form_CreateAccount_Label_Key;
	private: System::Windows::Forms::Label^ Form_CreateAccount_Label_Password;
	private: System::Windows::Forms::Label^ Form_CreateAccount_Label_Username;
	private: System::Windows::Forms::Label^ Form_CreateAccount_Label_JOINWITHUS;
	private: System::Windows::Forms::Panel^ Form_CreateAccount_Panel_Username;
	private: System::Windows::Forms::Panel^ Form_CreateAccount_Panel_Password;
	private: System::Windows::Forms::Panel^ Form_CreateAccount_Panel_Key;
	private: System::Windows::Forms::CheckBox^ Form_CreateAccount_CheckBox_TermsAndConditions;

	private: pwManagerClassLibrary::EducationModeOutput^ UserControl_EducationModeOutput;
	private: System::Windows::Forms::Button^ PasswordShowHideButton_Hide;
	private: System::Windows::Forms::Button^ PasswordShowHideButton_Show;
	private: System::Windows::Forms::Button^ KeyShowHideButton_Show;
	private: System::Windows::Forms::Button^ KeyShowHideButton_Hide;
	private: System::Windows::Forms::Label^ Form_CreateAccount_Label_TermsandConditionsLink;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form_CreateAccount::typeid));
			this->Form_CreateAccount_Button_SignUp = (gcnew System::Windows::Forms::Button());
			this->Form_CreateAccount_TextBox_Key = (gcnew System::Windows::Forms::TextBox());
			this->Form_CreateAccount_TextBox_Password = (gcnew System::Windows::Forms::TextBox());
			this->Form_CreateAccount_TextBox_Username = (gcnew System::Windows::Forms::TextBox());
			this->Form_CreateAccount_Label_Key = (gcnew System::Windows::Forms::Label());
			this->Form_CreateAccount_Label_Password = (gcnew System::Windows::Forms::Label());
			this->Form_CreateAccount_Label_Username = (gcnew System::Windows::Forms::Label());
			this->Form_CreateAccount_Label_JOINWITHUS = (gcnew System::Windows::Forms::Label());
			this->Form_CreateAccount_Panel_Username = (gcnew System::Windows::Forms::Panel());
			this->Form_CreateAccount_Panel_Password = (gcnew System::Windows::Forms::Panel());
			this->Form_CreateAccount_Panel_Key = (gcnew System::Windows::Forms::Panel());
			this->UserControl_EducationModeOutput = (gcnew pwManagerClassLibrary::EducationModeOutput());
			this->Form_CreateAccount_CheckBox_TermsAndConditions = (gcnew System::Windows::Forms::CheckBox());
			this->PasswordShowHideButton_Hide = (gcnew System::Windows::Forms::Button());
			this->PasswordShowHideButton_Show = (gcnew System::Windows::Forms::Button());
			this->KeyShowHideButton_Show = (gcnew System::Windows::Forms::Button());
			this->KeyShowHideButton_Hide = (gcnew System::Windows::Forms::Button());
			this->Form_CreateAccount_Label_TermsandConditionsLink = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Form_CreateAccount_Button_SignUp
			// 
			this->Form_CreateAccount_Button_SignUp->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)), static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->Form_CreateAccount_Button_SignUp->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Form_CreateAccount_Button_SignUp->Enabled = false;
			this->Form_CreateAccount_Button_SignUp->FlatAppearance->BorderSize = 0;
			this->Form_CreateAccount_Button_SignUp->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold));
			this->Form_CreateAccount_Button_SignUp->ForeColor = System::Drawing::Color::White;
			this->Form_CreateAccount_Button_SignUp->Location = System::Drawing::Point(127, 518);
			this->Form_CreateAccount_Button_SignUp->Margin = System::Windows::Forms::Padding(0);
			this->Form_CreateAccount_Button_SignUp->Name = L"Form_CreateAccount_Button_SignUp";
			this->Form_CreateAccount_Button_SignUp->Size = System::Drawing::Size(120, 45);
			this->Form_CreateAccount_Button_SignUp->TabIndex = 19;
			this->Form_CreateAccount_Button_SignUp->Text = L"Sign Up";
			this->Form_CreateAccount_Button_SignUp->UseVisualStyleBackColor = false;
			this->Form_CreateAccount_Button_SignUp->Click += gcnew System::EventHandler(this, &Form_CreateAccount::Form_CreateAccount_Button_SignUp_Click);
			// 
			// Form_CreateAccount_TextBox_Key
			// 
			this->Form_CreateAccount_TextBox_Key->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Form_CreateAccount_TextBox_Key->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 15.75F));
			this->Form_CreateAccount_TextBox_Key->Location = System::Drawing::Point(52, 402);
			this->Form_CreateAccount_TextBox_Key->Margin = System::Windows::Forms::Padding(0);
			this->Form_CreateAccount_TextBox_Key->Name = L"Form_CreateAccount_TextBox_Key";
			this->Form_CreateAccount_TextBox_Key->Size = System::Drawing::Size(280, 28);
			this->Form_CreateAccount_TextBox_Key->TabIndex = 18;
			this->Form_CreateAccount_TextBox_Key->UseSystemPasswordChar = true;
			// 
			// Form_CreateAccount_TextBox_Password
			// 
			this->Form_CreateAccount_TextBox_Password->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Form_CreateAccount_TextBox_Password->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 15.75F));
			this->Form_CreateAccount_TextBox_Password->Location = System::Drawing::Point(52, 318);
			this->Form_CreateAccount_TextBox_Password->Margin = System::Windows::Forms::Padding(0);
			this->Form_CreateAccount_TextBox_Password->Name = L"Form_CreateAccount_TextBox_Password";
			this->Form_CreateAccount_TextBox_Password->Size = System::Drawing::Size(280, 28);
			this->Form_CreateAccount_TextBox_Password->TabIndex = 17;
			this->Form_CreateAccount_TextBox_Password->UseSystemPasswordChar = true;
			// 
			// Form_CreateAccount_TextBox_Username
			// 
			this->Form_CreateAccount_TextBox_Username->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Form_CreateAccount_TextBox_Username->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Form_CreateAccount_TextBox_Username->Location = System::Drawing::Point(52, 234);
			this->Form_CreateAccount_TextBox_Username->Margin = System::Windows::Forms::Padding(0);
			this->Form_CreateAccount_TextBox_Username->Name = L"Form_CreateAccount_TextBox_Username";
			this->Form_CreateAccount_TextBox_Username->Size = System::Drawing::Size(280, 28);
			this->Form_CreateAccount_TextBox_Username->TabIndex = 16;
			// 
			// Form_CreateAccount_Label_Key
			// 
			this->Form_CreateAccount_Label_Key->AutoSize = true;
			this->Form_CreateAccount_Label_Key->BackColor = System::Drawing::Color::Transparent;
			this->Form_CreateAccount_Label_Key->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold));
			this->Form_CreateAccount_Label_Key->Location = System::Drawing::Point(47, 373);
			this->Form_CreateAccount_Label_Key->Margin = System::Windows::Forms::Padding(0);
			this->Form_CreateAccount_Label_Key->Name = L"Form_CreateAccount_Label_Key";
			this->Form_CreateAccount_Label_Key->Size = System::Drawing::Size(48, 30);
			this->Form_CreateAccount_Label_Key->TabIndex = 15;
			this->Form_CreateAccount_Label_Key->Text = L"Key";
			// 
			// Form_CreateAccount_Label_Password
			// 
			this->Form_CreateAccount_Label_Password->AutoSize = true;
			this->Form_CreateAccount_Label_Password->BackColor = System::Drawing::Color::Transparent;
			this->Form_CreateAccount_Label_Password->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold));
			this->Form_CreateAccount_Label_Password->Location = System::Drawing::Point(47, 289);
			this->Form_CreateAccount_Label_Password->Margin = System::Windows::Forms::Padding(0);
			this->Form_CreateAccount_Label_Password->Name = L"Form_CreateAccount_Label_Password";
			this->Form_CreateAccount_Label_Password->Size = System::Drawing::Size(103, 30);
			this->Form_CreateAccount_Label_Password->TabIndex = 14;
			this->Form_CreateAccount_Label_Password->Text = L"Password";
			// 
			// Form_CreateAccount_Label_Username
			// 
			this->Form_CreateAccount_Label_Username->AutoSize = true;
			this->Form_CreateAccount_Label_Username->BackColor = System::Drawing::Color::Transparent;
			this->Form_CreateAccount_Label_Username->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Form_CreateAccount_Label_Username->Location = System::Drawing::Point(47, 205);
			this->Form_CreateAccount_Label_Username->Margin = System::Windows::Forms::Padding(0);
			this->Form_CreateAccount_Label_Username->Name = L"Form_CreateAccount_Label_Username";
			this->Form_CreateAccount_Label_Username->Size = System::Drawing::Size(109, 30);
			this->Form_CreateAccount_Label_Username->TabIndex = 13;
			this->Form_CreateAccount_Label_Username->Text = L"Username";
			// 
			// Form_CreateAccount_Label_JOINWITHUS
			// 
			this->Form_CreateAccount_Label_JOINWITHUS->AutoSize = true;
			this->Form_CreateAccount_Label_JOINWITHUS->BackColor = System::Drawing::Color::Transparent;
			this->Form_CreateAccount_Label_JOINWITHUS->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 24, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Form_CreateAccount_Label_JOINWITHUS->Location = System::Drawing::Point(86, 64);
			this->Form_CreateAccount_Label_JOINWITHUS->Name = L"Form_CreateAccount_Label_JOINWITHUS";
			this->Form_CreateAccount_Label_JOINWITHUS->Size = System::Drawing::Size(213, 45);
			this->Form_CreateAccount_Label_JOINWITHUS->TabIndex = 12;
			this->Form_CreateAccount_Label_JOINWITHUS->Text = L"JOIN WITH US";
			// 
			// Form_CreateAccount_Panel_Username
			// 
			this->Form_CreateAccount_Panel_Username->BackColor = System::Drawing::Color::Black;
			this->Form_CreateAccount_Panel_Username->Location = System::Drawing::Point(52, 268);
			this->Form_CreateAccount_Panel_Username->Margin = System::Windows::Forms::Padding(0);
			this->Form_CreateAccount_Panel_Username->Name = L"Form_CreateAccount_Panel_Username";
			this->Form_CreateAccount_Panel_Username->Size = System::Drawing::Size(280, 1);
			this->Form_CreateAccount_Panel_Username->TabIndex = 21;
			// 
			// Form_CreateAccount_Panel_Password
			// 
			this->Form_CreateAccount_Panel_Password->BackColor = System::Drawing::Color::Black;
			this->Form_CreateAccount_Panel_Password->Location = System::Drawing::Point(52, 352);
			this->Form_CreateAccount_Panel_Password->Margin = System::Windows::Forms::Padding(0);
			this->Form_CreateAccount_Panel_Password->Name = L"Form_CreateAccount_Panel_Password";
			this->Form_CreateAccount_Panel_Password->Size = System::Drawing::Size(280, 1);
			this->Form_CreateAccount_Panel_Password->TabIndex = 22;
			// 
			// Form_CreateAccount_Panel_Key
			// 
			this->Form_CreateAccount_Panel_Key->BackColor = System::Drawing::Color::Black;
			this->Form_CreateAccount_Panel_Key->Location = System::Drawing::Point(52, 436);
			this->Form_CreateAccount_Panel_Key->Margin = System::Windows::Forms::Padding(0);
			this->Form_CreateAccount_Panel_Key->Name = L"Form_CreateAccount_Panel_Key";
			this->Form_CreateAccount_Panel_Key->Size = System::Drawing::Size(280, 1);
			this->Form_CreateAccount_Panel_Key->TabIndex = 22;
			// 
			// UserControl_EducationModeOutput
			// 
			this->UserControl_EducationModeOutput->BackColor = System::Drawing::Color::White;
			this->UserControl_EducationModeOutput->Location = System::Drawing::Point(399, 0);
			this->UserControl_EducationModeOutput->Margin = System::Windows::Forms::Padding(0);
			this->UserControl_EducationModeOutput->Name = L"UserControl_EducationModeOutput";
			this->UserControl_EducationModeOutput->Size = System::Drawing::Size(396, 610);
			this->UserControl_EducationModeOutput->TabIndex = 36;
			this->UserControl_EducationModeOutput->TextBox_EducationMode_EdgeLineVisibility = true;
			this->UserControl_EducationModeOutput->TextBox_EducationMode_Height = 411;
			this->UserControl_EducationModeOutput->TextBox_EducationMode_Text = L"";
			this->UserControl_EducationModeOutput->TextBox_EducationMode_Topic_Location = System::Drawing::Point(70, 47);
			this->UserControl_EducationModeOutput->TextBox_EducationMode_Width = 290;
			// 
			// Form_CreateAccount_CheckBox_TermsAndConditions
			// 
			this->Form_CreateAccount_CheckBox_TermsAndConditions->AutoSize = true;
			this->Form_CreateAccount_CheckBox_TermsAndConditions->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Form_CreateAccount_CheckBox_TermsAndConditions->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)), static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->Form_CreateAccount_CheckBox_TermsAndConditions->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Form_CreateAccount_CheckBox_TermsAndConditions->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Form_CreateAccount_CheckBox_TermsAndConditions->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Form_CreateAccount_CheckBox_TermsAndConditions->Location = System::Drawing::Point(62, 478);
			this->Form_CreateAccount_CheckBox_TermsAndConditions->Name = L"Form_CreateAccount_CheckBox_TermsAndConditions";
			this->Form_CreateAccount_CheckBox_TermsAndConditions->Size = System::Drawing::Size(135, 25);
			this->Form_CreateAccount_CheckBox_TermsAndConditions->TabIndex = 37;
			this->Form_CreateAccount_CheckBox_TermsAndConditions->Text = L"I Agree with the";
			this->Form_CreateAccount_CheckBox_TermsAndConditions->UseVisualStyleBackColor = true;
			this->Form_CreateAccount_CheckBox_TermsAndConditions->CheckStateChanged += gcnew System::EventHandler(this, &Form_CreateAccount::Form_CreateAccount_CheckBox_TermsAndConditions_CheckStateChanged);
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
			this->PasswordShowHideButton_Hide->Location = System::Drawing::Point(302, 316);
			this->PasswordShowHideButton_Hide->Margin = System::Windows::Forms::Padding(0);
			this->PasswordShowHideButton_Hide->Name = L"PasswordShowHideButton_Hide";
			this->PasswordShowHideButton_Hide->Size = System::Drawing::Size(30, 30);
			this->PasswordShowHideButton_Hide->TabIndex = 39;
			this->PasswordShowHideButton_Hide->UseVisualStyleBackColor = false;
			this->PasswordShowHideButton_Hide->Visible = false;
			this->PasswordShowHideButton_Hide->Click += gcnew System::EventHandler(this, &Form_CreateAccount::PasswordShowHideButton_Hide_Click);
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
			this->PasswordShowHideButton_Show->Location = System::Drawing::Point(302, 316);
			this->PasswordShowHideButton_Show->Margin = System::Windows::Forms::Padding(0);
			this->PasswordShowHideButton_Show->Name = L"PasswordShowHideButton_Show";
			this->PasswordShowHideButton_Show->Size = System::Drawing::Size(30, 30);
			this->PasswordShowHideButton_Show->TabIndex = 38;
			this->PasswordShowHideButton_Show->UseVisualStyleBackColor = false;
			this->PasswordShowHideButton_Show->Click += gcnew System::EventHandler(this, &Form_CreateAccount::PasswordShowHideButton_Show_Click);
			// 
			// KeyShowHideButton_Show
			// 
			this->KeyShowHideButton_Show->BackColor = System::Drawing::Color::White;
			this->KeyShowHideButton_Show->Cursor = System::Windows::Forms::Cursors::Hand;
			this->KeyShowHideButton_Show->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->KeyShowHideButton_Show->FlatAppearance->BorderSize = 0;
			this->KeyShowHideButton_Show->FlatAppearance->MouseDownBackColor = System::Drawing::Color::WhiteSmoke;
			this->KeyShowHideButton_Show->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->KeyShowHideButton_Show->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->KeyShowHideButton_Show->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->KeyShowHideButton_Show->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"KeyShowHideButton_Show.Image")));
			this->KeyShowHideButton_Show->Location = System::Drawing::Point(302, 400);
			this->KeyShowHideButton_Show->Margin = System::Windows::Forms::Padding(0);
			this->KeyShowHideButton_Show->Name = L"KeyShowHideButton_Show";
			this->KeyShowHideButton_Show->Size = System::Drawing::Size(30, 30);
			this->KeyShowHideButton_Show->TabIndex = 40;
			this->KeyShowHideButton_Show->UseVisualStyleBackColor = false;
			this->KeyShowHideButton_Show->Click += gcnew System::EventHandler(this, &Form_CreateAccount::KeyShowHideButton_Show_Click);
			// 
			// KeyShowHideButton_Hide
			// 
			this->KeyShowHideButton_Hide->BackColor = System::Drawing::Color::White;
			this->KeyShowHideButton_Hide->Cursor = System::Windows::Forms::Cursors::Hand;
			this->KeyShowHideButton_Hide->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->KeyShowHideButton_Hide->FlatAppearance->BorderSize = 0;
			this->KeyShowHideButton_Hide->FlatAppearance->MouseDownBackColor = System::Drawing::Color::WhiteSmoke;
			this->KeyShowHideButton_Hide->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->KeyShowHideButton_Hide->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->KeyShowHideButton_Hide->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->KeyShowHideButton_Hide->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"KeyShowHideButton_Hide.Image")));
			this->KeyShowHideButton_Hide->Location = System::Drawing::Point(302, 400);
			this->KeyShowHideButton_Hide->Margin = System::Windows::Forms::Padding(0);
			this->KeyShowHideButton_Hide->Name = L"KeyShowHideButton_Hide";
			this->KeyShowHideButton_Hide->Size = System::Drawing::Size(30, 30);
			this->KeyShowHideButton_Hide->TabIndex = 41;
			this->KeyShowHideButton_Hide->UseVisualStyleBackColor = false;
			this->KeyShowHideButton_Hide->Visible = false;
			this->KeyShowHideButton_Hide->Click += gcnew System::EventHandler(this, &Form_CreateAccount::KeyShowHideButton_Hide_Click);
			// 
			// Form_CreateAccount_Label_TermsandConditionsLink
			// 
			this->Form_CreateAccount_Label_TermsandConditionsLink->AutoSize = true;
			this->Form_CreateAccount_Label_TermsandConditionsLink->BackColor = System::Drawing::Color::Transparent;
			this->Form_CreateAccount_Label_TermsandConditionsLink->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Form_CreateAccount_Label_TermsandConditionsLink->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Form_CreateAccount_Label_TermsandConditionsLink->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)), static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->Form_CreateAccount_Label_TermsandConditionsLink->Location = System::Drawing::Point(189, 480);
			this->Form_CreateAccount_Label_TermsandConditionsLink->Margin = System::Windows::Forms::Padding(0);
			this->Form_CreateAccount_Label_TermsandConditionsLink->Name = L"Form_CreateAccount_Label_TermsandConditionsLink";
			this->Form_CreateAccount_Label_TermsandConditionsLink->Size = System::Drawing::Size(160, 21);
			this->Form_CreateAccount_Label_TermsandConditionsLink->TabIndex = 48;
			this->Form_CreateAccount_Label_TermsandConditionsLink->Text = L"Terms and Conditions";
			this->Form_CreateAccount_Label_TermsandConditionsLink->Click += gcnew System::EventHandler(this, &Form_CreateAccount::Form_CreateAccount_Label_TermsandConditionsLink_Click);
			// 
			// Form_CreateAccount
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(384, 611);
			this->Controls->Add(this->Form_CreateAccount_Label_TermsandConditionsLink);
			this->Controls->Add(this->KeyShowHideButton_Show);
			this->Controls->Add(this->KeyShowHideButton_Hide);
			this->Controls->Add(this->PasswordShowHideButton_Show);
			this->Controls->Add(this->PasswordShowHideButton_Hide);
			this->Controls->Add(this->Form_CreateAccount_CheckBox_TermsAndConditions);
			this->Controls->Add(this->UserControl_EducationModeOutput);
			this->Controls->Add(this->Form_CreateAccount_Button_SignUp);
			this->Controls->Add(this->Form_CreateAccount_TextBox_Key);
			this->Controls->Add(this->Form_CreateAccount_TextBox_Password);
			this->Controls->Add(this->Form_CreateAccount_TextBox_Username);
			this->Controls->Add(this->Form_CreateAccount_Label_Key);
			this->Controls->Add(this->Form_CreateAccount_Label_Password);
			this->Controls->Add(this->Form_CreateAccount_Label_Username);
			this->Controls->Add(this->Form_CreateAccount_Label_JOINWITHUS);
			this->Controls->Add(this->Form_CreateAccount_Panel_Username);
			this->Controls->Add(this->Form_CreateAccount_Panel_Password);
			this->Controls->Add(this->Form_CreateAccount_Panel_Key);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Form_CreateAccount";
			this->ShowIcon = false;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Form_CreateAccount";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	System::Void CustomInitialize(void);
	System::Void CustomRelease(void);
		
	private: System::Void Form_CreateAccount_Button_SignUp_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Form_CreateAccount_CheckBox_TermsAndConditions_CheckStateChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Form_CreateAccount_Label_TermsandConditionsLink_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void KeyShowHideButton_Hide_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void KeyShowHideButton_Show_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void PasswordShowHideButton_Hide_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void PasswordShowHideButton_Show_Click(System::Object^ sender, System::EventArgs^ e);
};
}
