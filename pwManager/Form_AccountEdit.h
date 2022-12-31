#pragma once

namespace pwManager {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form_AccountEdit
	/// </summary>
	public ref class Form_AccountEdit : public System::Windows::Forms::Form
	{
	public:
		Form_AccountEdit(void)
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
		~Form_AccountEdit()
		{
			if (components)
			{
				delete components;
			}
			CustomRelease();
		}
	private: System::Windows::Forms::Button^ Form_AccountEdit_Button_Exit;
	private: System::Windows::Forms::Button^ Form_AccountEdit_Button_Save;
	private: System::Windows::Forms::TextBox^ Form_AccountEdit_TextBox_Key;
	private: System::Windows::Forms::TextBox^ Form_AccountEdit_TextBox_Password;
	private: System::Windows::Forms::TextBox^ Form_AccountEdit_TextBox_Username;
	private: System::Windows::Forms::Label^ Form_AccountEdit_Label_Key;
	private: System::Windows::Forms::Label^ Form_AccountEdit_Label_Password;
	private: System::Windows::Forms::Label^ Form_AccountEdit_Label_Username;
	private: System::Windows::Forms::Label^ Form_AccountEdit_Label_ACCOUNT;
	private: System::Windows::Forms::Panel^ Form_AccountEdit_Panel_Username;
	private: System::Windows::Forms::Panel^ Form_AccountEdit_Panel_Password;
	private: System::Windows::Forms::Panel^ Form_AccountEdit_Panel_Key;

	private: pwManagerClassLibrary::EducationModeOutput^ UserControl_EducationModeOutput;
	private: System::Windows::Forms::Button^ PasswordShowHideButton_Hide;
	private: System::Windows::Forms::Button^ PasswordShowHideButton_Show;
	private: System::Windows::Forms::Button^ KeyShowHideButton_Hide;

	private: System::Windows::Forms::Button^ KeyShowHideButton_Show;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form_AccountEdit::typeid));
			this->Form_AccountEdit_Button_Exit = (gcnew System::Windows::Forms::Button());
			this->Form_AccountEdit_Button_Save = (gcnew System::Windows::Forms::Button());
			this->Form_AccountEdit_TextBox_Key = (gcnew System::Windows::Forms::TextBox());
			this->Form_AccountEdit_TextBox_Password = (gcnew System::Windows::Forms::TextBox());
			this->Form_AccountEdit_TextBox_Username = (gcnew System::Windows::Forms::TextBox());
			this->Form_AccountEdit_Label_Key = (gcnew System::Windows::Forms::Label());
			this->Form_AccountEdit_Label_Password = (gcnew System::Windows::Forms::Label());
			this->Form_AccountEdit_Label_Username = (gcnew System::Windows::Forms::Label());
			this->Form_AccountEdit_Label_ACCOUNT = (gcnew System::Windows::Forms::Label());
			this->Form_AccountEdit_Panel_Username = (gcnew System::Windows::Forms::Panel());
			this->Form_AccountEdit_Panel_Password = (gcnew System::Windows::Forms::Panel());
			this->Form_AccountEdit_Panel_Key = (gcnew System::Windows::Forms::Panel());
			this->PasswordShowHideButton_Hide = (gcnew System::Windows::Forms::Button());
			this->PasswordShowHideButton_Show = (gcnew System::Windows::Forms::Button());
			this->KeyShowHideButton_Hide = (gcnew System::Windows::Forms::Button());
			this->KeyShowHideButton_Show = (gcnew System::Windows::Forms::Button());
			this->UserControl_EducationModeOutput = (gcnew pwManagerClassLibrary::EducationModeOutput());
			this->SuspendLayout();
			// 
			// Form_AccountEdit_Button_Exit
			// 
			this->Form_AccountEdit_Button_Exit->BackColor = System::Drawing::Color::White;
			this->Form_AccountEdit_Button_Exit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Form_AccountEdit_Button_Exit->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)), static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->Form_AccountEdit_Button_Exit->FlatAppearance->BorderSize = 3;
			this->Form_AccountEdit_Button_Exit->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Form_AccountEdit_Button_Exit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)), static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->Form_AccountEdit_Button_Exit->Location = System::Drawing::Point(197, 514);
			this->Form_AccountEdit_Button_Exit->Margin = System::Windows::Forms::Padding(0);
			this->Form_AccountEdit_Button_Exit->Name = L"Form_AccountEdit_Button_Exit";
			this->Form_AccountEdit_Button_Exit->Size = System::Drawing::Size(85, 45);
			this->Form_AccountEdit_Button_Exit->TabIndex = 31;
			this->Form_AccountEdit_Button_Exit->Text = L"Exit";
			this->Form_AccountEdit_Button_Exit->UseVisualStyleBackColor = false;
			this->Form_AccountEdit_Button_Exit->Click += gcnew System::EventHandler(this, &Form_AccountEdit::Form_AccountEdit_Button_Exit_Click);
			// 
			// Form_AccountEdit_Button_Save
			// 
			this->Form_AccountEdit_Button_Save->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)), static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->Form_AccountEdit_Button_Save->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Form_AccountEdit_Button_Save->FlatAppearance->BorderSize = 0;
			this->Form_AccountEdit_Button_Save->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold));
			this->Form_AccountEdit_Button_Save->ForeColor = System::Drawing::Color::White;
			this->Form_AccountEdit_Button_Save->Location = System::Drawing::Point(92, 514);
			this->Form_AccountEdit_Button_Save->Margin = System::Windows::Forms::Padding(0);
			this->Form_AccountEdit_Button_Save->Name = L"Form_AccountEdit_Button_Save";
			this->Form_AccountEdit_Button_Save->Size = System::Drawing::Size(85, 45);
			this->Form_AccountEdit_Button_Save->TabIndex = 30;
			this->Form_AccountEdit_Button_Save->Text = L"Save";
			this->Form_AccountEdit_Button_Save->UseVisualStyleBackColor = false;
			this->Form_AccountEdit_Button_Save->Click += gcnew System::EventHandler(this, &Form_AccountEdit::Form_AccountEdit_Button_Save_Click);
			// 
			// Form_AccountEdit_TextBox_Key
			// 
			this->Form_AccountEdit_TextBox_Key->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Form_AccountEdit_TextBox_Key->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 15.75F));
			this->Form_AccountEdit_TextBox_Key->Location = System::Drawing::Point(45, 398);
			this->Form_AccountEdit_TextBox_Key->Margin = System::Windows::Forms::Padding(0);
			this->Form_AccountEdit_TextBox_Key->Name = L"Form_AccountEdit_TextBox_Key";
			this->Form_AccountEdit_TextBox_Key->Size = System::Drawing::Size(280, 28);
			this->Form_AccountEdit_TextBox_Key->TabIndex = 29;
			this->Form_AccountEdit_TextBox_Key->UseSystemPasswordChar = true;
			// 
			// Form_AccountEdit_TextBox_Password
			// 
			this->Form_AccountEdit_TextBox_Password->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Form_AccountEdit_TextBox_Password->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 15.75F));
			this->Form_AccountEdit_TextBox_Password->Location = System::Drawing::Point(45, 314);
			this->Form_AccountEdit_TextBox_Password->Margin = System::Windows::Forms::Padding(0);
			this->Form_AccountEdit_TextBox_Password->Name = L"Form_AccountEdit_TextBox_Password";
			this->Form_AccountEdit_TextBox_Password->Size = System::Drawing::Size(280, 28);
			this->Form_AccountEdit_TextBox_Password->TabIndex = 28;
			this->Form_AccountEdit_TextBox_Password->UseSystemPasswordChar = true;
			// 
			// Form_AccountEdit_TextBox_Username
			// 
			this->Form_AccountEdit_TextBox_Username->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Form_AccountEdit_TextBox_Username->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Form_AccountEdit_TextBox_Username->Location = System::Drawing::Point(45, 230);
			this->Form_AccountEdit_TextBox_Username->Margin = System::Windows::Forms::Padding(0);
			this->Form_AccountEdit_TextBox_Username->Name = L"Form_AccountEdit_TextBox_Username";
			this->Form_AccountEdit_TextBox_Username->Size = System::Drawing::Size(280, 28);
			this->Form_AccountEdit_TextBox_Username->TabIndex = 27;
			// 
			// Form_AccountEdit_Label_Key
			// 
			this->Form_AccountEdit_Label_Key->AutoSize = true;
			this->Form_AccountEdit_Label_Key->BackColor = System::Drawing::Color::Transparent;
			this->Form_AccountEdit_Label_Key->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold));
			this->Form_AccountEdit_Label_Key->Location = System::Drawing::Point(40, 369);
			this->Form_AccountEdit_Label_Key->Margin = System::Windows::Forms::Padding(0);
			this->Form_AccountEdit_Label_Key->Name = L"Form_AccountEdit_Label_Key";
			this->Form_AccountEdit_Label_Key->Size = System::Drawing::Size(48, 30);
			this->Form_AccountEdit_Label_Key->TabIndex = 26;
			this->Form_AccountEdit_Label_Key->Text = L"Key";
			// 
			// Form_AccountEdit_Label_Password
			// 
			this->Form_AccountEdit_Label_Password->AutoSize = true;
			this->Form_AccountEdit_Label_Password->BackColor = System::Drawing::Color::Transparent;
			this->Form_AccountEdit_Label_Password->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold));
			this->Form_AccountEdit_Label_Password->Location = System::Drawing::Point(40, 285);
			this->Form_AccountEdit_Label_Password->Margin = System::Windows::Forms::Padding(0);
			this->Form_AccountEdit_Label_Password->Name = L"Form_AccountEdit_Label_Password";
			this->Form_AccountEdit_Label_Password->Size = System::Drawing::Size(103, 30);
			this->Form_AccountEdit_Label_Password->TabIndex = 25;
			this->Form_AccountEdit_Label_Password->Text = L"Password";
			// 
			// Form_AccountEdit_Label_Username
			// 
			this->Form_AccountEdit_Label_Username->AutoSize = true;
			this->Form_AccountEdit_Label_Username->BackColor = System::Drawing::Color::Transparent;
			this->Form_AccountEdit_Label_Username->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Form_AccountEdit_Label_Username->Location = System::Drawing::Point(40, 201);
			this->Form_AccountEdit_Label_Username->Margin = System::Windows::Forms::Padding(0);
			this->Form_AccountEdit_Label_Username->Name = L"Form_AccountEdit_Label_Username";
			this->Form_AccountEdit_Label_Username->Size = System::Drawing::Size(109, 30);
			this->Form_AccountEdit_Label_Username->TabIndex = 24;
			this->Form_AccountEdit_Label_Username->Text = L"Username";
			// 
			// Form_AccountEdit_Label_ACCOUNT
			// 
			this->Form_AccountEdit_Label_ACCOUNT->AutoSize = true;
			this->Form_AccountEdit_Label_ACCOUNT->BackColor = System::Drawing::Color::Transparent;
			this->Form_AccountEdit_Label_ACCOUNT->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 24, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Form_AccountEdit_Label_ACCOUNT->Location = System::Drawing::Point(105, 65);
			this->Form_AccountEdit_Label_ACCOUNT->Name = L"Form_AccountEdit_Label_ACCOUNT";
			this->Form_AccountEdit_Label_ACCOUNT->Size = System::Drawing::Size(161, 45);
			this->Form_AccountEdit_Label_ACCOUNT->TabIndex = 23;
			this->Form_AccountEdit_Label_ACCOUNT->Text = L"ACCOUNT";
			// 
			// Form_AccountEdit_Panel_Username
			// 
			this->Form_AccountEdit_Panel_Username->BackColor = System::Drawing::Color::Black;
			this->Form_AccountEdit_Panel_Username->Location = System::Drawing::Point(45, 264);
			this->Form_AccountEdit_Panel_Username->Margin = System::Windows::Forms::Padding(0);
			this->Form_AccountEdit_Panel_Username->Name = L"Form_AccountEdit_Panel_Username";
			this->Form_AccountEdit_Panel_Username->Size = System::Drawing::Size(280, 1);
			this->Form_AccountEdit_Panel_Username->TabIndex = 32;
			// 
			// Form_AccountEdit_Panel_Password
			// 
			this->Form_AccountEdit_Panel_Password->BackColor = System::Drawing::Color::Black;
			this->Form_AccountEdit_Panel_Password->Location = System::Drawing::Point(45, 348);
			this->Form_AccountEdit_Panel_Password->Margin = System::Windows::Forms::Padding(0);
			this->Form_AccountEdit_Panel_Password->Name = L"Form_AccountEdit_Panel_Password";
			this->Form_AccountEdit_Panel_Password->Size = System::Drawing::Size(280, 1);
			this->Form_AccountEdit_Panel_Password->TabIndex = 33;
			// 
			// Form_AccountEdit_Panel_Key
			// 
			this->Form_AccountEdit_Panel_Key->BackColor = System::Drawing::Color::Black;
			this->Form_AccountEdit_Panel_Key->Location = System::Drawing::Point(45, 432);
			this->Form_AccountEdit_Panel_Key->Margin = System::Windows::Forms::Padding(0);
			this->Form_AccountEdit_Panel_Key->Name = L"Form_AccountEdit_Panel_Key";
			this->Form_AccountEdit_Panel_Key->Size = System::Drawing::Size(280, 1);
			this->Form_AccountEdit_Panel_Key->TabIndex = 34;
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
			this->PasswordShowHideButton_Hide->Location = System::Drawing::Point(295, 312);
			this->PasswordShowHideButton_Hide->Margin = System::Windows::Forms::Padding(0);
			this->PasswordShowHideButton_Hide->Name = L"PasswordShowHideButton_Hide";
			this->PasswordShowHideButton_Hide->Size = System::Drawing::Size(30, 30);
			this->PasswordShowHideButton_Hide->TabIndex = 37;
			this->PasswordShowHideButton_Hide->UseVisualStyleBackColor = false;
			this->PasswordShowHideButton_Hide->Visible = false;
			this->PasswordShowHideButton_Hide->Click += gcnew System::EventHandler(this, &Form_AccountEdit::PasswordShowHideButton_Hide_Click);
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
			this->PasswordShowHideButton_Show->Location = System::Drawing::Point(295, 312);
			this->PasswordShowHideButton_Show->Margin = System::Windows::Forms::Padding(0);
			this->PasswordShowHideButton_Show->Name = L"PasswordShowHideButton_Show";
			this->PasswordShowHideButton_Show->Size = System::Drawing::Size(30, 30);
			this->PasswordShowHideButton_Show->TabIndex = 36;
			this->PasswordShowHideButton_Show->UseVisualStyleBackColor = false;
			this->PasswordShowHideButton_Show->Click += gcnew System::EventHandler(this, &Form_AccountEdit::PasswordShowHideButton_Show_Click);
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
			this->KeyShowHideButton_Hide->Location = System::Drawing::Point(295, 396);
			this->KeyShowHideButton_Hide->Margin = System::Windows::Forms::Padding(0);
			this->KeyShowHideButton_Hide->Name = L"KeyShowHideButton_Hide";
			this->KeyShowHideButton_Hide->Size = System::Drawing::Size(30, 30);
			this->KeyShowHideButton_Hide->TabIndex = 39;
			this->KeyShowHideButton_Hide->UseVisualStyleBackColor = false;
			this->KeyShowHideButton_Hide->Visible = false;
			this->KeyShowHideButton_Hide->Click += gcnew System::EventHandler(this, &Form_AccountEdit::KeyShowHideButton_Hide_Click);
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
			this->KeyShowHideButton_Show->Location = System::Drawing::Point(295, 396);
			this->KeyShowHideButton_Show->Margin = System::Windows::Forms::Padding(0);
			this->KeyShowHideButton_Show->Name = L"KeyShowHideButton_Show";
			this->KeyShowHideButton_Show->Size = System::Drawing::Size(30, 30);
			this->KeyShowHideButton_Show->TabIndex = 38;
			this->KeyShowHideButton_Show->UseVisualStyleBackColor = false;
			this->KeyShowHideButton_Show->Click += gcnew System::EventHandler(this, &Form_AccountEdit::KeyShowHideButton_Show_Click);
			// 
			// UserControl_EducationModeOutput
			// 
			this->UserControl_EducationModeOutput->BackColor = System::Drawing::Color::White;
			this->UserControl_EducationModeOutput->Location = System::Drawing::Point(399, 0);
			this->UserControl_EducationModeOutput->Margin = System::Windows::Forms::Padding(0);
			this->UserControl_EducationModeOutput->Name = L"UserControl_EducationModeOutput";
			this->UserControl_EducationModeOutput->Size = System::Drawing::Size(396, 610);
			this->UserControl_EducationModeOutput->TabIndex = 35;
			this->UserControl_EducationModeOutput->TextBox_EducationMode_EdgeLineVisibility = true;
			this->UserControl_EducationModeOutput->TextBox_EducationMode_Height = 411;
			this->UserControl_EducationModeOutput->TextBox_EducationMode_Text = L"";
			this->UserControl_EducationModeOutput->TextBox_EducationMode_Topic_Location = System::Drawing::Point(70, 47);
			this->UserControl_EducationModeOutput->TextBox_EducationMode_Width = 290;
			// 
			// Form_AccountEdit
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(384, 611);
			this->Controls->Add(this->PasswordShowHideButton_Show);
			this->Controls->Add(this->KeyShowHideButton_Show);
			this->Controls->Add(this->KeyShowHideButton_Hide);
			this->Controls->Add(this->PasswordShowHideButton_Hide);
			this->Controls->Add(this->UserControl_EducationModeOutput);
			this->Controls->Add(this->Form_AccountEdit_Button_Exit);
			this->Controls->Add(this->Form_AccountEdit_Button_Save);
			this->Controls->Add(this->Form_AccountEdit_TextBox_Key);
			this->Controls->Add(this->Form_AccountEdit_TextBox_Password);
			this->Controls->Add(this->Form_AccountEdit_TextBox_Username);
			this->Controls->Add(this->Form_AccountEdit_Label_Key);
			this->Controls->Add(this->Form_AccountEdit_Label_Password);
			this->Controls->Add(this->Form_AccountEdit_Label_Username);
			this->Controls->Add(this->Form_AccountEdit_Label_ACCOUNT);
			this->Controls->Add(this->Form_AccountEdit_Panel_Username);
			this->Controls->Add(this->Form_AccountEdit_Panel_Password);
			this->Controls->Add(this->Form_AccountEdit_Panel_Key);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 42, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Form_AccountEdit";
			this->ShowIcon = false;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Form_AccountEdit";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void CustomInitialize(void);
	private: System::Void CustomRelease(void);
	
	private: System::Void Form_AccountEdit_Button_Save_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Form_AccountEdit_Button_Exit_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void KeyShowHideButton_Hide_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void KeyShowHideButton_Show_Click(System::Object^ sender, System::EventArgs^ e);
	
	private: System::Void PasswordShowHideButton_Hide_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void PasswordShowHideButton_Show_Click(System::Object^ sender, System::EventArgs^ e);
};
}
