#pragma once
#include "MainWindow.h"
#include "AdminWindow.h"
#include "MyClasses.h"
using namespace System::IO;
namespace WPA {

	using namespace MyClass;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	
	/// <summary>
	/// Сводка для RegForm
	/// </summary>
	public ref class RegForm : public System::Windows::Forms::Form
	{
	public:
		RegForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~RegForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ GuestLabel;
	protected:

	protected:
	private: System::Windows::Forms::TextBox^ PasTextBox;
	private: System::Windows::Forms::Button^ CheckButton;

	private: System::Windows::Forms::Button^ ExitButton;
	private: System::Windows::Forms::Label^ TopLabel;
	private: System::Windows::Forms::TextBox^ LoginTextBox;
	private: System::Windows::Forms::Button^ LogButton;

	private: System::Windows::Forms::Button^ RegButton;





	protected:






	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->GuestLabel = (gcnew System::Windows::Forms::Label());
			this->PasTextBox = (gcnew System::Windows::Forms::TextBox());
			this->CheckButton = (gcnew System::Windows::Forms::Button());
			this->LoginTextBox = (gcnew System::Windows::Forms::TextBox());
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->TopLabel = (gcnew System::Windows::Forms::Label());
			this->LogButton = (gcnew System::Windows::Forms::Button());
			this->RegButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// GuestLabel
			// 
			this->GuestLabel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->GuestLabel->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->GuestLabel->ForeColor = System::Drawing::Color::White;
			this->GuestLabel->Location = System::Drawing::Point(170, 605);
			this->GuestLabel->Name = L"GuestLabel";
			this->GuestLabel->Size = System::Drawing::Size(180, 25);
			this->GuestLabel->TabIndex = 13;
			this->GuestLabel->Text = L"Войти как гость";
			this->GuestLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->GuestLabel->Click += gcnew System::EventHandler(this, &RegForm::GuestLabel_Click);
			// 
			// PasTextBox
			// 
			this->PasTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->PasTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->PasTextBox->Location = System::Drawing::Point(121, 349);
			this->PasTextBox->Multiline = true;
			this->PasTextBox->Name = L"PasTextBox";
			this->PasTextBox->Size = System::Drawing::Size(280, 40);
			this->PasTextBox->TabIndex = 12;
			this->PasTextBox->Text = L" Введите пароль";
			this->PasTextBox->Click += gcnew System::EventHandler(this, &RegForm::PasTextBox_Click);
			// 
			// CheckButton
			// 
			this->CheckButton->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->CheckButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CheckButton->Font = (gcnew System::Drawing::Font(L"Tahoma", 12.2F, System::Drawing::FontStyle::Bold));
			this->CheckButton->ForeColor = System::Drawing::Color::White;
			this->CheckButton->Location = System::Drawing::Point(121, 539);
			this->CheckButton->Name = L"CheckButton";
			this->CheckButton->Size = System::Drawing::Size(280, 50);
			this->CheckButton->TabIndex = 11;
			this->CheckButton->Text = L"Войти";
			this->CheckButton->UseVisualStyleBackColor = true;
			this->CheckButton->Click += gcnew System::EventHandler(this, &RegForm::CheckButton_Click);
			// 
			// LoginTextBox
			// 
			this->LoginTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->LoginTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->LoginTextBox->Location = System::Drawing::Point(121, 264);
			this->LoginTextBox->Multiline = true;
			this->LoginTextBox->Name = L"LoginTextBox";
			this->LoginTextBox->Size = System::Drawing::Size(280, 40);
			this->LoginTextBox->TabIndex = 10;
			this->LoginTextBox->Text = L" Введите логин";
			this->LoginTextBox->WordWrap = false;
			this->LoginTextBox->Click += gcnew System::EventHandler(this, &RegForm::LoginTextBox_Click);
			// 
			// ExitButton
			// 
			this->ExitButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->ExitButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ExitButton->FlatAppearance->BorderSize = 0;
			this->ExitButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ExitButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ExitButton->ForeColor = System::Drawing::Color::White;
			this->ExitButton->Location = System::Drawing::Point(481, -1);
			this->ExitButton->Name = L"ExitButton";
			this->ExitButton->Size = System::Drawing::Size(40, 40);
			this->ExitButton->TabIndex = 9;
			this->ExitButton->Text = L"X";
			this->ExitButton->UseVisualStyleBackColor = false;
			this->ExitButton->Click += gcnew System::EventHandler(this, &RegForm::ExitButton_Click);
			// 
			// TopLabel
			// 
			this->TopLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->TopLabel->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TopLabel->ForeColor = System::Drawing::Color::White;
			this->TopLabel->Location = System::Drawing::Point(0, 0);
			this->TopLabel->Name = L"TopLabel";
			this->TopLabel->Size = System::Drawing::Size(520, 40);
			this->TopLabel->TabIndex = 8;
			this->TopLabel->Text = L"Меню авторизации";
			this->TopLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LogButton
			// 
			this->LogButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->LogButton->Cursor = System::Windows::Forms::Cursors::Default;
			this->LogButton->FlatAppearance->BorderSize = 0;
			this->LogButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LogButton->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->LogButton->ForeColor = System::Drawing::Color::White;
			this->LogButton->Location = System::Drawing::Point(0, 40);
			this->LogButton->Margin = System::Windows::Forms::Padding(0);
			this->LogButton->Name = L"LogButton";
			this->LogButton->Size = System::Drawing::Size(260, 60);
			this->LogButton->TabIndex = 17;
			this->LogButton->Text = L"Авторизация";
			this->LogButton->UseVisualStyleBackColor = false;
			this->LogButton->Click += gcnew System::EventHandler(this, &RegForm::LogButton_Click);
			// 
			// RegButton
			// 
			this->RegButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->RegButton->Cursor = System::Windows::Forms::Cursors::Default;
			this->RegButton->FlatAppearance->BorderSize = 0;
			this->RegButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->RegButton->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->RegButton->ForeColor = System::Drawing::Color::White;
			this->RegButton->Location = System::Drawing::Point(260, 40);
			this->RegButton->Margin = System::Windows::Forms::Padding(0);
			this->RegButton->Name = L"RegButton";
			this->RegButton->Size = System::Drawing::Size(260, 60);
			this->RegButton->TabIndex = 18;
			this->RegButton->Text = L"Регистрация";
			this->RegButton->UseVisualStyleBackColor = false;
			this->RegButton->Click += gcnew System::EventHandler(this, &RegForm::RegButton_Click);
			// 
			// RegForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->ClientSize = System::Drawing::Size(520, 640);
			this->Controls->Add(this->RegButton);
			this->Controls->Add(this->LogButton);
			this->Controls->Add(this->GuestLabel);
			this->Controls->Add(this->PasTextBox);
			this->Controls->Add(this->CheckButton);
			this->Controls->Add(this->LoginTextBox);
			this->Controls->Add(this->ExitButton);
			this->Controls->Add(this->TopLabel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"RegForm";
			this->Text = L"RegForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void LoginTextBox_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->LoginTextBox->Text == " Введите логин") {
			this->LoginTextBox->Text = "";
			this->LoginTextBox->ForeColor = System::Drawing::Color::Black;
		}
	}


	private: System::Void ExitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void PasTextBox_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->PasTextBox->Text == " Введите пароль")
			this->PasTextBox->Text = "";
		this->PasTextBox->ForeColor = System::Drawing::Color::Black;
		this->PasTextBox->PasswordChar = '*';
	}
	private: System::Void GuestLabel_Click(System::Object^ sender, System::EventArgs^ e) {
		User^ user = gcnew User();
		MainWindow^ mainwin = gcnew MainWindow(user);
		mainwin->Show();
		this->Hide();
	}
	private: System::Void CheckButton_Click(System::Object^ sender, System::EventArgs^ e) {
		User^ user = gcnew User(this->LoginTextBox->Text, this->PasTextBox->Text);
		if (this->CheckButton->Text == "Зарегистрироваться") {
			
			user->Registration();
			this->PasTextBox->Text = "";
			
		}
		if (this->CheckButton->Text == "Войти")
		{
			if (user->Authorization()) {
				if (user->login != "admin") {
					MessageBox::Show("Пользователь успешно авторизовался");
					user->auth = true;
					MainWindow^ mainwin = gcnew MainWindow(user);
					mainwin->Show();
					this->Hide();
					return;
				}
				else
				{
					MessageBox::Show("Администратор успешно авторизовался");
					AdminWindow^ adminwin = gcnew AdminWindow();
					adminwin->Show();
					this->Hide();
					return;
				}
			}
		}
		
	}

	private: System::Void RegButton_Click(System::Object^ sender, System::EventArgs^ e) {

		this->RegButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
			static_cast<System::Int32>(static_cast<System::Byte>(240)));
		this->LogButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
			static_cast<System::Int32>(static_cast<System::Byte>(204)));
		this->CheckButton->Text = "Зарегистрироваться";
		this->TopLabel->Text = "Меню регистрации";
		if (this->LoginTextBox->Text != " Введите логин")
			this->LoginTextBox->Text = "";
		if (this->PasTextBox->Text != " Введите пароль")
			this->PasTextBox->Text = "";
	}
private: System::Void LogButton_Click(System::Object^ sender, System::EventArgs^ e) {

	this->LogButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
		static_cast<System::Int32>(static_cast<System::Byte>(240)));
	this->RegButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
		static_cast<System::Int32>(static_cast<System::Byte>(204)));
	this->CheckButton->Text = "Войти";
	this->TopLabel->Text = "Меню авторизации";
	
	if (this->LoginTextBox->Text != " Введите логин") 
		this->LoginTextBox->Text = "";
	if(this->PasTextBox->Text != " Введите пароль") 
		this->PasTextBox->Text = "";
}
};
}
