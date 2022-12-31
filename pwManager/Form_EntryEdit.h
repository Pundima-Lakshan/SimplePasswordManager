#pragma once

namespace pwManager {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form_EntryEdit
	/// </summary>
	public ref class Form_EntryEdit : public System::Windows::Forms::Form
	{
	public:
		Form_EntryEdit(void)
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
		~Form_EntryEdit()
		{
			if (components)
			{
				delete components;
			}
			CustomRelease();
		}
	private: System::Windows::Forms::Button^ Form_EntryEdit_Button_Exit;
	private: System::Windows::Forms::Button^ Form_EntryEdit_Button_Save;
	private: System::Windows::Forms::TextBox^ Form_EntryEdit_TextBox_Password;
	private: System::Windows::Forms::TextBox^ Form_EntryEdit_TextBox_Username;
	private: System::Windows::Forms::TextBox^ Form_EntryEdit_TextBox_URL;
	private: System::Windows::Forms::Label^ Form_EntryEdit_Label_Password;

	private: System::Windows::Forms::Label^ Form_EntryEdit_Label_Username;
	private: System::Windows::Forms::Label^ Form_EntryEdit_Label_URL;
	private: System::Windows::Forms::Label^ Form_EntryEdit_Label_VaultEntry;
	private: System::Windows::Forms::Panel^ Form_EntryEdit_Panel_URL;
	private: System::Windows::Forms::Panel^ Form_EntryEdit_Panel_Username;
	private: System::Windows::Forms::Panel^ Form_EntryEdit_Panel_Password;

	private: pwManagerClassLibrary::EducationModeOutput^ UserControl_EducationModeOutput;
	private: System::Windows::Forms::Button^ PasswordShowHideButton_Show;
	private: System::Windows::Forms::Button^ PasswordShowHideButton_Hide;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form_EntryEdit::typeid));
			this->Form_EntryEdit_Button_Exit = (gcnew System::Windows::Forms::Button());
			this->Form_EntryEdit_Button_Save = (gcnew System::Windows::Forms::Button());
			this->Form_EntryEdit_TextBox_Password = (gcnew System::Windows::Forms::TextBox());
			this->Form_EntryEdit_TextBox_Username = (gcnew System::Windows::Forms::TextBox());
			this->Form_EntryEdit_TextBox_URL = (gcnew System::Windows::Forms::TextBox());
			this->Form_EntryEdit_Label_Password = (gcnew System::Windows::Forms::Label());
			this->Form_EntryEdit_Label_Username = (gcnew System::Windows::Forms::Label());
			this->Form_EntryEdit_Label_URL = (gcnew System::Windows::Forms::Label());
			this->Form_EntryEdit_Label_VaultEntry = (gcnew System::Windows::Forms::Label());
			this->Form_EntryEdit_Panel_URL = (gcnew System::Windows::Forms::Panel());
			this->Form_EntryEdit_Panel_Username = (gcnew System::Windows::Forms::Panel());
			this->Form_EntryEdit_Panel_Password = (gcnew System::Windows::Forms::Panel());
			this->PasswordShowHideButton_Show = (gcnew System::Windows::Forms::Button());
			this->PasswordShowHideButton_Hide = (gcnew System::Windows::Forms::Button());
			this->UserControl_EducationModeOutput = (gcnew pwManagerClassLibrary::EducationModeOutput());
			this->SuspendLayout();
			// 
			// Form_EntryEdit_Button_Exit
			// 
			this->Form_EntryEdit_Button_Exit->BackColor = System::Drawing::Color::White;
			this->Form_EntryEdit_Button_Exit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Form_EntryEdit_Button_Exit->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)), static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->Form_EntryEdit_Button_Exit->FlatAppearance->BorderSize = 3;
			this->Form_EntryEdit_Button_Exit->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Form_EntryEdit_Button_Exit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)), static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->Form_EntryEdit_Button_Exit->Location = System::Drawing::Point(189, 503);
			this->Form_EntryEdit_Button_Exit->Margin = System::Windows::Forms::Padding(0);
			this->Form_EntryEdit_Button_Exit->Name = L"Form_EntryEdit_Button_Exit";
			this->Form_EntryEdit_Button_Exit->Size = System::Drawing::Size(85, 45);
			this->Form_EntryEdit_Button_Exit->TabIndex = 43;
			this->Form_EntryEdit_Button_Exit->Text = L"Exit";
			this->Form_EntryEdit_Button_Exit->UseVisualStyleBackColor = false;
			this->Form_EntryEdit_Button_Exit->Click += gcnew System::EventHandler(this, &Form_EntryEdit::Form_EntryEdit_Button_Exit_Click);
			// 
			// Form_EntryEdit_Button_Save
			// 
			this->Form_EntryEdit_Button_Save->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)), static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->Form_EntryEdit_Button_Save->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Form_EntryEdit_Button_Save->FlatAppearance->BorderSize = 0;
			this->Form_EntryEdit_Button_Save->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold));
			this->Form_EntryEdit_Button_Save->ForeColor = System::Drawing::Color::White;
			this->Form_EntryEdit_Button_Save->Location = System::Drawing::Point(89, 503);
			this->Form_EntryEdit_Button_Save->Margin = System::Windows::Forms::Padding(0);
			this->Form_EntryEdit_Button_Save->Name = L"Form_EntryEdit_Button_Save";
			this->Form_EntryEdit_Button_Save->Size = System::Drawing::Size(85, 45);
			this->Form_EntryEdit_Button_Save->TabIndex = 42;
			this->Form_EntryEdit_Button_Save->Text = L"Save";
			this->Form_EntryEdit_Button_Save->UseVisualStyleBackColor = false;
			this->Form_EntryEdit_Button_Save->Click += gcnew System::EventHandler(this, &Form_EntryEdit::Form_EntryEdit_Button_Save_Click);
			// 
			// Form_EntryEdit_TextBox_Password
			// 
			this->Form_EntryEdit_TextBox_Password->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Form_EntryEdit_TextBox_Password->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 15.75F));
			this->Form_EntryEdit_TextBox_Password->Location = System::Drawing::Point(48, 387);
			this->Form_EntryEdit_TextBox_Password->Margin = System::Windows::Forms::Padding(0);
			this->Form_EntryEdit_TextBox_Password->Name = L"Form_EntryEdit_TextBox_Password";
			this->Form_EntryEdit_TextBox_Password->Size = System::Drawing::Size(280, 28);
			this->Form_EntryEdit_TextBox_Password->TabIndex = 41;
			this->Form_EntryEdit_TextBox_Password->UseSystemPasswordChar = true;
			// 
			// Form_EntryEdit_TextBox_Username
			// 
			this->Form_EntryEdit_TextBox_Username->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Form_EntryEdit_TextBox_Username->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 15.75F));
			this->Form_EntryEdit_TextBox_Username->Location = System::Drawing::Point(48, 303);
			this->Form_EntryEdit_TextBox_Username->Margin = System::Windows::Forms::Padding(0);
			this->Form_EntryEdit_TextBox_Username->Name = L"Form_EntryEdit_TextBox_Username";
			this->Form_EntryEdit_TextBox_Username->Size = System::Drawing::Size(280, 28);
			this->Form_EntryEdit_TextBox_Username->TabIndex = 40;
			// 
			// Form_EntryEdit_TextBox_URL
			// 
			this->Form_EntryEdit_TextBox_URL->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Form_EntryEdit_TextBox_URL->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Form_EntryEdit_TextBox_URL->Location = System::Drawing::Point(48, 219);
			this->Form_EntryEdit_TextBox_URL->Margin = System::Windows::Forms::Padding(0);
			this->Form_EntryEdit_TextBox_URL->Name = L"Form_EntryEdit_TextBox_URL";
			this->Form_EntryEdit_TextBox_URL->Size = System::Drawing::Size(280, 28);
			this->Form_EntryEdit_TextBox_URL->TabIndex = 39;
			// 
			// Form_EntryEdit_Label_Password
			// 
			this->Form_EntryEdit_Label_Password->AutoSize = true;
			this->Form_EntryEdit_Label_Password->BackColor = System::Drawing::Color::Transparent;
			this->Form_EntryEdit_Label_Password->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold));
			this->Form_EntryEdit_Label_Password->Location = System::Drawing::Point(43, 358);
			this->Form_EntryEdit_Label_Password->Margin = System::Windows::Forms::Padding(0);
			this->Form_EntryEdit_Label_Password->Name = L"Form_EntryEdit_Label_Password";
			this->Form_EntryEdit_Label_Password->Size = System::Drawing::Size(103, 30);
			this->Form_EntryEdit_Label_Password->TabIndex = 38;
			this->Form_EntryEdit_Label_Password->Text = L"Password";
			// 
			// Form_EntryEdit_Label_Username
			// 
			this->Form_EntryEdit_Label_Username->AutoSize = true;
			this->Form_EntryEdit_Label_Username->BackColor = System::Drawing::Color::Transparent;
			this->Form_EntryEdit_Label_Username->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold));
			this->Form_EntryEdit_Label_Username->Location = System::Drawing::Point(43, 274);
			this->Form_EntryEdit_Label_Username->Margin = System::Windows::Forms::Padding(0);
			this->Form_EntryEdit_Label_Username->Name = L"Form_EntryEdit_Label_Username";
			this->Form_EntryEdit_Label_Username->Size = System::Drawing::Size(109, 30);
			this->Form_EntryEdit_Label_Username->TabIndex = 37;
			this->Form_EntryEdit_Label_Username->Text = L"Username";
			// 
			// Form_EntryEdit_Label_URL
			// 
			this->Form_EntryEdit_Label_URL->AutoSize = true;
			this->Form_EntryEdit_Label_URL->BackColor = System::Drawing::Color::Transparent;
			this->Form_EntryEdit_Label_URL->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Form_EntryEdit_Label_URL->Location = System::Drawing::Point(43, 190);
			this->Form_EntryEdit_Label_URL->Margin = System::Windows::Forms::Padding(0);
			this->Form_EntryEdit_Label_URL->Name = L"Form_EntryEdit_Label_URL";
			this->Form_EntryEdit_Label_URL->Size = System::Drawing::Size(51, 30);
			this->Form_EntryEdit_Label_URL->TabIndex = 36;
			this->Form_EntryEdit_Label_URL->Text = L"URL";
			// 
			// Form_EntryEdit_Label_VaultEntry
			// 
			this->Form_EntryEdit_Label_VaultEntry->AutoSize = true;
			this->Form_EntryEdit_Label_VaultEntry->BackColor = System::Drawing::Color::Transparent;
			this->Form_EntryEdit_Label_VaultEntry->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 24, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Form_EntryEdit_Label_VaultEntry->Location = System::Drawing::Point(108, 54);
			this->Form_EntryEdit_Label_VaultEntry->Name = L"Form_EntryEdit_Label_VaultEntry";
			this->Form_EntryEdit_Label_VaultEntry->Size = System::Drawing::Size(166, 45);
			this->Form_EntryEdit_Label_VaultEntry->TabIndex = 35;
			this->Form_EntryEdit_Label_VaultEntry->Text = L"Vault Entry";
			// 
			// Form_EntryEdit_Panel_URL
			// 
			this->Form_EntryEdit_Panel_URL->BackColor = System::Drawing::Color::Black;
			this->Form_EntryEdit_Panel_URL->Location = System::Drawing::Point(48, 253);
			this->Form_EntryEdit_Panel_URL->Margin = System::Windows::Forms::Padding(0);
			this->Form_EntryEdit_Panel_URL->Name = L"Form_EntryEdit_Panel_URL";
			this->Form_EntryEdit_Panel_URL->Size = System::Drawing::Size(280, 1);
			this->Form_EntryEdit_Panel_URL->TabIndex = 44;
			// 
			// Form_EntryEdit_Panel_Username
			// 
			this->Form_EntryEdit_Panel_Username->BackColor = System::Drawing::Color::Black;
			this->Form_EntryEdit_Panel_Username->Location = System::Drawing::Point(48, 337);
			this->Form_EntryEdit_Panel_Username->Margin = System::Windows::Forms::Padding(0);
			this->Form_EntryEdit_Panel_Username->Name = L"Form_EntryEdit_Panel_Username";
			this->Form_EntryEdit_Panel_Username->Size = System::Drawing::Size(280, 1);
			this->Form_EntryEdit_Panel_Username->TabIndex = 45;
			// 
			// Form_EntryEdit_Panel_Password
			// 
			this->Form_EntryEdit_Panel_Password->BackColor = System::Drawing::Color::Black;
			this->Form_EntryEdit_Panel_Password->Location = System::Drawing::Point(48, 421);
			this->Form_EntryEdit_Panel_Password->Margin = System::Windows::Forms::Padding(0);
			this->Form_EntryEdit_Panel_Password->Name = L"Form_EntryEdit_Panel_Password";
			this->Form_EntryEdit_Panel_Password->Size = System::Drawing::Size(280, 1);
			this->Form_EntryEdit_Panel_Password->TabIndex = 46;
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
			this->PasswordShowHideButton_Show->Location = System::Drawing::Point(298, 385);
			this->PasswordShowHideButton_Show->Margin = System::Windows::Forms::Padding(0);
			this->PasswordShowHideButton_Show->Name = L"PasswordShowHideButton_Show";
			this->PasswordShowHideButton_Show->Size = System::Drawing::Size(30, 30);
			this->PasswordShowHideButton_Show->TabIndex = 49;
			this->PasswordShowHideButton_Show->UseVisualStyleBackColor = false;
			this->PasswordShowHideButton_Show->Click += gcnew System::EventHandler(this, &Form_EntryEdit::PasswordShowHideButton_Show_Click);
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
			this->PasswordShowHideButton_Hide->Location = System::Drawing::Point(298, 385);
			this->PasswordShowHideButton_Hide->Margin = System::Windows::Forms::Padding(0);
			this->PasswordShowHideButton_Hide->Name = L"PasswordShowHideButton_Hide";
			this->PasswordShowHideButton_Hide->Size = System::Drawing::Size(30, 30);
			this->PasswordShowHideButton_Hide->TabIndex = 50;
			this->PasswordShowHideButton_Hide->UseVisualStyleBackColor = false;
			this->PasswordShowHideButton_Hide->Visible = false;
			this->PasswordShowHideButton_Hide->Click += gcnew System::EventHandler(this, &Form_EntryEdit::PasswordShowHideButton_Hide_Click);
			// 
			// UserControl_EducationModeOutput
			// 
			this->UserControl_EducationModeOutput->BackColor = System::Drawing::Color::White;
			this->UserControl_EducationModeOutput->Location = System::Drawing::Point(399, 0);
			this->UserControl_EducationModeOutput->Margin = System::Windows::Forms::Padding(0);
			this->UserControl_EducationModeOutput->Name = L"UserControl_EducationModeOutput";
			this->UserControl_EducationModeOutput->Size = System::Drawing::Size(396, 610);
			this->UserControl_EducationModeOutput->TabIndex = 48;
			this->UserControl_EducationModeOutput->TextBox_EducationMode_EdgeLineVisibility = true;
			this->UserControl_EducationModeOutput->TextBox_EducationMode_Height = 411;
			this->UserControl_EducationModeOutput->TextBox_EducationMode_Text = L"";
			this->UserControl_EducationModeOutput->TextBox_EducationMode_Topic_Location = System::Drawing::Point(70, 47);
			this->UserControl_EducationModeOutput->TextBox_EducationMode_Width = 290;
			// 
			// Form_EntryEdit
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(384, 611);
			this->Controls->Add(this->PasswordShowHideButton_Show);
			this->Controls->Add(this->PasswordShowHideButton_Hide);
			this->Controls->Add(this->UserControl_EducationModeOutput);
			this->Controls->Add(this->Form_EntryEdit_Button_Exit);
			this->Controls->Add(this->Form_EntryEdit_Button_Save);
			this->Controls->Add(this->Form_EntryEdit_TextBox_Password);
			this->Controls->Add(this->Form_EntryEdit_TextBox_Username);
			this->Controls->Add(this->Form_EntryEdit_TextBox_URL);
			this->Controls->Add(this->Form_EntryEdit_Label_Password);
			this->Controls->Add(this->Form_EntryEdit_Label_Username);
			this->Controls->Add(this->Form_EntryEdit_Label_URL);
			this->Controls->Add(this->Form_EntryEdit_Label_VaultEntry);
			this->Controls->Add(this->Form_EntryEdit_Panel_URL);
			this->Controls->Add(this->Form_EntryEdit_Panel_Username);
			this->Controls->Add(this->Form_EntryEdit_Panel_Password);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Form_EntryEdit";
			this->ShowIcon = false;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Form_EntryEdit";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void CustomInitialize(void);
	private: System::Void CustomRelease(void);

	private: System::Void Form_EntryEdit_Button_Save_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Form_EntryEdit_Button_Exit_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void PasswordShowHideButton_Hide_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void PasswordShowHideButton_Show_Click(System::Object^ sender, System::EventArgs^ e);
};
}
