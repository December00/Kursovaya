#pragma once

namespace WPA {

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
		MainWindow(void)
		{
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
	private: System::Windows::Forms::DataGridView^ table;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ flightNumber;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ locationDeparture;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dateDep;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ locationArrival;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dateAr;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ airline;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ cost;


	protected:

	private:
		
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		
		void InitializeComponent(void)
		{
			this->TopLabel = (gcnew System::Windows::Forms::Label());
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->table = (gcnew System::Windows::Forms::DataGridView());
			this->flightNumber = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->locationDeparture = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dateDep = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->locationArrival = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dateAr = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->airline = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cost = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table))->BeginInit();
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
			// table
			// 
			this->table->AllowUserToAddRows = false;
			this->table->AllowUserToDeleteRows = false;
			this->table->AllowUserToResizeColumns = false;
			this->table->BackgroundColor = System::Drawing::SystemColors::Control;
			this->table->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->table->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->flightNumber, this->locationDeparture,
					this->dateDep, this->locationArrival, this->dateAr, this->airline, this->cost
			});
			this->table->Location = System::Drawing::Point(10, 190);
			this->table->Name = L"table";
			this->table->ReadOnly = true;
			this->table->RowHeadersWidth = 50;
			this->table->RowTemplate->Height = 24;
			this->table->Size = System::Drawing::Size(1180, 600);
			this->table->TabIndex = 17;
			// 
			// flightNumber
			// 
			this->flightNumber->HeaderText = L"Номер";
			this->flightNumber->MinimumWidth = 6;
			this->flightNumber->Name = L"flightNumber";
			this->flightNumber->ReadOnly = true;
			this->flightNumber->Width = 125;
			// 
			// locationDeparture
			// 
			this->locationDeparture->HeaderText = L"Вылет";
			this->locationDeparture->MinimumWidth = 6;
			this->locationDeparture->Name = L"locationDeparture";
			this->locationDeparture->ReadOnly = true;
			this->locationDeparture->Width = 125;
			// 
			// dateDep
			// 
			this->dateDep->HeaderText = L"Дата вылета";
			this->dateDep->MinimumWidth = 6;
			this->dateDep->Name = L"dateDep";
			this->dateDep->ReadOnly = true;
			this->dateDep->Width = 125;
			// 
			// locationArrival
			// 
			this->locationArrival->HeaderText = L"Прилет";
			this->locationArrival->MinimumWidth = 6;
			this->locationArrival->Name = L"locationArrival";
			this->locationArrival->ReadOnly = true;
			this->locationArrival->Width = 125;
			// 
			// dateAr
			// 
			this->dateAr->HeaderText = L"Дата прилёта";
			this->dateAr->MinimumWidth = 6;
			this->dateAr->Name = L"dateAr";
			this->dateAr->ReadOnly = true;
			this->dateAr->Width = 125;
			// 
			// airline
			// 
			this->airline->HeaderText = L"Авиакомпания";
			this->airline->MinimumWidth = 6;
			this->airline->Name = L"airline";
			this->airline->ReadOnly = true;
			this->airline->Width = 125;
			// 
			// cost
			// 
			this->cost->HeaderText = L"Стоимость";
			this->cost->MinimumWidth = 6;
			this->cost->Name = L"cost";
			this->cost->ReadOnly = true;
			this->cost->Width = 125;
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->ClientSize = System::Drawing::Size(1200, 800);
			this->Controls->Add(this->table);
			this->Controls->Add(this->ExitButton);
			this->Controls->Add(this->TopLabel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MainWindow";
			this->Text = L"MainWindow";
			this->Load += gcnew System::EventHandler(this, &MainWindow::MainWindow_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	Point lastPoint;
	//bool isAuth = (bool)this->Tag;
	private: System::Void ExitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void MainWindow_Load(System::Object^ sender, System::EventArgs^ e) {
		String^ path = "Flights.txt";
		if (!File::Exists(path)) {
			 
			StreamReader^ sr = gcnew StreamReader(path);
			String^ line = sr->ReadLine();
			while ((line = sr->ReadLine()) != nullptr) {
				array<String^>^ arr = line->Split(' ');
				Flight^ flight = gcnew Flight(arr[0], arr[1], arr[2], arr[3], arr[4], arr[5], System::Convert::ToInt32(arr[6]));
				
				
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
};
}
