#pragma once
#include "MyClasses.h"
#include "OrderForm.h"
#include "MyTicketsForm.h"
namespace WPA {

	using namespace MyClass;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	
	public ref class MainWindow : public System::Windows::Forms::Form
	{
	public:
		User^ user;
		MainWindow(User^ user)
		{
			this->user = user;
			InitializeComponent();
			
		}

	protected:
		
		~MainWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ TopLabel;
	private: System::Windows::Forms::Button^ ExitButton;
	private: System::Windows::Forms::ListView^ listView;
	private: System::Windows::Forms::ColumnHeader^ Number;
	private: System::Windows::Forms::ColumnHeader^ LocDep;
	private: System::Windows::Forms::ColumnHeader^ DateDep;
	private: System::Windows::Forms::ColumnHeader^ LocAr;
	private: System::Windows::Forms::ColumnHeader^ DateAr;
	private: System::Windows::Forms::ColumnHeader^ Airlane;
	private: System::Windows::Forms::ColumnHeader^ Cost;
	private: System::Windows::Forms::TextBox^ DepTextBox;
	private: System::Windows::Forms::TextBox^ ArTextBox;

	private: System::Windows::Forms::Label^ MyTicketsLabel;
	private: System::Windows::Forms::Label^ HelpLabel;
	private: System::Windows::Forms::Button^ SearchButton;
	private: System::Windows::Forms::Button^ ResetButton;
	private: System::Windows::Forms::Label^ InfoDepLabel;
	private: System::Windows::Forms::Label^ InfoArLabel;




	protected:

	private:
		
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		
		void InitializeComponent(void)
		{
			this->TopLabel = (gcnew System::Windows::Forms::Label());
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->listView = (gcnew System::Windows::Forms::ListView());
			this->Number = (gcnew System::Windows::Forms::ColumnHeader());
			this->LocDep = (gcnew System::Windows::Forms::ColumnHeader());
			this->DateDep = (gcnew System::Windows::Forms::ColumnHeader());
			this->LocAr = (gcnew System::Windows::Forms::ColumnHeader());
			this->DateAr = (gcnew System::Windows::Forms::ColumnHeader());
			this->Airlane = (gcnew System::Windows::Forms::ColumnHeader());
			this->Cost = (gcnew System::Windows::Forms::ColumnHeader());
			this->DepTextBox = (gcnew System::Windows::Forms::TextBox());
			this->ArTextBox = (gcnew System::Windows::Forms::TextBox());
			this->MyTicketsLabel = (gcnew System::Windows::Forms::Label());
			this->HelpLabel = (gcnew System::Windows::Forms::Label());
			this->SearchButton = (gcnew System::Windows::Forms::Button());
			this->ResetButton = (gcnew System::Windows::Forms::Button());
			this->InfoDepLabel = (gcnew System::Windows::Forms::Label());
			this->InfoArLabel = (gcnew System::Windows::Forms::Label());
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
			this->TopLabel->Size = System::Drawing::Size(1200, 40);
			this->TopLabel->TabIndex = 15;
			this->TopLabel->Text = L"Главное меню";
			this->TopLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->TopLabel->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::TopLabel_MouseDown);
			this->TopLabel->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::TopLabel_MouseMove);
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
			this->ExitButton->Location = System::Drawing::Point(1160, 0);
			this->ExitButton->Name = L"ExitButton";
			this->ExitButton->Size = System::Drawing::Size(40, 40);
			this->ExitButton->TabIndex = 16;
			this->ExitButton->Text = L"X";
			this->ExitButton->UseVisualStyleBackColor = true;
			this->ExitButton->Click += gcnew System::EventHandler(this, &MainWindow::ExitButton_Click);
			// 
			// listView
			// 
			this->listView->BackColor = System::Drawing::SystemColors::Menu;
			this->listView->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(7) {
				this->Number, this->LocDep,
					this->DateDep, this->LocAr, this->DateAr, this->Airlane, this->Cost
			});
			this->listView->HideSelection = false;
			this->listView->ImeMode = System::Windows::Forms::ImeMode::Off;
			this->listView->Location = System::Drawing::Point(38, 268);
			this->listView->Name = L"listView";
			this->listView->Size = System::Drawing::Size(1115, 520);
			this->listView->TabIndex = 17;
			this->listView->UseCompatibleStateImageBehavior = false;
			this->listView->View = System::Windows::Forms::View::Details;
			this->listView->ColumnClick += gcnew System::Windows::Forms::ColumnClickEventHandler(this, &MainWindow::listView_ColumnClick);
			this->listView->ItemActivate += gcnew System::EventHandler(this, &MainWindow::listView_ItemActivate);
			// 
			// Number
			// 
			this->Number->Text = L"Номер рейса";
			this->Number->Width = 90;
			// 
			// LocDep
			// 
			this->LocDep->Text = L"Вылет";
			this->LocDep->Width = 120;
			// 
			// DateDep
			// 
			this->DateDep->Text = L"Дата вылета";
			this->DateDep->Width = 150;
			// 
			// LocAr
			// 
			this->LocAr->Text = L"Прилёт";
			this->LocAr->Width = 120;
			// 
			// DateAr
			// 
			this->DateAr->Text = L"Дата прилёта";
			this->DateAr->Width = 150;
			// 
			// Airlane
			// 
			this->Airlane->Text = L"Авиакомпания";
			this->Airlane->Width = 100;
			// 
			// Cost
			// 
			this->Cost->Text = L"Цена";
			// 
			// DepTextBox
			// 
			this->DepTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DepTextBox->Location = System::Drawing::Point(38, 186);
			this->DepTextBox->Name = L"DepTextBox";
			this->DepTextBox->Size = System::Drawing::Size(250, 50);
			this->DepTextBox->AutoSize = false;
			this->DepTextBox->TabIndex = 18;
			this->DepTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// ArTextBox
			// 
			this->ArTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ArTextBox->Location = System::Drawing::Point(294, 186);
			this->ArTextBox->Name = L"ArTextBox";
			this->ArTextBox->Size = System::Drawing::Size(250, 50);
			this->ArTextBox->AutoSize = false;
			this->ArTextBox->TabIndex = 19;
			this->ArTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// MyTicketsLabel
			// 
			this->MyTicketsLabel->AutoSize = true;
			this->MyTicketsLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->MyTicketsLabel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->MyTicketsLabel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->MyTicketsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MyTicketsLabel->ForeColor = System::Drawing::Color::White;
			this->MyTicketsLabel->Location = System::Drawing::Point(35, 11);
			this->MyTicketsLabel->Name = L"MyTicketsLabel";
			this->MyTicketsLabel->Size = System::Drawing::Size(104, 18);
			this->MyTicketsLabel->TabIndex = 20;
			this->MyTicketsLabel->Text = L"Мои билеты";
			this->MyTicketsLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->MyTicketsLabel->Click += gcnew System::EventHandler(this, &MainWindow::MyTicketsLabel_Click);
			// 
			// HelpLabel
			// 
			this->HelpLabel->AutoSize = true;
			this->HelpLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->HelpLabel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->HelpLabel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->HelpLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->HelpLabel->ForeColor = System::Drawing::Color::White;
			this->HelpLabel->Location = System::Drawing::Point(159, 11);
			this->HelpLabel->Name = L"HelpLabel";
			this->HelpLabel->Size = System::Drawing::Size(73, 18);
			this->HelpLabel->TabIndex = 21;
			this->HelpLabel->Text = L"Помощь";
			this->HelpLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->HelpLabel->Click += gcnew System::EventHandler(this, &MainWindow::HelpLabel_Click);
			// 
			// SearchButton
			// 
			this->SearchButton->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->SearchButton->BackColor = System::Drawing::Color::Gainsboro;
			this->SearchButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SearchButton->Location = System::Drawing::Point(550, 186);
			this->SearchButton->Name = L"SearchButton";
			this->SearchButton->Size = System::Drawing::Size(302, 50);
			this->SearchButton->TabIndex = 22;
			this->SearchButton->Text = L"Поиск";
			this->SearchButton->UseVisualStyleBackColor = false;
			this->SearchButton->Click += gcnew System::EventHandler(this, &MainWindow::SearchButton_Click);
			// 
			// ResetButton
			// 
			this->ResetButton->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ResetButton->BackColor = System::Drawing::Color::Gainsboro;
			this->ResetButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ResetButton->Location = System::Drawing::Point(858, 186);
			this->ResetButton->Name = L"ResetButton";
			this->ResetButton->Size = System::Drawing::Size(295, 50);
			this->ResetButton->TabIndex = 23;
			this->ResetButton->Text = L"Отмена";
			this->ResetButton->UseVisualStyleBackColor = false;
			this->ResetButton->Click += gcnew System::EventHandler(this, &MainWindow::ResetButton_Click);
			// 
			// InfoDepLabel
			// 
			this->InfoDepLabel->AutoSize = true;
			this->InfoDepLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->InfoDepLabel->ForeColor = System::Drawing::Color::White;
			this->InfoDepLabel->Location = System::Drawing::Point(33, 154);
			this->InfoDepLabel->Name = L"InfoDepLabel";
			this->InfoDepLabel->Size = System::Drawing::Size(184, 29);
			this->InfoDepLabel->TabIndex = 24;
			this->InfoDepLabel->Text = L"Место вылета";
			// 
			// InfoArLabel
			// 
			this->InfoArLabel->AutoSize = true;
			this->InfoArLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->InfoArLabel->ForeColor = System::Drawing::Color::White;
			this->InfoArLabel->Location = System::Drawing::Point(289, 154);
			this->InfoArLabel->Name = L"InfoArLabel";
			this->InfoArLabel->Size = System::Drawing::Size(197, 29);
			this->InfoArLabel->TabIndex = 25;
			this->InfoArLabel->Text = L"Место прилёта";
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->ClientSize = System::Drawing::Size(1200, 800);
			this->Controls->Add(this->InfoArLabel);
			this->Controls->Add(this->InfoDepLabel);
			this->Controls->Add(this->ResetButton);
			this->Controls->Add(this->SearchButton);
			this->Controls->Add(this->HelpLabel);
			this->Controls->Add(this->MyTicketsLabel);
			this->Controls->Add(this->ArTextBox);
			this->Controls->Add(this->DepTextBox);
			this->Controls->Add(this->listView);
			this->Controls->Add(this->ExitButton);
			this->Controls->Add(this->TopLabel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MainWindow";
			this->Text = L"MainWindow";
			this->Load += gcnew System::EventHandler(this, &MainWindow::MainWindow_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	Point lastPoint;
	FlightsContainer^ flightsCon = gcnew FlightsContainer();
	String^ path = "Flights.txt";
	Flight^ currentFlight = gcnew Flight();
	private: System::Void ExitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void MainWindow_Load(System::Object^ sender, System::EventArgs^ e) {
		flightsCon->FillContainer(path);
		for (int i = 0; i < flightsCon->length; i++) {
			Flight^ flight = flightsCon->arr[i];

			if (flight != nullptr) {
				ListViewItem^ newItem = gcnew ListViewItem(flight->flightNumber);
				newItem->SubItems->Add(flight->locationDeparture);
				newItem->SubItems->Add(flight->dateDep);
				newItem->SubItems->Add(flight->locationArrival);
				newItem->SubItems->Add(flight->dateAr);
				newItem->SubItems->Add(flight->airline);
				newItem->SubItems->Add(flight->cost);
				listView->Items->Add(newItem);
			}
		}
	
	}
	private: System::Void TopLabel_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left) {
			this->Left += e->X - lastPoint.X;
			this->Top += e->Y - lastPoint.Y;

		}
	}
	private: System::Void TopLabel_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		lastPoint = Point(e->X, e->Y);

	}

private: System::Void SearchButton_Click(System::Object^ sender, System::EventArgs^ e) {
	listView->Items->Clear();
	flightsCon->FillContainer(path);
	String^ dep = DepTextBox->Text;
	String^ ar = ArTextBox->Text;
	if(dep != "" || ar != "")
		flightsCon->Search(dep, ar);
	for (int i = 0; i < flightsCon->length; i++) {
		Flight^ flight = flightsCon->arr[i];

		if (flight != nullptr) {
			ListViewItem^ newItem = gcnew ListViewItem(flight->flightNumber);
			newItem->SubItems->Add(flight->locationDeparture);
			newItem->SubItems->Add(flight->dateDep);
			newItem->SubItems->Add(flight->locationArrival);
			newItem->SubItems->Add(flight->dateAr);
			newItem->SubItems->Add(flight->airline);
			newItem->SubItems->Add(flight->cost);
			listView->Items->Add(newItem);
		}
	}
}
private: System::Void ResetButton_Click(System::Object^ sender, System::EventArgs^ e) {
	DepTextBox->Text = "";
	ArTextBox->Text = "";
	listView->Items->Clear();
	flightsCon->FillContainer(path);

	
	for (int i = 0; i < flightsCon->length; i++) {
		Flight^ flight = flightsCon->arr[i];
		if (flight != nullptr) {
			ListViewItem^ newItem = gcnew ListViewItem(flight->flightNumber);
			newItem->SubItems->Add(flight->locationDeparture);
			newItem->SubItems->Add(flight->dateDep);
			newItem->SubItems->Add(flight->locationArrival);
			newItem->SubItems->Add(flight->dateAr);
			newItem->SubItems->Add(flight->airline);
			newItem->SubItems->Add(flight->cost);
			listView->Items->Add(newItem);
		}
	}
	
}
private: System::Void listView_ItemActivate(System::Object^ sender, System::EventArgs^ e) {
	if (user->auth) {
		Client^ currentClient = gcnew Client(user->login);
		ListView^ listView = safe_cast<ListView^>(sender);
		if (listView->SelectedItems->Count > 0) {
			ListViewItem^ selectedItem = listView->SelectedItems[0];
			currentFlight->flightNumber = selectedItem->SubItems[0]->Text;
			currentFlight->locationDeparture = selectedItem->SubItems[1]->Text;
			currentFlight->dateDep = selectedItem->SubItems[2]->Text;
			currentFlight->locationArrival = selectedItem->SubItems[3]->Text;
			currentFlight->dateAr = selectedItem->SubItems[4]->Text;
			currentFlight->airline = selectedItem->SubItems[5]->Text;
			currentFlight->cost = selectedItem->SubItems[6]->Text;
		}
		OrderForm^ ord = gcnew OrderForm(currentFlight, currentClient);
		ord->Show();
	}
}
private: System::Void HelpLabel_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Чтобы забронировать или купить билет вам нужно нажать на номер рейса, далее выбрать что вам необходимо бронь/покупка. \nДля облегчения выбора нужного вам рейса можете использовать ячейки место вылета и место прилёта для поиска конкретного рейса, а также использовать сортировку, нажав на необходимую ячейку в оглавлении таблицы. \n\n\nЕсли у вас остались вопросы можете обратиться за помощью написав про вашу проблему на электронную почту FlyFly@gmail.com");
}
private: System::Void MyTicketsLabel_Click(System::Object^ sender, System::EventArgs^ e) {
	if (user->auth)
	{
		MyTicketsForm^ mtfrm = gcnew MyTicketsForm(user);
		mtfrm->Show();
	}
	else
		MessageBox::Show("Для просмотра своих билетов необходимо авторизоваться");
}
private: System::Void listView_ColumnClick(System::Object^ sender, System::Windows::Forms::ColumnClickEventArgs^ e) {
	
	listView->Items->Clear();
	flightsCon->SortByNum();

	for (int i = 0; i < flightsCon->length; i++) {
		Flight^ flight = flightsCon->arr[i];
		if (flight != nullptr) {
			ListViewItem^ newItem = gcnew ListViewItem(flight->flightNumber);
			newItem->SubItems->Add(flight->locationDeparture);
			newItem->SubItems->Add(flight->dateDep);
			newItem->SubItems->Add(flight->locationArrival);
			newItem->SubItems->Add(flight->dateAr);
			newItem->SubItems->Add(flight->airline);
			newItem->SubItems->Add(flight->cost);
			listView->Items->Add(newItem);
		}
	}
}
};
}
