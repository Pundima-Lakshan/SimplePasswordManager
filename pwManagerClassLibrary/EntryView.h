#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace pwManagerClassLibrary {

	/// <summary>
	/// Summary for EntryView
	/// </summary>
	public ref class EntryView : public System::Windows::Forms::UserControl
	{
	public:
		EntryView(void)
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
		~EntryView()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Form_EntryView_Label_Username;
	private: System::Windows::Forms::Label^ Form_EntryView_Label_URL;
	private: System::Windows::Forms::Button^ Form_EntryView_Button_Delete;
	private: System::Windows::Forms::Button^ Form_EntryView_Button_Edit;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(EntryView::typeid));
			this->Form_EntryView_Label_Username = (gcnew System::Windows::Forms::Label());
			this->Form_EntryView_Label_URL = (gcnew System::Windows::Forms::Label());
			this->Form_EntryView_Button_Delete = (gcnew System::Windows::Forms::Button());
			this->Form_EntryView_Button_Edit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Form_EntryView_Label_Username
			// 
			this->Form_EntryView_Label_Username->AutoSize = true;
			this->Form_EntryView_Label_Username->BackColor = System::Drawing::Color::Transparent;
			this->Form_EntryView_Label_Username->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->Form_EntryView_Label_Username->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Form_EntryView_Label_Username->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)), static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->Form_EntryView_Label_Username->Location = System::Drawing::Point(0, 30);
			this->Form_EntryView_Label_Username->Margin = System::Windows::Forms::Padding(0);
			this->Form_EntryView_Label_Username->Name = L"Form_EntryView_Label_Username";
			this->Form_EntryView_Label_Username->Size = System::Drawing::Size(97, 25);
			this->Form_EntryView_Label_Username->TabIndex = 40;
			this->Form_EntryView_Label_Username->Text = L"Username";
			// 
			// Form_EntryView_Label_URL
			// 
			this->Form_EntryView_Label_URL->AutoSize = true;
			this->Form_EntryView_Label_URL->BackColor = System::Drawing::Color::Transparent;
			this->Form_EntryView_Label_URL->Dock = System::Windows::Forms::DockStyle::Top;
			this->Form_EntryView_Label_URL->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Form_EntryView_Label_URL->ForeColor = System::Drawing::Color::Black;
			this->Form_EntryView_Label_URL->Location = System::Drawing::Point(0, 0);
			this->Form_EntryView_Label_URL->Margin = System::Windows::Forms::Padding(0);
			this->Form_EntryView_Label_URL->Name = L"Form_EntryView_Label_URL";
			this->Form_EntryView_Label_URL->Size = System::Drawing::Size(184, 30);
			this->Form_EntryView_Label_URL->TabIndex = 39;
			this->Form_EntryView_Label_URL->Text = L"www.youtube.com";
			// 
			// Form_EntryView_Button_Delete
			// 
			this->Form_EntryView_Button_Delete->BackColor = System::Drawing::Color::Transparent;
			this->Form_EntryView_Button_Delete->FlatAppearance->BorderSize = 0;
			this->Form_EntryView_Button_Delete->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Form_EntryView_Button_Delete.Image")));
			this->Form_EntryView_Button_Delete->Location = System::Drawing::Point(320, 10);
			this->Form_EntryView_Button_Delete->Margin = System::Windows::Forms::Padding(0);
			this->Form_EntryView_Button_Delete->Name = L"Form_EntryView_Button_Delete";
			this->Form_EntryView_Button_Delete->Size = System::Drawing::Size(40, 40);
			this->Form_EntryView_Button_Delete->TabIndex = 41;
			this->Form_EntryView_Button_Delete->UseVisualStyleBackColor = false;
			this->Form_EntryView_Button_Delete->Click += gcnew System::EventHandler(this, &EntryView::Form_EntryView_Button_Delete_Click);
			// 
			// Form_EntryView_Button_Edit
			// 
			this->Form_EntryView_Button_Edit->BackColor = System::Drawing::Color::Transparent;
			this->Form_EntryView_Button_Edit->FlatAppearance->BorderSize = 0;
			this->Form_EntryView_Button_Edit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Form_EntryView_Button_Edit.Image")));
			this->Form_EntryView_Button_Edit->Location = System::Drawing::Point(270, 10);
			this->Form_EntryView_Button_Edit->Margin = System::Windows::Forms::Padding(0);
			this->Form_EntryView_Button_Edit->Name = L"Form_EntryView_Button_Edit";
			this->Form_EntryView_Button_Edit->Size = System::Drawing::Size(40, 40);
			this->Form_EntryView_Button_Edit->TabIndex = 42;
			this->Form_EntryView_Button_Edit->UseVisualStyleBackColor = false;
			this->Form_EntryView_Button_Edit->Click += gcnew System::EventHandler(this, &EntryView::Form_EntryView_Button_Edit_Click);
			// 
			// EntryView
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->Controls->Add(this->Form_EntryView_Button_Edit);
			this->Controls->Add(this->Form_EntryView_Button_Delete);
			this->Controls->Add(this->Form_EntryView_Label_Username);
			this->Controls->Add(this->Form_EntryView_Label_URL);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->Name = L"EntryView";
			this->Padding = System::Windows::Forms::Padding(0, 0, 0, 5);
			this->Size = System::Drawing::Size(370, 60);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	// 
	// Properties
	//
	public: property String^ Label_URL_Text {
		String^ get() {
			return this->Form_EntryView_Label_URL->Text;
		}
		void set(String^ text) {
			this->Form_EntryView_Label_URL->Text = text;
		}
	}

	public: property String^ Label_Username_Text {
		String^ get() {
			return this->Form_EntryView_Label_Username->Text;
		}
		void set(String^ text) {
			this->Form_EntryView_Label_Username->Text = text;
		}
	}
	// 
	// EventHandlers
	//
	public: event EventHandler^ An_EntryView_Button_Edit_Click;
	public: event EventHandler^ An_EntryView_Button_Delete_Click;

	private: System::Void Form_EntryView_Button_Edit_Click(System::Object^ sender, System::EventArgs^ e) {
		An_EntryView_Button_Edit_Click(this, EventArgs::Empty);
	}
	private: System::Void Form_EntryView_Button_Delete_Click(System::Object^ sender, System::EventArgs^ e) {
		An_EntryView_Button_Delete_Click(this, EventArgs::Empty);

	}
};
}
