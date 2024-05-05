#pragma once
#include "MyClasses.h"
namespace WPA {

	using namespace MyClass;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для OrderForm
	/// </summary>
	public ref class OrderForm : public System::Windows::Forms::Form
	{
	public:
		OrderForm(void)
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
		~OrderForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ TopLabel;
	private: System::Windows::Forms::Button^ BuyButton;
	private: System::Windows::Forms::Button^ BookButton;



	private: System::Windows::Forms::Button^ ExitButton;
	private: System::Windows::Forms::TextBox^ TicketsAmountTextBox;
	private: System::Windows::Forms::Label^ TicketsAmoutInfoLabel;


	private: System::Windows::Forms::Label^ CardInfoLabel;

	private: System::Windows::Forms::TextBox^ CardTextBox;
	private: System::Windows::Forms::Label^ SurnameInfoLabel;


	private: System::Windows::Forms::TextBox^ SurnameTextBox;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->TopLabel = (gcnew System::Windows::Forms::Label());
			this->BuyButton = (gcnew System::Windows::Forms::Button());
			this->BookButton = (gcnew System::Windows::Forms::Button());
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->TicketsAmountTextBox = (gcnew System::Windows::Forms::TextBox());
			this->TicketsAmoutInfoLabel = (gcnew System::Windows::Forms::Label());
			this->CardInfoLabel = (gcnew System::Windows::Forms::Label());
			this->CardTextBox = (gcnew System::Windows::Forms::TextBox());
			this->SurnameInfoLabel = (gcnew System::Windows::Forms::Label());
			this->SurnameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
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
			this->TopLabel->Size = System::Drawing::Size(640, 40);
			this->TopLabel->TabIndex = 15;
			this->TopLabel->Text = L"Оформление заказа";
			this->TopLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->TopLabel->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &OrderForm::TopLabel_MouseDown_1);
			this->TopLabel->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &OrderForm::TopLabel_MouseMove_1);
			// 
			// BuyButton
			// 
			this->BuyButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->BuyButton->Cursor = System::Windows::Forms::Cursors::Default;
			this->BuyButton->FlatAppearance->BorderSize = 0;
			this->BuyButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BuyButton->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->BuyButton->ForeColor = System::Drawing::Color::White;
			this->BuyButton->Location = System::Drawing::Point(0, 40);
			this->BuyButton->Margin = System::Windows::Forms::Padding(0);
			this->BuyButton->Name = L"BuyButton";
			this->BuyButton->Size = System::Drawing::Size(320, 80);
			this->BuyButton->TabIndex = 16;
			this->BuyButton->Text = L"Покупка билета";
			this->BuyButton->UseVisualStyleBackColor = false;
			this->BuyButton->Click += gcnew System::EventHandler(this, &OrderForm::BuyButton_Click);
			// 
			// BookButton
			// 
			this->BookButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->BookButton->Cursor = System::Windows::Forms::Cursors::Default;
			this->BookButton->FlatAppearance->BorderSize = 0;
			this->BookButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BookButton->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->BookButton->ForeColor = System::Drawing::Color::White;
			this->BookButton->Location = System::Drawing::Point(320, 40);
			this->BookButton->Margin = System::Windows::Forms::Padding(0);
			this->BookButton->Name = L"BookButton";
			this->BookButton->Size = System::Drawing::Size(320, 80);
			this->BookButton->TabIndex = 17;
			this->BookButton->Text = L"Бронь билета";
			this->BookButton->UseVisualStyleBackColor = false;
			this->BookButton->Click += gcnew System::EventHandler(this, &OrderForm::BookButton_Click);
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
			this->ExitButton->Location = System::Drawing::Point(600, 0);
			this->ExitButton->Name = L"ExitButton";
			this->ExitButton->Size = System::Drawing::Size(40, 40);
			this->ExitButton->TabIndex = 18;
			this->ExitButton->Text = L"X";
			this->ExitButton->UseVisualStyleBackColor = true;
			this->ExitButton->Click += gcnew System::EventHandler(this, &OrderForm::ExitButton_Click);
			// 
			// TicketsAmountTextBox
			// 
			this->TicketsAmountTextBox->Location = System::Drawing::Point(35, 279);
			this->TicketsAmountTextBox->Name = L"TicketsAmountTextBox";
			this->TicketsAmountTextBox->Size = System::Drawing::Size(250, 50);
			this->TicketsAmountTextBox->AutoSize = false;
			this->TicketsAmountTextBox->TabIndex = 19;
			// 
			// TicketsAmoutInfoLabel
			// 
			this->TicketsAmoutInfoLabel->AutoSize = true;
			this->TicketsAmoutInfoLabel->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TicketsAmoutInfoLabel->ForeColor = System::Drawing::Color::White;
			this->TicketsAmoutInfoLabel->Location = System::Drawing::Point(32, 242);
			this->TicketsAmoutInfoLabel->Name = L"TicketsAmoutInfoLabel";
			this->TicketsAmoutInfoLabel->Size = System::Drawing::Size(227, 28);
			this->TicketsAmoutInfoLabel->TabIndex = 20;
			this->TicketsAmoutInfoLabel->Text = L"Количество билетов";
			// 
			// CardInfoLabel
			// 
			this->CardInfoLabel->AutoSize = true;
			this->CardInfoLabel->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->CardInfoLabel->ForeColor = System::Drawing::Color::White;
			this->CardInfoLabel->Location = System::Drawing::Point(32, 472);
			this->CardInfoLabel->Name = L"CardInfoLabel";
			this->CardInfoLabel->Size = System::Drawing::Size(150, 28);
			this->CardInfoLabel->TabIndex = 22;
			this->CardInfoLabel->Text = L"Номер карты";
			// 
			// CardTextBox
			// 
			this->CardTextBox->Location = System::Drawing::Point(35, 503);
			this->CardTextBox->Name = L"CardTextBox";
			this->CardTextBox->Size = System::Drawing::Size(250, 50);
			this->CardTextBox->AutoSize = false;
			this->CardTextBox->TabIndex = 21;
			// 
			// SurnameInfoLabel
			// 
			this->SurnameInfoLabel->AutoSize = true;
			this->SurnameInfoLabel->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SurnameInfoLabel->ForeColor = System::Drawing::Color::White;
			this->SurnameInfoLabel->Location = System::Drawing::Point(32, 366);
			this->SurnameInfoLabel->Name = L"SurnameInfoLabel";
			this->SurnameInfoLabel->Size = System::Drawing::Size(234, 28);
			this->SurnameInfoLabel->TabIndex = 24;
			this->SurnameInfoLabel->Text = L"Фамилия покупателя";
			// 
			// SurnameTextBox
			// 
			this->SurnameTextBox->Location = System::Drawing::Point(35, 403);
			this->SurnameTextBox->Name = L"SurnameTextBox";
			this->SurnameTextBox->Size = System::Drawing::Size(250, 50);
			this->SurnameTextBox->AutoSize = false;
			this->SurnameTextBox->TabIndex = 23;
			// 
			// OrderForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->ClientSize = System::Drawing::Size(640, 720);
			this->Controls->Add(this->SurnameInfoLabel);
			this->Controls->Add(this->SurnameTextBox);
			this->Controls->Add(this->CardInfoLabel);
			this->Controls->Add(this->CardTextBox);
			this->Controls->Add(this->TicketsAmoutInfoLabel);
			this->Controls->Add(this->TicketsAmountTextBox);
			this->Controls->Add(this->ExitButton);
			this->Controls->Add(this->BookButton);
			this->Controls->Add(this->BuyButton);
			this->Controls->Add(this->TopLabel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"OrderForm";
			this->Text = L"OrderForm";
			this->Load += gcnew System::EventHandler(this, &OrderForm::OrderForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Point lastPoint;
		
	
private: System::Void OrderForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void ExitButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void TopLabel_MouseMove_1(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (e->Button == System::Windows::Forms::MouseButtons::Left) {
		this->Left += e->X - lastPoint.X;
		this->Top += e->Y - lastPoint.Y;

	}
}
private: System::Void TopLabel_MouseDown_1(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	lastPoint = Point(e->X, e->Y);
}
private: System::Void BookButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->BookButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
		static_cast<System::Int32>(static_cast<System::Byte>(240)));
	this->BuyButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
		static_cast<System::Int32>(static_cast<System::Byte>(204)));
	this->CardInfoLabel->Visible = false;
	this->CardTextBox->Visible = false;
}
private: System::Void BuyButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->BuyButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
		static_cast<System::Int32>(static_cast<System::Byte>(240)));
	this->BookButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
		static_cast<System::Int32>(static_cast<System::Byte>(204)));
	this->CardInfoLabel->Visible = true;
	this->CardTextBox->Visible = true;
}
};
}
