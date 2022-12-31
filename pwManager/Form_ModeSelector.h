#pragma once

namespace pwManager {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form_ModeSelector
	/// </summary>
	public ref class Form_ModeSelector : public System::Windows::Forms::Form
	{
	public:
		Form_ModeSelector(void)
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
		~Form_ModeSelector()
		{
			if (components)
			{
				delete components;
			}
			CustomRelease();
		}
	private: System::Windows::Forms::Label^ Form_ModeSelector_Label_Selectthe;
	private: System::Windows::Forms::Button^ Form_ModeSelector_Button_RegularMode;
	private: System::Windows::Forms::Button^ Form_ModeSelector_Button_EducationalMode;
	private: System::Windows::Forms::Label^ Form_ModeSelector_Label_WorkingMODE;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form_ModeSelector::typeid));
			this->Form_ModeSelector_Label_Selectthe = (gcnew System::Windows::Forms::Label());
			this->Form_ModeSelector_Button_RegularMode = (gcnew System::Windows::Forms::Button());
			this->Form_ModeSelector_Button_EducationalMode = (gcnew System::Windows::Forms::Button());
			this->Form_ModeSelector_Label_WorkingMODE = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Form_ModeSelector_Label_Selectthe
			// 
			this->Form_ModeSelector_Label_Selectthe->AutoSize = true;
			this->Form_ModeSelector_Label_Selectthe->BackColor = System::Drawing::Color::Transparent;
			this->Form_ModeSelector_Label_Selectthe->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 24, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Form_ModeSelector_Label_Selectthe->Location = System::Drawing::Point(115, 156);
			this->Form_ModeSelector_Label_Selectthe->Name = L"Form_ModeSelector_Label_Selectthe";
			this->Form_ModeSelector_Label_Selectthe->Size = System::Drawing::Size(151, 45);
			this->Form_ModeSelector_Label_Selectthe->TabIndex = 36;
			this->Form_ModeSelector_Label_Selectthe->Text = L"Select the";
			// 
			// Form_ModeSelector_Button_RegularMode
			// 
			this->Form_ModeSelector_Button_RegularMode->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)), static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->Form_ModeSelector_Button_RegularMode->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Form_ModeSelector_Button_RegularMode->FlatAppearance->BorderSize = 0;
			this->Form_ModeSelector_Button_RegularMode->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold));
			this->Form_ModeSelector_Button_RegularMode->ForeColor = System::Drawing::Color::White;
			this->Form_ModeSelector_Button_RegularMode->Location = System::Drawing::Point(80, 341);
			this->Form_ModeSelector_Button_RegularMode->Margin = System::Windows::Forms::Padding(0);
			this->Form_ModeSelector_Button_RegularMode->Name = L"Form_ModeSelector_Button_RegularMode";
			this->Form_ModeSelector_Button_RegularMode->Size = System::Drawing::Size(220, 45);
			this->Form_ModeSelector_Button_RegularMode->TabIndex = 47;
			this->Form_ModeSelector_Button_RegularMode->Text = L"Regular Mode";
			this->Form_ModeSelector_Button_RegularMode->UseVisualStyleBackColor = false;
			this->Form_ModeSelector_Button_RegularMode->Click += gcnew System::EventHandler(this, &Form_ModeSelector::Form_ModeSelector_Button_RegularMode_Click);
			// 
			// Form_ModeSelector_Button_EducationalMode
			// 
			this->Form_ModeSelector_Button_EducationalMode->BackColor = System::Drawing::Color::White;
			this->Form_ModeSelector_Button_EducationalMode->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Form_ModeSelector_Button_EducationalMode->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)), static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->Form_ModeSelector_Button_EducationalMode->FlatAppearance->BorderSize = 3;
			this->Form_ModeSelector_Button_EducationalMode->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Form_ModeSelector_Button_EducationalMode->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)), static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->Form_ModeSelector_Button_EducationalMode->Location = System::Drawing::Point(80, 395);
			this->Form_ModeSelector_Button_EducationalMode->Margin = System::Windows::Forms::Padding(0);
			this->Form_ModeSelector_Button_EducationalMode->Name = L"Form_ModeSelector_Button_EducationalMode";
			this->Form_ModeSelector_Button_EducationalMode->Size = System::Drawing::Size(220, 45);
			this->Form_ModeSelector_Button_EducationalMode->TabIndex = 48;
			this->Form_ModeSelector_Button_EducationalMode->Text = L"Educational Mode";
			this->Form_ModeSelector_Button_EducationalMode->UseVisualStyleBackColor = false;
			this->Form_ModeSelector_Button_EducationalMode->Click += gcnew System::EventHandler(this, &Form_ModeSelector::Form_ModeSelector_Button_EducationalMode_Click);
			// 
			// Form_ModeSelector_Label_WorkingMODE
			// 
			this->Form_ModeSelector_Label_WorkingMODE->AutoSize = true;
			this->Form_ModeSelector_Label_WorkingMODE->BackColor = System::Drawing::Color::Transparent;
			this->Form_ModeSelector_Label_WorkingMODE->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 24, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Form_ModeSelector_Label_WorkingMODE->Location = System::Drawing::Point(75, 201);
			this->Form_ModeSelector_Label_WorkingMODE->Name = L"Form_ModeSelector_Label_WorkingMODE";
			this->Form_ModeSelector_Label_WorkingMODE->Size = System::Drawing::Size(231, 45);
			this->Form_ModeSelector_Label_WorkingMODE->TabIndex = 49;
			this->Form_ModeSelector_Label_WorkingMODE->Text = L"Working MODE";
			// 
			// Form_ModeSelector
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(384, 611);
			this->Controls->Add(this->Form_ModeSelector_Label_WorkingMODE);
			this->Controls->Add(this->Form_ModeSelector_Button_EducationalMode);
			this->Controls->Add(this->Form_ModeSelector_Button_RegularMode);
			this->Controls->Add(this->Form_ModeSelector_Label_Selectthe);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Form_ModeSelector";
			this->ShowIcon = false;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Form_ModeSelector";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void CustomInitialize(void);
	private: System::Void CustomRelease(void);

	private: System::Void Form_ModeSelector_Button_RegularMode_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Form_ModeSelector_Button_EducationalMode_Click(System::Object^ sender, System::EventArgs^ e);

};
}
