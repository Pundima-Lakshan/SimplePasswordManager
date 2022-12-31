#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace pwManagerClassLibrary {

	/// <summary>
	/// Summary for EducationModeOutput
	/// </summary>
	public ref class EducationModeOutput : public System::Windows::Forms::UserControl
	{
	public:
		EducationModeOutput(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EducationModeOutput()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ Form_EducationModeOutput_TextBox_EducationMode;
	private: System::Windows::Forms::Label^ Form_EducationModeOutput_Label_EducationMode;
	private: System::Windows::Forms::Panel^ Form_EducationModeOutput_Panel_EducationMode;

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
			this->Form_EducationModeOutput_TextBox_EducationMode = (gcnew System::Windows::Forms::TextBox());
			this->Form_EducationModeOutput_Label_EducationMode = (gcnew System::Windows::Forms::Label());
			this->Form_EducationModeOutput_Panel_EducationMode = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// Form_EducationModeOutput_TextBox_EducationMode
			// 
			this->Form_EducationModeOutput_TextBox_EducationMode->BackColor = System::Drawing::Color::White;
			this->Form_EducationModeOutput_TextBox_EducationMode->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Form_EducationModeOutput_TextBox_EducationMode->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Form_EducationModeOutput_TextBox_EducationMode->Location = System::Drawing::Point(55, 139);
			this->Form_EducationModeOutput_TextBox_EducationMode->Multiline = true;
			this->Form_EducationModeOutput_TextBox_EducationMode->Name = L"Form_EducationModeOutput_TextBox_EducationMode";
			this->Form_EducationModeOutput_TextBox_EducationMode->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->Form_EducationModeOutput_TextBox_EducationMode->Size = System::Drawing::Size(290, 411);
			this->Form_EducationModeOutput_TextBox_EducationMode->TabIndex = 27;
			this->Form_EducationModeOutput_TextBox_EducationMode->WordWrap = false;
			// 
			// Form_EducationModeOutput_Label_EducationMode
			// 
			this->Form_EducationModeOutput_Label_EducationMode->AutoSize = true;
			this->Form_EducationModeOutput_Label_EducationMode->BackColor = System::Drawing::Color::Transparent;
			this->Form_EducationModeOutput_Label_EducationMode->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 24, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Form_EducationModeOutput_Label_EducationMode->Location = System::Drawing::Point(70, 47);
			this->Form_EducationModeOutput_Label_EducationMode->Name = L"Form_EducationModeOutput_Label_EducationMode";
			this->Form_EducationModeOutput_Label_EducationMode->Size = System::Drawing::Size(241, 45);
			this->Form_EducationModeOutput_Label_EducationMode->TabIndex = 26;
			this->Form_EducationModeOutput_Label_EducationMode->Text = L"Education Mode";
			// 
			// Form_EducationModeOutput_Panel_EducationMode
			// 
			this->Form_EducationModeOutput_Panel_EducationMode->BackColor = System::Drawing::Color::DimGray;
			this->Form_EducationModeOutput_Panel_EducationMode->Dock = System::Windows::Forms::DockStyle::Left;
			this->Form_EducationModeOutput_Panel_EducationMode->Location = System::Drawing::Point(0, 0);
			this->Form_EducationModeOutput_Panel_EducationMode->Margin = System::Windows::Forms::Padding(0);
			this->Form_EducationModeOutput_Panel_EducationMode->Name = L"Form_EducationModeOutput_Panel_EducationMode";
			this->Form_EducationModeOutput_Panel_EducationMode->Size = System::Drawing::Size(2, 610);
			this->Form_EducationModeOutput_Panel_EducationMode->TabIndex = 28;
			// 
			// EducationModeOutput
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::White;
			this->Controls->Add(this->Form_EducationModeOutput_Panel_EducationMode);
			this->Controls->Add(this->Form_EducationModeOutput_TextBox_EducationMode);
			this->Controls->Add(this->Form_EducationModeOutput_Label_EducationMode);
			this->Name = L"EducationModeOutput";
			this->Size = System::Drawing::Size(396, 610);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	// 
	// Properties
	//
	public: property String^ TextBox_EducationMode_Text {
		String^ get() {
			return this->Form_EducationModeOutput_TextBox_EducationMode->Text;
		}
		void set(String^ text) {
			this->Form_EducationModeOutput_TextBox_EducationMode->Text = text;
		}
	}
	public: property int TextBox_EducationMode_Height {
		int get() {
			return this->Form_EducationModeOutput_TextBox_EducationMode->Height;
		}
		void set(int height) {
			this->Form_EducationModeOutput_TextBox_EducationMode->Height = height;
		}
	}
	public: property int TextBox_EducationMode_Width {
		int get() {
			return this->Form_EducationModeOutput_TextBox_EducationMode->Width;
		}
		void set(int width) {
			this->Form_EducationModeOutput_TextBox_EducationMode->Width = width;
		}
	}
	public: property Point TextBox_EducationMode_Topic_Location {
		Point get() {
			return this->Form_EducationModeOutput_Label_EducationMode->Location;
		}
		void set(Point point) {
			this->Form_EducationModeOutput_Label_EducationMode->Location = point;
		}
	}
	public: property bool TextBox_EducationMode_EdgeLineVisibility {
		bool get() {
			return this->Form_EducationModeOutput_Panel_EducationMode->Visible;
		}
		void set(bool t) {
			this->Form_EducationModeOutput_Panel_EducationMode->Visible = t;
		}
	}

};
}
