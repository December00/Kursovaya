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
		Flight^ currentFlight;
	private: System::Windows::Forms::Label^ FlightInfoLabel;
	private: System::Windows::Forms::Label^ CostInfoLabel;
	public:
		Client^ currentClient;
		OrderForm(Flight^ flight, Client^ client)
		{
			this->currentFlight = flight;
			this->currentClient = client;
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
	private: System::Windows::Forms::Label^ PassportInfoLabel;
	private: System::Windows::Forms::TextBox^ PassportTextBox;



	private: System::Windows::Forms::Button^ MakeOrderButton;


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
			this->PassportInfoLabel = (gcnew System::Windows::Forms::Label());
			this->PassportTextBox = (gcnew System::Windows::Forms::TextBox());
			this->MakeOrderButton = (gcnew System::Windows::Forms::Button());
			this->FlightInfoLabel = (gcnew System::Windows::Forms::Label());
			this->CostInfoLabel = (gcnew System::Windows::Forms::Label());
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
			this->TicketsAmountTextBox->Location = System::Drawing::Point(32, 378);
			this->TicketsAmountTextBox->Name = L"TicketsAmountTextBox";
			this->TicketsAmountTextBox->Size = System::Drawing::Size(250, 22);
			this->TicketsAmountTextBox->TabIndex = 19;
			// 
			// TicketsAmoutInfoLabel
			// 
			this->TicketsAmoutInfoLabel->AutoSize = true;
			this->TicketsAmoutInfoLabel->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TicketsAmoutInfoLabel->ForeColor = System::Drawing::Color::White;
			this->TicketsAmoutInfoLabel->Location = System::Drawing::Point(32, 348);
			this->TicketsAmoutInfoLabel->Name = L"TicketsAmoutInfoLabel";
			this->TicketsAmoutInfoLabel->Size = System::Drawing::Size(196, 24);
			this->TicketsAmoutInfoLabel->TabIndex = 20;
			this->TicketsAmoutInfoLabel->Text = L"Количество билетов";
			// 
			// CardInfoLabel
			// 
			this->CardInfoLabel->AutoSize = true;
			this->CardInfoLabel->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->CardInfoLabel->ForeColor = System::Drawing::Color::White;
			this->CardInfoLabel->Location = System::Drawing::Point(32, 468);
			this->CardInfoLabel->Name = L"CardInfoLabel";
			this->CardInfoLabel->Size = System::Drawing::Size(131, 24);
			this->CardInfoLabel->TabIndex = 22;
			this->CardInfoLabel->Text = L"Номер карты";
			// 
			// CardTextBox
			// 
			this->CardTextBox->Location = System::Drawing::Point(32, 498);
			this->CardTextBox->Name = L"CardTextBox";
			this->CardTextBox->Size = System::Drawing::Size(250, 22);
			this->CardTextBox->TabIndex = 21;
			// 
			// SurnameInfoLabel
			// 
			this->SurnameInfoLabel->AutoSize = true;
			this->SurnameInfoLabel->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SurnameInfoLabel->ForeColor = System::Drawing::Color::White;
			this->SurnameInfoLabel->Location = System::Drawing::Point(352, 348);
			this->SurnameInfoLabel->Name = L"SurnameInfoLabel";
			this->SurnameInfoLabel->Size = System::Drawing::Size(52, 24);
			this->SurnameInfoLabel->TabIndex = 24;
			this->SurnameInfoLabel->Text = L"ФИО";
			// 
			// SurnameTextBox
			// 
			this->SurnameTextBox->Location = System::Drawing::Point(352, 378);
			this->SurnameTextBox->Name = L"SurnameTextBox";
			this->SurnameTextBox->Size = System::Drawing::Size(250, 22);
			this->SurnameTextBox->TabIndex = 23;
			// 
			// PassportInfoLabel
			// 
			this->PassportInfoLabel->AutoSize = true;
			this->PassportInfoLabel->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->PassportInfoLabel->ForeColor = System::Drawing::Color::White;
			this->PassportInfoLabel->Location = System::Drawing::Point(352, 468);
			this->PassportInfoLabel->Name = L"PassportInfoLabel";
			this->PassportInfoLabel->Size = System::Drawing::Size(156, 24);
			this->PassportInfoLabel->TabIndex = 26;
			this->PassportInfoLabel->Text = L"Серия паспорта";
			// 
			// PassportTextBox
			// 
			this->PassportTextBox->Location = System::Drawing::Point(352, 498);
			this->PassportTextBox->Name = L"PassportTextBox";
			this->PassportTextBox->Size = System::Drawing::Size(250, 22);
			this->PassportTextBox->TabIndex = 25;
			// 
			// MakeOrderButton
			// 
			this->MakeOrderButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->MakeOrderButton->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MakeOrderButton->ForeColor = System::Drawing::Color::White;
			this->MakeOrderButton->Location = System::Drawing::Point(140, 620);
			this->MakeOrderButton->Name = L"MakeOrderButton";
			this->MakeOrderButton->Size = System::Drawing::Size(360, 60);
			this->MakeOrderButton->TabIndex = 27;
			this->MakeOrderButton->Text = L"Купить";
			this->MakeOrderButton->UseVisualStyleBackColor = true;
			this->MakeOrderButton->Click += gcnew System::EventHandler(this, &OrderForm::MakeOrderButton_Click);
			// 
			// FlightInfoLabel
			// 
			this->FlightInfoLabel->AutoSize = true;
			this->FlightInfoLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FlightInfoLabel->ForeColor = System::Drawing::Color::White;
			this->FlightInfoLabel->Location = System::Drawing::Point(10, 227);
			this->FlightInfoLabel->Name = L"FlightInfoLabel";
			this->FlightInfoLabel->Size = System::Drawing::Size(279, 29);
			this->FlightInfoLabel->TabIndex = 28;
			this->FlightInfoLabel->Text = L"Информация о рейсе";
			// 
			// CostInfoLabel
			// 
			this->CostInfoLabel->AutoSize = true;
			this->CostInfoLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->CostInfoLabel->ForeColor = System::Drawing::Color::White;
			this->CostInfoLabel->Location = System::Drawing::Point(10, 198);
			this->CostInfoLabel->Name = L"CostInfoLabel";
			this->CostInfoLabel->Size = System::Drawing::Size(264, 29);
			this->CostInfoLabel->TabIndex = 29;
			this->CostInfoLabel->Text = L"Информация о цене";
			// 
			// OrderForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->ClientSize = System::Drawing::Size(640, 720);
			this->Controls->Add(this->CostInfoLabel);
			this->Controls->Add(this->FlightInfoLabel);
			this->Controls->Add(this->MakeOrderButton);
			this->Controls->Add(this->PassportInfoLabel);
			this->Controls->Add(this->PassportTextBox);
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
		ClientsContainer^ clientsCon = gcnew ClientsContainer();
		String^ path = "Clients.txt";
		bool IsDigits(System::String^ str)
		{
			for each (wchar_t c in str)
			{
				if (c != ' ') 
					if (c < '0' || c > '9')
					{
						return false;
					}
			}
			return true;
		}
	
private: System::Void OrderForm_Load(System::Object^ sender, System::EventArgs^ e) {
	this->FlightInfoLabel->Text = currentFlight->flightNumber + " " + currentFlight->airline + "\n" + currentFlight->locationDeparture + " " + currentFlight->dateDep + " - " + currentFlight->locationArrival + " " + currentFlight->dateAr;
	this->CostInfoLabel->Text = "Цена 1 билета: " + currentFlight->cost;
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
	this->PassportInfoLabel->Visible = false;
	this->PassportTextBox->Visible = false;
	this->CostInfoLabel->Visible = false;
	this->MakeOrderButton->Text = "Забронировать";
}
private: System::Void BuyButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->BuyButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
		static_cast<System::Int32>(static_cast<System::Byte>(240)));
	this->BookButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
		static_cast<System::Int32>(static_cast<System::Byte>(204)));
	this->CardInfoLabel->Visible = true;
	this->CardTextBox->Visible = true;
	this->PassportInfoLabel->Visible = true;
	this->PassportTextBox->Visible = true;
	this->CostInfoLabel->Visible = true;
	this->MakeOrderButton->Text = "Купить";
}
private: System::Void MakeOrderButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (IsDigits(this->TicketsAmountTextBox->Text) && IsDigits(this->CardTextBox->Text))
	{
		if (Convert::ToInt64(this->TicketsAmountTextBox->Text) <= 5)
		{
			currentClient->amount = TicketsAmountTextBox->Text;
			currentClient->flightNumber = currentFlight->flightNumber;
			currentClient->name = SurnameTextBox->Text;
			currentClient->cost = currentFlight->cost;
			if (this->MakeOrderButton->Text == "Купить") {
				currentClient->card = CardTextBox->Text;
				currentClient->passport = PassportTextBox->Text;
				currentClient->status = "Куплено";
			}
			else
			{
				currentClient->status = "Забронировано";
				currentClient->card = "-";
				currentClient->passport = "-";
			}
			clientsCon->Add(currentClient, path);
			this->Close();
		}
		else
		{
			MessageBox::Show("Вы не можете забронировать или купить больше 5 билетов");
			this->TicketsAmountTextBox->Text = "";
		}
	}
	else
		MessageBox::Show("Поле номер карты и количество билетов должно состоять только из цифр");
}
};
}
