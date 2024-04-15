#pragma once
#include "LoginForm.h"
using namespace System::IO;
namespace WPA {

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
	private: System::Windows::Forms::Label^ ToLoginLabel;
	protected:
	private: System::Windows::Forms::TextBox^ PasTextBox;
	private: System::Windows::Forms::Button^ CheckButton;

	private: System::Windows::Forms::Button^ ExitButton;
	private: System::Windows::Forms::Label^ TopLabel;
	private: System::Windows::Forms::TextBox^ LoginTextBox;

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
			this->ToLoginLabel = (gcnew System::Windows::Forms::Label());
			this->PasTextBox = (gcnew System::Windows::Forms::TextBox());
			this->CheckButton = (gcnew System::Windows::Forms::Button());
			this->LoginTextBox = (gcnew System::Windows::Forms::TextBox());
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->TopLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// ToLoginLabel
			// 
			this->ToLoginLabel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ToLoginLabel->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ToLoginLabel->ForeColor = System::Drawing::Color::White;
			this->ToLoginLabel->Location = System::Drawing::Point(170, 605);
			this->ToLoginLabel->Name = L"ToLoginLabel";
			this->ToLoginLabel->Size = System::Drawing::Size(180, 25);
			this->ToLoginLabel->TabIndex = 13;
			this->ToLoginLabel->Text = L"Авторизоваться";
			this->ToLoginLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ToLoginLabel->Click += gcnew System::EventHandler(this, &RegForm::ToLoginLabel_Click);
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
			this->PasTextBox->Text = L" Введите новый пароль";
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
			this->CheckButton->Text = L"Зарегистрироваться";
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
			this->LoginTextBox->Text = L" Введите новый логин";
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
			this->TopLabel->Location = System::Drawing::Point(1, -1);
			this->TopLabel->Name = L"TopLabel";
			this->TopLabel->Size = System::Drawing::Size(520, 40);
			this->TopLabel->TabIndex = 8;
			this->TopLabel->Text = L"Регистрация";
			this->TopLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			
			// 
			// RegForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->ClientSize = System::Drawing::Size(520, 640);
			this->Controls->Add(this->ToLoginLabel);
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
		if (this->LoginTextBox->Text == " Введите новый логин") {
			this->LoginTextBox->Text = "";
			this->LoginTextBox->ForeColor = System::Drawing::Color::Black;
		}
	}


	private: System::Void ExitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void PasTextBox_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->PasTextBox->Text == " Введите новый пароль")
			this->PasTextBox->Text = "";
		this->PasTextBox->ForeColor = System::Drawing::Color::Black;
	}
	private: System::Void ToLoginLabel_Click(System::Object^ sender, System::EventArgs^ e) {
		LoginForm^ log = gcnew LoginForm();
		log->Show();
		this->Hide();
	}
	private: System::Void CheckButton_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ login = this->LoginTextBox->Text;
		String^ pas = this->PasTextBox->Text;
		String^ path = "LogPas.txt";
		if (login != "" && pas != "") {
			if (File::Exists(path)) {
				StreamReader^ sr = gcnew StreamReader(path);
				String^ line;

				while ((line = sr->ReadLine()) != nullptr) {
					array<String^>^ arr = line->Split(' ');
					//функция Split разбивает строку на 2 элемента разделённые 
					// пробелом (в данном случае login и pas) 
					if (arr[0] == login) {
						MessageBox::Show("Такой логин уже существует.");
						sr->Close();
						return;
					}
				}
				sr->Close();
			}
			if (login->Contains(" ") || pas->Contains(" ")) {
				MessageBox::Show("Логин и пароль не должны содержать пробелы.");
				return;
			}
			StreamWriter^ sw = gcnew StreamWriter(path, true);
			sw->WriteLine(login + " " + pas);
			sw->Close();

			MessageBox::Show("Пользователь успешно зарегистрирован");
			LoginForm^ log = gcnew LoginForm();
			log->Show();
			this->Hide();
		}
		else
			MessageBox::Show("Логин или пароль введен некорректно");
	}

	};
}
