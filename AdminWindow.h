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
	/// Сводка для AdminWindow
	/// </summary>
	public ref class AdminWindow : public System::Windows::Forms::Form
	{
	public:
		AdminWindow(void)
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
		~AdminWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ TopLabel;
	private: System::Windows::Forms::Button^ ExitButton;
	private: System::Windows::Forms::TextBox^ DepTextBox;
	private: System::Windows::Forms::TextBox^ ArTextBox;
	private: System::Windows::Forms::Label^ InfoArLabel;
	private: System::Windows::Forms::Label^ InfoDepLabel;
	private: System::Windows::Forms::TextBox^ NumberTextBox;
	private: System::Windows::Forms::Label^ NumberLabel;
	private: System::Windows::Forms::TextBox^ DateDepTextBox;
	private: System::Windows::Forms::TextBox^ DateArTextBox;
	private: System::Windows::Forms::TextBox^ AirlineTextBox;
	private: System::Windows::Forms::TextBox^ CostTextBox;

	private: System::Windows::Forms::Label^ DateDepLabel;
	private: System::Windows::Forms::Label^ DateArLabel;
	private: System::Windows::Forms::Label^ AirlineLabel;
	private: System::Windows::Forms::Label^ CostLabel;
	private: System::Windows::Forms::Button^ ResetButton;
	private: System::Windows::Forms::Button^ SearchButton;
	private: System::Windows::Forms::ListView^ listView;
	private: System::Windows::Forms::ColumnHeader^ Number;
	private: System::Windows::Forms::ColumnHeader^ LocDep;
	private: System::Windows::Forms::ColumnHeader^ DateDep;
	private: System::Windows::Forms::ColumnHeader^ LocAr;
	private: System::Windows::Forms::ColumnHeader^ DateAr;
	private: System::Windows::Forms::ColumnHeader^ Airlane;
	private: System::Windows::Forms::ColumnHeader^ Cost;
	private: System::Windows::Forms::Button^ AddButton;
	private: System::Windows::Forms::Button^ RemoveButton;
	private: System::Windows::Forms::ListView^ ClientsListView;
	private: System::Windows::Forms::Label^ FlightConLabel;
	private: System::Windows::Forms::Label^ ClientsConLabel;







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
			this->DepTextBox = (gcnew System::Windows::Forms::TextBox());
			this->ArTextBox = (gcnew System::Windows::Forms::TextBox());
			this->InfoArLabel = (gcnew System::Windows::Forms::Label());
			this->InfoDepLabel = (gcnew System::Windows::Forms::Label());
			this->NumberTextBox = (gcnew System::Windows::Forms::TextBox());
			this->NumberLabel = (gcnew System::Windows::Forms::Label());
			this->DateDepTextBox = (gcnew System::Windows::Forms::TextBox());
			this->DateArTextBox = (gcnew System::Windows::Forms::TextBox());
			this->AirlineTextBox = (gcnew System::Windows::Forms::TextBox());
			this->CostTextBox = (gcnew System::Windows::Forms::TextBox());
			this->DateDepLabel = (gcnew System::Windows::Forms::Label());
			this->DateArLabel = (gcnew System::Windows::Forms::Label());
			this->AirlineLabel = (gcnew System::Windows::Forms::Label());
			this->CostLabel = (gcnew System::Windows::Forms::Label());
			this->ResetButton = (gcnew System::Windows::Forms::Button());
			this->SearchButton = (gcnew System::Windows::Forms::Button());
			this->listView = (gcnew System::Windows::Forms::ListView());
			this->Number = (gcnew System::Windows::Forms::ColumnHeader());
			this->LocDep = (gcnew System::Windows::Forms::ColumnHeader());
			this->DateDep = (gcnew System::Windows::Forms::ColumnHeader());
			this->LocAr = (gcnew System::Windows::Forms::ColumnHeader());
			this->DateAr = (gcnew System::Windows::Forms::ColumnHeader());
			this->Airlane = (gcnew System::Windows::Forms::ColumnHeader());
			this->Cost = (gcnew System::Windows::Forms::ColumnHeader());
			this->AddButton = (gcnew System::Windows::Forms::Button());
			this->RemoveButton = (gcnew System::Windows::Forms::Button());
			this->ClientsListView = (gcnew System::Windows::Forms::ListView());
			this->FlightConLabel = (gcnew System::Windows::Forms::Label());
			this->ClientsConLabel = (gcnew System::Windows::Forms::Label());
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
			this->TopLabel->TabIndex = 16;
			this->TopLabel->Text = L"Меню администратора";
			this->TopLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->TopLabel->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AdminWindow::TopLabel_MouseDown);
			this->TopLabel->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &AdminWindow::TopLabel_MouseMove);
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
			this->ExitButton->TabIndex = 17;
			this->ExitButton->Text = L"X";
			this->ExitButton->UseVisualStyleBackColor = true;
			this->ExitButton->Click += gcnew System::EventHandler(this, &AdminWindow::ExitButton_Click);
			// 
			// DepTextBox
			// 
			this->DepTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DepTextBox->Location = System::Drawing::Point(40, 170);
			this->DepTextBox->Name = L"DepTextBox";
			this->DepTextBox->Size = System::Drawing::Size(250, 34);
			this->DepTextBox->TabIndex = 19;
			this->DepTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// ArTextBox
			// 
			this->ArTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ArTextBox->Location = System::Drawing::Point(40, 240);
			this->ArTextBox->Name = L"ArTextBox";
			this->ArTextBox->Size = System::Drawing::Size(250, 34);
			this->ArTextBox->TabIndex = 20;
			this->ArTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// InfoArLabel
			// 
			this->InfoArLabel->AutoSize = true;
			this->InfoArLabel->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F));
			this->InfoArLabel->ForeColor = System::Drawing::Color::White;
			this->InfoArLabel->Location = System::Drawing::Point(35, 210);
			this->InfoArLabel->Name = L"InfoArLabel";
			this->InfoArLabel->Size = System::Drawing::Size(170, 28);
			this->InfoArLabel->TabIndex = 26;
			this->InfoArLabel->Text = L"Место прилёта";
			// 
			// InfoDepLabel
			// 
			this->InfoDepLabel->AutoSize = true;
			this->InfoDepLabel->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F));
			this->InfoDepLabel->ForeColor = System::Drawing::Color::White;
			this->InfoDepLabel->Location = System::Drawing::Point(35, 140);
			this->InfoDepLabel->Name = L"InfoDepLabel";
			this->InfoDepLabel->Size = System::Drawing::Size(159, 28);
			this->InfoDepLabel->TabIndex = 27;
			this->InfoDepLabel->Text = L"Место вылета";
			this->InfoDepLabel->Click += gcnew System::EventHandler(this, &AdminWindow::InfoDepLabel_Click);
			// 
			// NumberTextBox
			// 
			this->NumberTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->NumberTextBox->Location = System::Drawing::Point(40, 100);
			this->NumberTextBox->Name = L"NumberTextBox";
			this->NumberTextBox->Size = System::Drawing::Size(250, 34);
			this->NumberTextBox->TabIndex = 28;
			this->NumberTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// NumberLabel
			// 
			this->NumberLabel->AutoSize = true;
			this->NumberLabel->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F));
			this->NumberLabel->ForeColor = System::Drawing::Color::White;
			this->NumberLabel->Location = System::Drawing::Point(35, 70);
			this->NumberLabel->Name = L"NumberLabel";
			this->NumberLabel->Size = System::Drawing::Size(148, 28);
			this->NumberLabel->TabIndex = 29;
			this->NumberLabel->Text = L"Номер рейса";
			// 
			// DateDepTextBox
			// 
			this->DateDepTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DateDepTextBox->Location = System::Drawing::Point(39, 310);
			this->DateDepTextBox->Name = L"DateDepTextBox";
			this->DateDepTextBox->Size = System::Drawing::Size(250, 34);
			this->DateDepTextBox->TabIndex = 30;
			this->DateDepTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->DateDepTextBox->TextChanged += gcnew System::EventHandler(this, &AdminWindow::DateDepTextBox_TextChanged);
			// 
			// DateArTextBox
			// 
			this->DateArTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DateArTextBox->Location = System::Drawing::Point(40, 380);
			this->DateArTextBox->Name = L"DateArTextBox";
			this->DateArTextBox->Size = System::Drawing::Size(250, 34);
			this->DateArTextBox->TabIndex = 31;
			this->DateArTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// AirlineTextBox
			// 
			this->AirlineTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AirlineTextBox->Location = System::Drawing::Point(39, 450);
			this->AirlineTextBox->Name = L"AirlineTextBox";
			this->AirlineTextBox->Size = System::Drawing::Size(250, 34);
			this->AirlineTextBox->TabIndex = 32;
			this->AirlineTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// CostTextBox
			// 
			this->CostTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->CostTextBox->Location = System::Drawing::Point(40, 520);
			this->CostTextBox->Name = L"CostTextBox";
			this->CostTextBox->Size = System::Drawing::Size(250, 34);
			this->CostTextBox->TabIndex = 33;
			this->CostTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// DateDepLabel
			// 
			this->DateDepLabel->AutoSize = true;
			this->DateDepLabel->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F));
			this->DateDepLabel->ForeColor = System::Drawing::Color::White;
			this->DateDepLabel->Location = System::Drawing::Point(35, 280);
			this->DateDepLabel->Name = L"DateDepLabel";
			this->DateDepLabel->Size = System::Drawing::Size(146, 28);
			this->DateDepLabel->TabIndex = 34;
			this->DateDepLabel->Text = L"Дата вылета";
			this->DateDepLabel->Click += gcnew System::EventHandler(this, &AdminWindow::DateDepLabel_Click);
			// 
			// DateArLabel
			// 
			this->DateArLabel->AutoSize = true;
			this->DateArLabel->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F));
			this->DateArLabel->ForeColor = System::Drawing::Color::White;
			this->DateArLabel->Location = System::Drawing::Point(35, 350);
			this->DateArLabel->Name = L"DateArLabel";
			this->DateArLabel->Size = System::Drawing::Size(157, 28);
			this->DateArLabel->TabIndex = 35;
			this->DateArLabel->Text = L"Дата прилёта";
			// 
			// AirlineLabel
			// 
			this->AirlineLabel->AutoSize = true;
			this->AirlineLabel->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F));
			this->AirlineLabel->ForeColor = System::Drawing::Color::White;
			this->AirlineLabel->Location = System::Drawing::Point(34, 420);
			this->AirlineLabel->Name = L"AirlineLabel";
			this->AirlineLabel->Size = System::Drawing::Size(164, 28);
			this->AirlineLabel->TabIndex = 36;
			this->AirlineLabel->Text = L"Авиакомпания";
			// 
			// CostLabel
			// 
			this->CostLabel->AutoSize = true;
			this->CostLabel->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F));
			this->CostLabel->ForeColor = System::Drawing::Color::White;
			this->CostLabel->Location = System::Drawing::Point(35, 490);
			this->CostLabel->Name = L"CostLabel";
			this->CostLabel->Size = System::Drawing::Size(65, 28);
			this->CostLabel->TabIndex = 37;
			this->CostLabel->Text = L"Цена";
			// 
			// ResetButton
			// 
			this->ResetButton->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ResetButton->BackColor = System::Drawing::Color::Gainsboro;
			this->ResetButton->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F));
			this->ResetButton->Location = System::Drawing::Point(39, 730);
			this->ResetButton->Name = L"ResetButton";
			this->ResetButton->Size = System::Drawing::Size(250, 40);
			this->ResetButton->TabIndex = 39;
			this->ResetButton->Text = L"Обновить";
			this->ResetButton->UseVisualStyleBackColor = false;
			this->ResetButton->Click += gcnew System::EventHandler(this, &AdminWindow::ResetButton_Click);
			// 
			// SearchButton
			// 
			this->SearchButton->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->SearchButton->BackColor = System::Drawing::Color::Gainsboro;
			this->SearchButton->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F));
			this->SearchButton->Location = System::Drawing::Point(40, 580);
			this->SearchButton->Name = L"SearchButton";
			this->SearchButton->Size = System::Drawing::Size(250, 40);
			this->SearchButton->TabIndex = 38;
			this->SearchButton->Text = L"Поиск";
			this->SearchButton->UseVisualStyleBackColor = false;
			this->SearchButton->Click += gcnew System::EventHandler(this, &AdminWindow::SearchButton_Click);
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
			this->listView->Location = System::Drawing::Point(320, 98);
			this->listView->Name = L"listView";
			this->listView->Size = System::Drawing::Size(850, 350);
			this->listView->TabIndex = 40;
			this->listView->UseCompatibleStateImageBehavior = false;
			this->listView->View = System::Windows::Forms::View::Details;
			// 
			// Number
			// 
			this->Number->Text = L"Номер рейса";
			this->Number->Width = 80;
			// 
			// LocDep
			// 
			this->LocDep->Text = L"Вылет";
			this->LocDep->Width = 100;
			// 
			// DateDep
			// 
			this->DateDep->Text = L"Дата вылета";
			this->DateDep->Width = 80;
			// 
			// LocAr
			// 
			this->LocAr->Text = L"Прилёт";
			this->LocAr->Width = 100;
			// 
			// DateAr
			// 
			this->DateAr->Text = L"Дата прилёта";
			this->DateAr->Width = 80;
			// 
			// Airlane
			// 
			this->Airlane->Text = L"Авиакомпания";
			this->Airlane->Width = 120;
			// 
			// Cost
			// 
			this->Cost->Text = L"Цена";
			this->Cost->Width = 80;
			// 
			// AddButton
			// 
			this->AddButton->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->AddButton->BackColor = System::Drawing::Color::Gainsboro;
			this->AddButton->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F));
			this->AddButton->Location = System::Drawing::Point(39, 630);
			this->AddButton->Name = L"AddButton";
			this->AddButton->Size = System::Drawing::Size(250, 40);
			this->AddButton->TabIndex = 41;
			this->AddButton->Text = L"Добавить";
			this->AddButton->UseVisualStyleBackColor = false;
			this->AddButton->Click += gcnew System::EventHandler(this, &AdminWindow::AddButton_Click);
			// 
			// RemoveButton
			// 
			this->RemoveButton->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->RemoveButton->BackColor = System::Drawing::Color::Gainsboro;
			this->RemoveButton->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F));
			this->RemoveButton->Location = System::Drawing::Point(40, 680);
			this->RemoveButton->Name = L"RemoveButton";
			this->RemoveButton->Size = System::Drawing::Size(250, 40);
			this->RemoveButton->TabIndex = 42;
			this->RemoveButton->Text = L"Удалить";
			this->RemoveButton->UseVisualStyleBackColor = false;
			// 
			// ClientsListView
			// 
			this->ClientsListView->HideSelection = false;
			this->ClientsListView->Location = System::Drawing::Point(320, 520);
			this->ClientsListView->Name = L"ClientsListView";
			this->ClientsListView->Size = System::Drawing::Size(850, 250);
			this->ClientsListView->TabIndex = 43;
			this->ClientsListView->UseCompatibleStateImageBehavior = false;
			// 
			// FlightConLabel
			// 
			this->FlightConLabel->AutoSize = true;
			this->FlightConLabel->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F));
			this->FlightConLabel->ForeColor = System::Drawing::Color::White;
			this->FlightConLabel->Location = System::Drawing::Point(315, 67);
			this->FlightConLabel->Name = L"FlightConLabel";
			this->FlightConLabel->Size = System::Drawing::Size(166, 28);
			this->FlightConLabel->TabIndex = 44;
			this->FlightConLabel->Text = L"Список рейсов";
			// 
			// ClientsConLabel
			// 
			this->ClientsConLabel->AutoSize = true;
			this->ClientsConLabel->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F));
			this->ClientsConLabel->ForeColor = System::Drawing::Color::White;
			this->ClientsConLabel->Location = System::Drawing::Point(315, 489);
			this->ClientsConLabel->Name = L"ClientsConLabel";
			this->ClientsConLabel->Size = System::Drawing::Size(190, 28);
			this->ClientsConLabel->TabIndex = 45;
			this->ClientsConLabel->Text = L"Список клиентов";
			// 
			// AdminWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->ClientSize = System::Drawing::Size(1200, 800);
			this->Controls->Add(this->ClientsConLabel);
			this->Controls->Add(this->FlightConLabel);
			this->Controls->Add(this->ClientsListView);
			this->Controls->Add(this->RemoveButton);
			this->Controls->Add(this->AddButton);
			this->Controls->Add(this->listView);
			this->Controls->Add(this->ResetButton);
			this->Controls->Add(this->SearchButton);
			this->Controls->Add(this->CostLabel);
			this->Controls->Add(this->AirlineLabel);
			this->Controls->Add(this->DateArLabel);
			this->Controls->Add(this->DateDepLabel);
			this->Controls->Add(this->CostTextBox);
			this->Controls->Add(this->AirlineTextBox);
			this->Controls->Add(this->DateArTextBox);
			this->Controls->Add(this->DateDepTextBox);
			this->Controls->Add(this->NumberLabel);
			this->Controls->Add(this->NumberTextBox);
			this->Controls->Add(this->InfoDepLabel);
			this->Controls->Add(this->InfoArLabel);
			this->Controls->Add(this->ArTextBox);
			this->Controls->Add(this->DepTextBox);
			this->Controls->Add(this->ExitButton);
			this->Controls->Add(this->TopLabel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AdminWindow";
			this->Text = L"AdminWindow";
			this->Load += gcnew System::EventHandler(this, &AdminWindow::AdminWindow_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Point lastPoint;
		FlightsContainer^ flightsCon = gcnew FlightsContainer();
		String^ path = "Flights.txt";
	private: System::Void ExitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void AdminWindow_Load(System::Object^ sender, System::EventArgs^ e) {
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
	
	private: System::Void TopLabel_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		lastPoint = Point(e->X, e->Y);
	}
private: System::Void TopLabel_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (e->Button == System::Windows::Forms::MouseButtons::Left) {
		this->Left += e->X - lastPoint.X;
		this->Top += e->Y - lastPoint.Y;

	}
}
private: System::Void InfoDepLabel_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void DateDepLabel_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void DateDepTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ResetButton_Click(System::Object^ sender, System::EventArgs^ e) {
	listView->Items->Clear();
	flightsCon->FillContainer(path);

	{
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
}
private: System::Void AddButton_Click(System::Object^ sender, System::EventArgs^ e) {
	Flight^ flight = gcnew Flight();
	flight->flightNumber = NumberTextBox->Text;
	flight->locationDeparture = DepTextBox->Text;
	flight->dateDep = DateDepTextBox->Text;
	flight->locationArrival = ArTextBox->Text;
	flight->dateAr = DateArTextBox->Text;
	flight->airline = AirlineTextBox->Text;
	flight->cost = CostTextBox->Text;
	flightsCon->Add(flight, path);

}
private: System::Void SearchButton_Click(System::Object^ sender, System::EventArgs^ e) {
	listView->Items->Clear();
	flightsCon->FillContainer(path);
	String^ dep = DepTextBox->Text;
	String^ ar = ArTextBox->Text;
	if (dep != "" || ar != "")
		flightsCon->Found(dep, ar);
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
