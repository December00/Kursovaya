#pragma once
using namespace System;
using namespace System::Windows::Forms;
using namespace System::IO;
using namespace System::Collections;

namespace MyClass
{
	public ref class User {
	public:
		String^ login;
		String^ pas;
		bool auth;
		User(String^ login, String^ pas) {
			this->login = login;
			this->pas = pas;
		}
		bool IsEnterValid() {
			if (login != "" && pas != "") {
				if (login[0] != ' ' && pas[0] != ' ') {
					if (!login->Contains(" ") && !pas->Contains(" ")) {
						return true;
					}
					else return false;
				}
				else return false;
			}
			else return false;

		};
		bool Registration() {
			String^ path = "LogPas.txt";
			if (IsEnterValid()) {
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
							return false;
						}
					}
					sr->Close();
				}

				StreamWriter^ sw = gcnew StreamWriter(path, true);
				sw->WriteLine(login + " " + pas);
				sw->Close();
				MessageBox::Show("Пользователь успешно зарегистрирован");
				return true;
			}
			else
			{
				MessageBox::Show("Логин или пароль введен некорректно");
				return false;
			}
		}
		bool Authorization() {

			String^ path = "LogPas.txt";
			if (IsEnterValid()) {
				if (File::Exists(path))
				{
					StreamReader^ sr = gcnew StreamReader(path);
					String^ line;

					while ((line = sr->ReadLine()) != nullptr)
					{
						array<String^>^ arr = line->Split(' ');

						if (arr[0] == login && arr[1] == pas)
						{
							sr->Close();
							return true;
						}
					}
					sr->Close();
				}

				MessageBox::Show("Неверный логин или пароль.");
				return false;
			}
			else
				MessageBox::Show("Логин или пароль введён некорректно");
			return false;
		}
	};
	public ref class Flight {
	public:
		String^ locationDeparture;
		String^ locationArrival;
		String^ dateDep;
		String^ dateAr;
		String^ airline;
		String^ flightNumber;
		String^ cost;
		Flight() {

		}
		Flight(String^ flightNumber, String^ locationDeparture, String^ dateDep, String^ locationArrival, String^ dateAr, String^ airline, String^ cost) {
			this->flightNumber = flightNumber;
			this->locationDeparture = locationDeparture;
			this->dateDep = dateDep;
			this->locationArrival = locationArrival;
			this->dateAr = dateAr;
			this->airline = airline;
			this->cost = cost;

		}
	};
		public ref class FlightsContainer {
		public:
			array<Flight^>^ arr;
			int length;
			FlightsContainer() {
				this->length = 0;
				this->arr = gcnew array<Flight^>(1000);
			}
			void FillContainer(String^ filePath) {
				StreamReader^ reader = gcnew StreamReader(filePath);

				String^ line;
				int index = 0;

				while ((line = reader->ReadLine()) != nullptr) {
					array<String^>^ strArr = line->Split(',');

					Flight^ flight = gcnew Flight(strArr[0], strArr[1], strArr[2], strArr[3], strArr[4], strArr[5], strArr[6]);
					this->arr[index] = flight; // Добавляем рейс в массив
					index++;
				}

				reader->Close();
				this->length = index; // Обновляем длину
			}
			void Found(String^ dep, String^ ar) {
				array<Flight^>^ tempArr = gcnew array<Flight^>(this->arr->Length);
				int index = 0;
				if(dep != "" && ar != "")
				for (int i = 0; i < this->arr->Length; i++) {
					Flight^ flight = arr[i];
					if (flight != nullptr && flight->locationDeparture->ToLower() == dep->ToLower() && flight->locationArrival->ToLower() == ar->ToLower())
					{
						tempArr[index] = flight;
						index++;
					}
				}
				if (dep == "" && ar != "") {
					for (int i = 0; i < this->arr->Length; i++) {
						Flight^ flight = arr[i];
						if (flight != nullptr && flight->locationArrival->ToLower() == ar->ToLower())
						{
							tempArr[index] = flight;
							index++;
						}
					}
				}
				if (dep != "" && ar == "") {
					for (int i = 0; i < this->arr->Length; i++) {
						Flight^ flight = arr[i];
						if (flight != nullptr && flight->locationDeparture->ToLower() == dep->ToLower())
						{
							tempArr[index] = flight;
							index++;
						}
					}
				}
				if (index == 0) MessageBox::Show("Рейс с такими параметрами не найден");
				this->length = index;
				this->arr = tempArr;

			}
			void Add(Flight^ flight, String^ path) {
				StreamReader^ reader = gcnew StreamReader(path);

				String^ line;
				while ((line = reader->ReadLine()) != nullptr) {
					array<String^>^ strArr = line->Split(',');
					if (flight == nullptr || flight->flightNumber == strArr[0])
					{
						MessageBox::Show("Рейс с таким номером уже существует");
						return;
					}
				}
				reader->Close();
				if (flight != nullptr) {
					length++;
					this->arr[length] = flight;
					StreamWriter^ sw = gcnew StreamWriter(path, true);
					sw->WriteLine(flight->flightNumber + "," + flight->locationDeparture + "," + flight->dateDep + "," + flight->locationArrival + "," + flight->dateAr + "," + flight->airline + "," + flight->cost);
					sw->Close();
				}
			}
			void Remove(String^ number, String^ path) {

			}
		};
}