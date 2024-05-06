#pragma once
#include "MainWindow.h"
#include "MyClasses.h"
#include "AdminWindow.h"
namespace WPA {

	using namespace MyClass;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::TextBox^ PasTextBox;
	private: System::Windows::Forms::Button^ CheckButton;
	private: System::Windows::Forms::TextBox^ LoginTextBox;
	private: System::Windows::Forms::Button^ ExitButton;
	private: System::Windows::Forms::Label^ TopLabel;

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
			this->PasTextBox = (gcnew System::Windows::Forms::TextBox());
			this->CheckButton = (gcnew System::Windows::Forms::Button());
			this->LoginTextBox = (gcnew System::Windows::Forms::TextBox());
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->TopLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// PasTextBox
			// 
			this->PasTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->PasTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->PasTextBox->Location = System::Drawing::Point(120, 350);
			this->PasTextBox->Name = L"PasTextBox";
			this->PasTextBox->Size = System::Drawing::Size(280, 34);
			this->PasTextBox->TabIndex = 18;
			this->PasTextBox->Text = L" Пароль";
			this->PasTextBox->Click += gcnew System::EventHandler(this, &LoginForm::PasTextBox_Click);
			// 
			// CheckButton
			// 
			this->CheckButton->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->CheckButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CheckButton->Font = (gcnew System::Drawing::Font(L"Tahoma", 12.2F, System::Drawing::FontStyle::Bold));
			this->CheckButton->ForeColor = System::Drawing::Color::White;
			this->CheckButton->Location = System::Drawing::Point(170, 540);
			this->CheckButton->Name = L"CheckButton";
			this->CheckButton->Size = System::Drawing::Size(180, 50);
			this->CheckButton->TabIndex = 17;
			this->CheckButton->Text = L"Войти";
			this->CheckButton->UseVisualStyleBackColor = true;
			this->CheckButton->Click += gcnew System::EventHandler(this, &LoginForm::CheckButton_Click);
			// 
			// LoginTextBox
			// 
			this->LoginTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->LoginTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->LoginTextBox->Location = System::Drawing::Point(120, 265);
			this->LoginTextBox->Name = L"LoginTextBox";
			this->LoginTextBox->Size = System::Drawing::Size(280, 34);
			this->LoginTextBox->TabIndex = 16;
			this->LoginTextBox->Text = L" Логин";
			this->LoginTextBox->Click += gcnew System::EventHandler(this, &LoginForm::LoginTextBox_Click);
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
			this->ExitButton->Location = System::Drawing::Point(480, 0);
			this->ExitButton->Name = L"ExitButton";
			this->ExitButton->Size = System::Drawing::Size(40, 40);
			this->ExitButton->TabIndex = 15;
			this->ExitButton->Text = L"X";
			this->ExitButton->UseVisualStyleBackColor = false;
			this->ExitButton->Click += gcnew System::EventHandler(this, &LoginForm::ExitButton_Click);
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
			this->TopLabel->TabIndex = 14;
			this->TopLabel->Text = L"Авторизация";
			this->TopLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->ClientSize = System::Drawing::Size(520, 640);
			this->Controls->Add(this->PasTextBox);
			this->Controls->Add(this->CheckButton);
			this->Controls->Add(this->LoginTextBox);
			this->Controls->Add(this->ExitButton);
			this->Controls->Add(this->TopLabel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"LoginForm";
			this->Text = L"LoginForm";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	private: System::Void LoginTextBox_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->LoginTextBox->Text == " Логин")
			this->LoginTextBox->Text = "";
		this->LoginTextBox->ForeColor = System::Drawing::Color::Black;

	}
	private: System::Void PasTextBox_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->PasTextBox->Text == " Пароль")
			this->PasTextBox->Text = "";
		this->PasTextBox->ForeColor = System::Drawing::Color::Black;
		this->PasTextBox->PasswordChar = '*';
		this->PasTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));

	}
	private: System::Void ExitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}



	private: System::Void CheckButton_Click(System::Object^ sender, System::EventArgs^ e) {
		User^ user = gcnew User(LoginTextBox->Text, PasTextBox->Text);

		if (user->Authorization()) {
			if (user->login != "admin") {
				MessageBox::Show("Пользователь успешно авторизовался");
				user->auth = true;
				MainWindow^ mainwin = gcnew MainWindow();
				mainwin->Tag = user;
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
	private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	};
}
