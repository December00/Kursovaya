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
	/// Сводка для MyTicketsForm
	/// </summary>
	public ref class MyTicketsForm : public System::Windows::Forms::Form
	{
	public:
		User^ user;
		MyTicketsForm(User^ user)
		{
			this->user = user;
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyTicketsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ TopLabel;
	private: System::Windows::Forms::Button^ ExitButton;
	private: System::Windows::Forms::ListView^ ClientsListView;

	private: System::Windows::Forms::ColumnHeader^ name;
	private: System::Windows::Forms::ColumnHeader^ amount;
	private: System::Windows::Forms::ColumnHeader^ flightnumber;
	private: System::Windows::Forms::ColumnHeader^ flightcost;
	private: System::Windows::Forms::ColumnHeader^ card;
	private: System::Windows::Forms::ColumnHeader^ passport;
	private: System::Windows::Forms::ColumnHeader^ status;
	private: System::Windows::Forms::Button^ CancelButton;

	private: System::Windows::Forms::TextBox^ NumberTextBox;
	private: System::Windows::Forms::Button^ SearchButton;


	private: System::Windows::Forms::Label^ InfoNumLabel;
	private: System::Windows::Forms::Button^ ResetButton;

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
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->ClientsListView = (gcnew System::Windows::Forms::ListView());
			this->name = (gcnew System::Windows::Forms::ColumnHeader());
			this->amount = (gcnew System::Windows::Forms::ColumnHeader());
			this->flightnumber = (gcnew System::Windows::Forms::ColumnHeader());
			this->flightcost = (gcnew System::Windows::Forms::ColumnHeader());
			this->card = (gcnew System::Windows::Forms::ColumnHeader());
			this->passport = (gcnew System::Windows::Forms::ColumnHeader());
			this->status = (gcnew System::Windows::Forms::ColumnHeader());
			this->CancelButton = (gcnew System::Windows::Forms::Button());
			this->NumberTextBox = (gcnew System::Windows::Forms::TextBox());
			this->SearchButton = (gcnew System::Windows::Forms::Button());
			this->InfoNumLabel = (gcnew System::Windows::Forms::Label());
			this->ResetButton = (gcnew System::Windows::Forms::Button());
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
			this->TopLabel->TabIndex = 17;
			this->TopLabel->Text = L"Мои билеты";
			this->TopLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
			this->ExitButton->Click += gcnew System::EventHandler(this, &MyTicketsForm::ExitButton_Click);
			// 
			// ClientsListView
			// 
			this->ClientsListView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(7) {
				this->name, this->amount,
					this->flightnumber, this->flightcost, this->card, this->passport, this->status
			});
			this->ClientsListView->HideSelection = false;
			this->ClientsListView->Location = System::Drawing::Point(15, 115);
			this->ClientsListView->Name = L"ClientsListView";
			this->ClientsListView->Size = System::Drawing::Size(610, 320);
			this->ClientsListView->TabIndex = 44;
			this->ClientsListView->UseCompatibleStateImageBehavior = false;
			this->ClientsListView->View = System::Windows::Forms::View::Details;
			this->ClientsListView->ItemActivate += gcnew System::EventHandler(this, &MyTicketsForm::ClientsListView_ItemActivate);
			// 
			// name
			// 
			this->name->Text = L"ФИО";
			this->name->Width = 130;
			// 
			// amount
			// 
			this->amount->Text = L"Количество";
			this->amount->Width = 65;
			// 
			// flightnumber
			// 
			this->flightnumber->Text = L"Номер рейса";
			this->flightnumber->Width = 70;
			// 
			// flightcost
			// 
			this->flightcost->Text = L"Цена";
			this->flightcost->Width = 40;
			// 
			// card
			// 
			this->card->Text = L"Номер карты";
			this->card->Width = 120;
			// 
			// passport
			// 
			this->passport->Text = L"Серия паспорта";
			this->passport->Width = 70;
			// 
			// status
			// 
			this->status->Text = L"Статус";
			this->status->Width = 80;
			// 
			// CancelButton
			// 
			this->CancelButton->BackColor = System::Drawing::Color::LightGray;
			this->CancelButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CancelButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->CancelButton->Location = System::Drawing::Point(425, 70);
			this->CancelButton->Name = L"CancelButton";
			this->CancelButton->Size = System::Drawing::Size(200, 40);
			this->CancelButton->TabIndex = 45;
			this->CancelButton->Text = L"Отменить бронь";
			this->CancelButton->UseVisualStyleBackColor = false;
			this->CancelButton->Click += gcnew System::EventHandler(this, &MyTicketsForm::CancelButton_Click);
			// 
			// NumberTextBox
			// 
			this->NumberTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->NumberTextBox->Location = System::Drawing::Point(15, 70);
			this->NumberTextBox->Name = L"NumberTextBox";
			this->NumberTextBox->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->NumberTextBox->Size = System::Drawing::Size(200, 40);
			this->NumberTextBox->TabIndex = 46;
			this->NumberTextBox->AutoSize = false;
			// 
			// SearchButton
			// 
			this->SearchButton->BackColor = System::Drawing::Color::LightGray;
			this->SearchButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SearchButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SearchButton->ForeColor = System::Drawing::Color::Black;
			this->SearchButton->Location = System::Drawing::Point(220, 70);
			this->SearchButton->Name = L"SearchButton";
			this->SearchButton->Size = System::Drawing::Size(200, 40);
			this->SearchButton->TabIndex = 47;
			this->SearchButton->Text = L"Поиск";
			this->SearchButton->UseVisualStyleBackColor = false;
			this->SearchButton->Click += gcnew System::EventHandler(this, &MyTicketsForm::SearchButton_Click);
			// 
			// InfoNumLabel
			// 
			this->InfoNumLabel->AutoSize = true;
			this->InfoNumLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->InfoNumLabel->ForeColor = System::Drawing::Color::White;
			this->InfoNumLabel->Location = System::Drawing::Point(12, 42);
			this->InfoNumLabel->Name = L"InfoNumLabel";
			this->InfoNumLabel->Size = System::Drawing::Size(144, 25);
			this->InfoNumLabel->TabIndex = 48;
			this->InfoNumLabel->Text = L"Номер рейса";
			// 
			// ResetButton
			// 
			this->ResetButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->ResetButton->FlatAppearance->BorderSize = 2;
			this->ResetButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ResetButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ResetButton->ForeColor = System::Drawing::Color::White;
			this->ResetButton->Location = System::Drawing::Point(15, 435);
			this->ResetButton->Name = L"ResetButton";
			this->ResetButton->Size = System::Drawing::Size(610, 40);
			this->ResetButton->TabIndex = 49;
			this->ResetButton->Text = L"Обновить";
			this->ResetButton->UseVisualStyleBackColor = false;
			this->ResetButton->Click += gcnew System::EventHandler(this, &MyTicketsForm::ResetButton_Click);
			// 
			// MyTicketsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->ClientSize = System::Drawing::Size(640, 480);
			this->Controls->Add(this->ResetButton);
			this->Controls->Add(this->InfoNumLabel);
			this->Controls->Add(this->SearchButton);
			this->Controls->Add(this->NumberTextBox);
			this->Controls->Add(this->CancelButton);
			this->Controls->Add(this->ClientsListView);
			this->Controls->Add(this->ExitButton);
			this->Controls->Add(this->TopLabel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyTicketsForm";
			this->Text = L"MyTicketsForm";
			this->Load += gcnew System::EventHandler(this, &MyTicketsForm::MyTicketsForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		ClientsContainer^ clientsCon = gcnew ClientsContainer();
		String^ clientpath = "Clients.txt";
		bool del = false;
	private: System::Void ExitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void MyTicketsForm_Load(System::Object^ sender, System::EventArgs^ e) {
		clientsCon->FillContainer(clientpath);
		clientsCon->Search(user->login);
		for (int i = 0; i < clientsCon->length; i++) {
			Client^ client = clientsCon->arr[i];

			if (client != nullptr) {
				ListViewItem^ newItem = gcnew ListViewItem(client->name);
				newItem->SubItems->Add(client->amount);
				newItem->SubItems->Add(client->flightNumber);
				newItem->SubItems->Add(client->cost);
				newItem->SubItems->Add(client->card);
				newItem->SubItems->Add(client->passport);
				newItem->SubItems->Add(client->status);
				ClientsListView->Items->Add(newItem);
			}
		}
	}


private: System::Void SearchButton_Click(System::Object^ sender, System::EventArgs^ e) {
	ClientsListView->Items->Clear();
	clientsCon->Search(user->login, this->NumberTextBox->Text);
	for (int i = 0; i < clientsCon->length; i++) {
		Client^ client = clientsCon->arr[i];

		if (client != nullptr) {
			ListViewItem^ newItem = gcnew ListViewItem(client->name);
			newItem->SubItems->Add(client->amount);
			newItem->SubItems->Add(client->flightNumber);
			newItem->SubItems->Add(client->cost);
			newItem->SubItems->Add(client->card);
			newItem->SubItems->Add(client->passport);
			newItem->SubItems->Add(client->status);
			ClientsListView->Items->Add(newItem);
		}
	}
}
private: System::Void CancelButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (del) {
		this->CancelButton->BackColor = System::Drawing::Color::LightGray;
		this->CancelButton->ForeColor = System::Drawing::Color::Black;
		del = false;
	}
	else
	{
		this->CancelButton->BackColor = System::Drawing::Color::DimGray;
		this->CancelButton->ForeColor = System::Drawing::Color::White;
		del = true;
	}
}
	 
private: System::Void ClientsListView_ItemActivate(System::Object^ sender, System::EventArgs^ e) {
	if (del)
	{
		ListView^ ClientsListVIew = safe_cast<ListView^>(sender);
		if (ClientsListVIew->SelectedItems->Count > 0)
		{
			ListViewItem^ selectedItem = ClientsListVIew->SelectedItems[0];
			Client^ client = gcnew Client();
			client->flightNumber = selectedItem->SubItems[2]->Text;
			client->status = selectedItem->SubItems[6]->Text;
			if (client->status == "Забронировано") {
				clientsCon->Remove(client);
				MessageBox::Show("Бронь отменена");
				this->CancelButton->BackColor = System::Drawing::Color::LightGray;
				this->CancelButton->ForeColor = System::Drawing::Color::Black;
				del = false;
			}
			else
				MessageBox::Show("Можно отменять только забронированные билеты");
			ClientsListView->Items->Clear();
		}
			clientsCon->FillContainer(clientpath);
			clientsCon->Search(user->login);
			for (int i = 0; i < clientsCon->length; i++) {
				Client^ client = clientsCon->arr[i];

				if (client != nullptr) {
					ListViewItem^ newItem = gcnew ListViewItem(client->name);
					newItem->SubItems->Add(client->amount);
					newItem->SubItems->Add(client->flightNumber);
					newItem->SubItems->Add(client->cost);
					newItem->SubItems->Add(client->card);
					newItem->SubItems->Add(client->passport);
					newItem->SubItems->Add(client->status);
					ClientsListView->Items->Add(newItem);
				}
			}
	}

}
private: System::Void ResetButton_Click(System::Object^ sender, System::EventArgs^ e) {
	ClientsListView->Items->Clear();
	   clientsCon->FillContainer(clientpath);
	   clientsCon->Search(user->login);
	   for (int i = 0; i < clientsCon->length; i++) {
		   Client^ client = clientsCon->arr[i];

		   if (client != nullptr) {
			   ListViewItem^ newItem = gcnew ListViewItem(client->name);
			   newItem->SubItems->Add(client->amount);
			   newItem->SubItems->Add(client->flightNumber);
			   newItem->SubItems->Add(client->cost);
			   newItem->SubItems->Add(client->card);
			   newItem->SubItems->Add(client->passport);
			   newItem->SubItems->Add(client->status);
			   ClientsListView->Items->Add(newItem);
		   }
	   }
}
};
}
