#pragma once

namespace pwManager {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form_Login
	/// </summary>
	public ref class Form_Login : public System::Windows::Forms::Form
	{
	public:
		Form_Login(void)
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
		~Form_Login()
		{
			if (components)
			{
				delete components;
			}
			CustomRelease();
		}
	private: System::Windows::Forms::TextBox^ Form_Login_TextBox_Password;
	private: System::Windows::Forms::TextBox^ Form_Login_TextBox_Username;
	private: System::Windows::Forms::Label^ Form_Login_Label_Password;
	private: System::Windows::Forms::Label^ Form_Login_Label_Username;
	private: System::Windows::Forms::Label^ Form_Login_Label_WELCOMEBACK;
	private: System::Windows::Forms::Panel^ Form_Login_Panel_Username;
	private: System::Windows::Forms::Panel^ Form_Login_Panel_Password;
	private: System::Windows::Forms::Button^ Form_Login_Button_SignIn;
	private: System::Windows::Forms::Label^ Form_Login_Label_CreateNewAccount;

	private: pwManagerClassLibrary::EducationModeOutput^ UserControl_EducationModeOutput;
	private: System::Windows::Forms::Button^ PasswordShowHideButton_Show;
	private: System::Windows::Forms::Button^ PasswordShowHideButton_Hide;
	private: System::Windows::Forms::Label^ Form_Login_Label_NewHere;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form_Login::typeid));
			this->Form_Login_TextBox_Password = (gcnew System::Windows::Forms::TextBox());
			this->Form_Login_TextBox_Username = (gcnew System::Windows::Forms::TextBox());
			this->Form_Login_Label_Password = (gcnew System::Windows::Forms::Label());
			this->Form_Login_Label_Username = (gcnew System::Windows::Forms::Label());
			this->Form_Login_Label_WELCOMEBACK = (gcnew System::Windows::Forms::Label());
			this->Form_Login_Panel_Username = (gcnew System::Windows::Forms::Panel());
			this->Form_Login_Panel_Password = (gcnew System::Windows::Forms::Panel());
			this->Form_Login_Button_SignIn = (gcnew System::Windows::Forms::Button());
			this->Form_Login_Label_CreateNewAccount = (gcnew System::Windows::Forms::Label());
			this->PasswordShowHideButton_Show = (gcnew System::Windows::Forms::Button());
			this->PasswordShowHideButton_Hide = (gcnew System::Windows::Forms::Button());
			this->Form_Login_Label_NewHere = (gcnew System::Windows::Forms::Label());
			this->UserControl_EducationModeOutput = (gcnew pwManagerClassLibrary::EducationModeOutput());
			this->SuspendLayout();
			// 
			// Form_Login_TextBox_Password
			// 
			this->Form_Login_TextBox_Password->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Form_Login_TextBox_Password->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 15.75F));
			this->Form_Login_TextBox_Password->Location = System::Drawing::Point(55, 342);
			this->Form_Login_TextBox_Password->Margin = System::Windows::Forms::Padding(0);
			this->Form_Login_TextBox_Password->Name = L"Form_Login_TextBox_Password";
			this->Form_Login_TextBox_Password->Size = System::Drawing::Size(280, 28);
			this->Form_Login_TextBox_Password->TabIndex = 40;
			this->Form_Login_TextBox_Password->UseSystemPasswordChar = true;
			// 
			// Form_Login_TextBox_Username
			// 
			this->Form_Login_TextBox_Username->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Form_Login_TextBox_Username->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Form_Login_TextBox_Username->Location = System::Drawing::Point(55, 258);
			this->Form_Login_TextBox_Username->Margin = System::Windows::Forms::Padding(0);
			this->Form_Login_TextBox_Username->Name = L"Form_Login_TextBox_Username";
			this->Form_Login_TextBox_Username->Size = System::Drawing::Size(280, 28);
			this->Form_Login_TextBox_Username->TabIndex = 39;
			// 
			// Form_Login_Label_Password
			// 
			this->Form_Login_Label_Password->AutoSize = true;
			this->Form_Login_Label_Password->BackColor = System::Drawing::Color::Transparent;
			this->Form_Login_Label_Password->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold));
			this->Form_Login_Label_Password->Location = System::Drawing::Point(50, 313);
			this->Form_Login_Label_Password->Margin = System::Windows::Forms::Padding(0);
			this->Form_Login_Label_Password->Name = L"Form_Login_Label_Password";
			this->Form_Login_Label_Password->Size = System::Drawing::Size(103, 30);
			this->Form_Login_Label_Password->TabIndex = 37;
			this->Form_Login_Label_Password->Text = L"Password";
			// 
			// Form_Login_Label_Username
			// 
			this->Form_Login_Label_Username->AutoSize = true;
			this->Form_Login_Label_Username->BackColor = System::Drawing::Color::Transparent;
			this->Form_Login_Label_Username->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Form_Login_Label_Username->Location = System::Drawing::Point(50, 229);
			this->Form_Login_Label_Username->Margin = System::Windows::Forms::Padding(0);
			this->Form_Login_Label_Username->Name = L"Form_Login_Label_Username";
			this->Form_Login_Label_Username->Size = System::Drawing::Size(109, 30);
			this->Form_Login_Label_Username->TabIndex = 36;
			this->Form_Login_Label_Username->Text = L"Username";
			// 
			// Form_Login_Label_WELCOMEBACK
			// 
			this->Form_Login_Label_WELCOMEBACK->AutoSize = true;
			this->Form_Login_Label_WELCOMEBACK->BackColor = System::Drawing::Color::Transparent;
			this->Form_Login_Label_WELCOMEBACK->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 24, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Form_Login_Label_WELCOMEBACK->Location = System::Drawing::Point(68, 69);
			this->Form_Login_Label_WELCOMEBACK->Name = L"Form_Login_Label_WELCOMEBACK";
			this->Form_Login_Label_WELCOMEBACK->Size = System::Drawing::Size(246, 45);
			this->Form_Login_Label_WELCOMEBACK->TabIndex = 35;
			this->Form_Login_Label_WELCOMEBACK->Text = L"WELCOME BACK";
			// 
			// Form_Login_Panel_Username
			// 
			this->Form_Login_Panel_Username->BackColor = System::Drawing::Color::Black;
			this->Form_Login_Panel_Username->Location = System::Drawing::Point(55, 292);
			this->Form_Login_Panel_Username->Margin = System::Windows::Forms::Padding(0);
			this->Form_Login_Panel_Username->Name = L"Form_Login_Panel_Username";
			this->Form_Login_Panel_Username->Size = System::Drawing::Size(280, 1);
			this->Form_Login_Panel_Username->TabIndex = 44;
			// 
			// Form_Login_Panel_Password
			// 
			this->Form_Login_Panel_Password->BackColor = System::Drawing::Color::Black;
			this->Form_Login_Panel_Password->Location = System::Drawing::Point(55, 376);
			this->Form_Login_Panel_Password->Margin = System::Windows::Forms::Padding(0);
			this->Form_Login_Panel_Password->Name = L"Form_Login_Panel_Password";
			this->Form_Login_Panel_Password->Size = System::Drawing::Size(280, 1);
			this->Form_Login_Panel_Password->TabIndex = 45;
			// 
			// Form_Login_Button_SignIn
			// 
			this->Form_Login_Button_SignIn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)), static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->Form_Login_Button_SignIn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Form_Login_Button_SignIn->FlatAppearance->BorderSize = 0;
			this->Form_Login_Button_SignIn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold));
			this->Form_Login_Button_SignIn->ForeColor = System::Drawing::Color::White;
			this->Form_Login_Button_SignIn->Location = System::Drawing::Point(126, 443);
			this->Form_Login_Button_SignIn->Margin = System::Windows::Forms::Padding(0);
			this->Form_Login_Button_SignIn->Name = L"Form_Login_Button_SignIn";
			this->Form_Login_Button_SignIn->Size = System::Drawing::Size(120, 45);
			this->Form_Login_Button_SignIn->TabIndex = 46;
			this->Form_Login_Button_SignIn->Text = L"Sign In";
			this->Form_Login_Button_SignIn->UseVisualStyleBackColor = false;
			this->Form_Login_Button_SignIn->Click += gcnew System::EventHandler(this, &Form_Login::Form_Login_Button_SignIn_Click);
			// 
			// Form_Login_Label_CreateNewAccount
			// 
			this->Form_Login_Label_CreateNewAccount->AutoSize = true;
			this->Form_Login_Label_CreateNewAccount->BackColor = System::Drawing::Color::Transparent;
			this->Form_Login_Label_CreateNewAccount->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Form_Login_Label_CreateNewAccount->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Form_Login_Label_CreateNewAccount->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)), static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->Form_Login_Label_CreateNewAccount->Location = System::Drawing::Point(171, 502);
			this->Form_Login_Label_CreateNewAccount->Margin = System::Windows::Forms::Padding(0);
			this->Form_Login_Label_CreateNewAccount->Name = L"Form_Login_Label_CreateNewAccount";
			this->Form_Login_Label_CreateNewAccount->Size = System::Drawing::Size(134, 21);
			this->Form_Login_Label_CreateNewAccount->TabIndex = 47;
			this->Form_Login_Label_CreateNewAccount->Text = L"Create an account";
			this->Form_Login_Label_CreateNewAccount->Click += gcnew System::EventHandler(this, &Form_Login::Form_Login_Label_CreateNewAccount_Click);
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
			this->PasswordShowHideButton_Show->Location = System::Drawing::Point(305, 340);
			this->PasswordShowHideButton_Show->Margin = System::Windows::Forms::Padding(0);
			this->PasswordShowHideButton_Show->Name = L"PasswordShowHideButton_Show";
			this->PasswordShowHideButton_Show->Size = System::Drawing::Size(30, 30);
			this->PasswordShowHideButton_Show->TabIndex = 50;
			this->PasswordShowHideButton_Show->UseVisualStyleBackColor = false;
			this->PasswordShowHideButton_Show->Click += gcnew System::EventHandler(this, &Form_Login::PasswordShowHideButton_Show_Click);
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
			this->PasswordShowHideButton_Hide->Location = System::Drawing::Point(305, 340);
			this->PasswordShowHideButton_Hide->Margin = System::Windows::Forms::Padding(0);
			this->PasswordShowHideButton_Hide->Name = L"PasswordShowHideButton_Hide";
			this->PasswordShowHideButton_Hide->Size = System::Drawing::Size(30, 30);
			this->PasswordShowHideButton_Hide->TabIndex = 51;
			this->PasswordShowHideButton_Hide->UseVisualStyleBackColor = false;
			this->PasswordShowHideButton_Hide->Visible = false;
			this->PasswordShowHideButton_Hide->Click += gcnew System::EventHandler(this, &Form_Login::PasswordShowHideButton_Hide_Click);
			// 
			// Form_Login_Label_NewHere
			// 
			this->Form_Login_Label_NewHere->AutoSize = true;
			this->Form_Login_Label_NewHere->BackColor = System::Drawing::Color::Transparent;
			this->Form_Login_Label_NewHere->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Form_Login_Label_NewHere->Location = System::Drawing::Point(91, 502);
			this->Form_Login_Label_NewHere->Name = L"Form_Login_Label_NewHere";
			this->Form_Login_Label_NewHere->Size = System::Drawing::Size(84, 21);
			this->Form_Login_Label_NewHere->TabIndex = 52;
			this->Form_Login_Label_NewHere->Text = L"New here\?";
			// 
			// UserControl_EducationModeOutput
			// 
			this->UserControl_EducationModeOutput->BackColor = System::Drawing::Color::White;
			this->UserControl_EducationModeOutput->Location = System::Drawing::Point(399, 0);
			this->UserControl_EducationModeOutput->Margin = System::Windows::Forms::Padding(0);
			this->UserControl_EducationModeOutput->Name = L"UserControl_EducationModeOutput";
			this->UserControl_EducationModeOutput->Size = System::Drawing::Size(396, 610);
			this->UserControl_EducationModeOutput->TabIndex = 49;
			this->UserControl_EducationModeOutput->TextBox_EducationMode_EdgeLineVisibility = true;
			this->UserControl_EducationModeOutput->TextBox_EducationMode_Height = 411;
			this->UserControl_EducationModeOutput->TextBox_EducationMode_Text = L"";
			this->UserControl_EducationModeOutput->TextBox_EducationMode_Topic_Location = System::Drawing::Point(70, 47);
			this->UserControl_EducationModeOutput->TextBox_EducationMode_Width = 290;
			// 
			// Form_Login
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(384, 611);
			this->Controls->Add(this->Form_Login_Label_NewHere);
			this->Controls->Add(this->Form_Login_TextBox_Username);
			this->Controls->Add(this->PasswordShowHideButton_Show);
			this->Controls->Add(this->PasswordShowHideButton_Hide);
			this->Controls->Add(this->UserControl_EducationModeOutput);
			this->Controls->Add(this->Form_Login_Label_CreateNewAccount);
			this->Controls->Add(this->Form_Login_Button_SignIn);
			this->Controls->Add(this->Form_Login_TextBox_Password);
			this->Controls->Add(this->Form_Login_Label_Password);
			this->Controls->Add(this->Form_Login_Label_Username);
			this->Controls->Add(this->Form_Login_Label_WELCOMEBACK);
			this->Controls->Add(this->Form_Login_Panel_Username);
			this->Controls->Add(this->Form_Login_Panel_Password);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Form_Login";
			this->ShowIcon = false;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Form_Login";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: void CustomInitialize(void);
	private: System::Void CustomRelease(void);

	private: System::Void Form_Login_Button_SignIn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Form_Login_Label_CreateNewAccount_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void PasswordShowHideButton_Hide_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void PasswordShowHideButton_Show_Click(System::Object^ sender, System::EventArgs^ e);
};
}
