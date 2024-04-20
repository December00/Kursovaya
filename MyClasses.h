#pragma once
using namespace System;
using namespace System::Windows::Forms;
using namespace System::IO;

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
				if (!login->Contains(" ") && !pas->Contains(" "))
					return true;
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
		int^ cost;
		Flight(String^ flightNumber, String^ locationDeparture, String^ dateDep, String^ locationArrival, String^ dateAr, String^ airline, int^ cost) {
			this->flightNumber = flightNumber;
			this->locationDeparture = locationDeparture;
			this->dateDep = dateDep;
			this->locationArrival = locationArrival;
			this->dateAr = dateAr;
			this->airline = airline;
			this->cost = cost;

		}
	};
}