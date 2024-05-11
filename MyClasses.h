#pragma once
using namespace System;
using namespace System::Windows::Forms;
using namespace System::IO;
using namespace System::Collections;

using namespace System::Security::Cryptography;
using namespace System::Text;


namespace MyClass
{
	public ref class User {
	public:
		String^ login;
		String^ pas;
		bool auth;
		User() {
			this->auth = false;
		}
		User(String^ login, String^ pas) {
			this->login = login;
			this->pas = pas;
			this->auth = false;
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
		void Registration() {
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
							return;
						}
					}
					sr->Close();
				}
				pas = encryption();
				StreamWriter^ sw = gcnew StreamWriter(path, true);
				sw->WriteLine(login + " " + pas);
				sw->Close();
				MessageBox::Show("Пользователь успешно зарегистрирован");
			}
			else
			{
				MessageBox::Show("Логин или пароль введен некорректно");
			}
		}
		bool Authorization() {

			String^ path = "LogPas.txt";
			if (IsEnterValid()) {
				pas = encryption();
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
		String^ encryption() {
			array<Byte>^ hashBytes;
			SHA256Managed^ sha256 = gcnew SHA256Managed();
			hashBytes = sha256->ComputeHash(Encoding::UTF8->GetBytes(pas));
			return BitConverter::ToString(hashBytes)->Replace("-", "");
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
		bool isFullEnterValid()
		{
			if (locationDeparture != "" && locationArrival != "" && dateDep != "" && dateAr != "" && airline != "" && cost != "" && flightNumber != "") {
				if (locationDeparture[0] != ' ' && locationArrival[0] != ' ' && dateDep[0] != ' ' && dateAr[0] != ' ' && airline[0] != ' ' && cost[0] != ' ' && flightNumber[0] != ' ') {
					if (!dateAr->Contains(" ") && !dateDep->Contains(" ") && !flightNumber->Contains(" ") && !cost->Contains(" ")) {
						return true;
					}
					else return false;
				}
				else return false;
			}
			else return false;

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
				this->arr[index] = flight; 
				index++;
			}

			reader->Close();
			this->length = index; 
		}
		void Search(String^ dep, String^ ar) {
			array<Flight^>^ tempArr = gcnew array<Flight^>(this->arr->Length);
			int index = 0;
			if (dep != "" && ar != "")
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
		
		void SearchByNum(String^ num) {
			array<Flight^>^ tempArr = gcnew array<Flight^>(this->arr->Length);
			int index = 0;
			if (num != "") {
				for (int i = 0; i < this->arr->Length; i++) {
					Flight^ flight = arr[i];
					if (flight != nullptr && flight->flightNumber->ToLower() == num->ToLower())
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
		void BinarySearch(String^ flightNumber) {
			int left = 0;
			int right = length - 1;
			array<Flight^>^ tempArr = gcnew array<Flight^>(this->arr->Length);
			int index = 0;
			while (left <= right) {
				int mid = left + (right - left) / 2;

				if (arr[mid]->flightNumber->CompareTo(flightNumber) == 0) {
					tempArr[index] = arr[mid];
					index++;
				}

				if (arr[mid]->flightNumber->CompareTo(flightNumber) > 0) {
					right = mid - 1;
				}
				else {
					left = mid + 1;
				}
			}
			if (index == 0) {
				MessageBox::Show("Рейс с такими параметрами не найден");
			}
			this->length = index;
			this->arr = tempArr;
		}
		void Add(Flight^ flight, String^ path) {
			if (File::Exists(path)) {
				if (flight->isFullEnterValid()) {
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
				else MessageBox::Show("Поле или поля заполнены некорректно");
			}
			else
				MessageBox::Show("Ошибка открытия файла");
		}
		void Remove(String^ number) {
			String^ tempFilePath = "temp.txt";
			StreamWriter^ sw = gcnew StreamWriter(tempFilePath);
			StreamReader^ sr = gcnew StreamReader("flights.txt");

			String^ line;
			while ((line = sr->ReadLine()) != nullptr)
			{
				array<String^>^ strArr = line->Split(',');
				if (strArr[0] != number) {
					sw->WriteLine(line);
				}
			}
			sr->Close();
			sw->Close();
			File::Delete("flights.txt");
			File::Move(tempFilePath, "flights.txt");
			FillContainer("flights.txt");
		}
		void Swap(int index1, int index2) {
			Flight^ temp = arr[index1];
			arr[index1] = arr[index2];
			arr[index2] = temp;
		}
		void SortByNum() {
			if (length < 10)
			{
				ShakerSortByNum();
			}
			else 
				if (length < 50)
					SelectionSortByNum();
				else
					QuickSortByNum(0, length);
		}
		void QuickSortByNum(int low, int high) {
			if (low < high) {
				int pivotIndex = PartitionByNum(low, high);
				QuickSortByNum(low, pivotIndex - 1);
				QuickSortByNum(pivotIndex + 1, high);
			}
		}

		int PartitionByNum(int low, int high) {
			Flight^ pivot = arr[high];
			int i = low - 1;
			
			for (int j = low; j < high; j++) {
				if(pivot!=nullptr && arr[j] != nullptr)
				if (arr[j]->flightNumber->CompareTo(pivot->flightNumber) <= 0) {
					i++;
					Swap(i, j);
				}
			}

			Swap(i + 1, high);
			return i + 1;
		}

		void SelectionSortByNum() {
			for (int i = 0; i < length - 1; i++) {
				int minIndex = i;

				for (int j = i + 1; j < length; j++) {
					if (arr[j]->flightNumber->CompareTo(arr[minIndex]->flightNumber) < 0) {
						minIndex = j;
					}
				}

				Swap(i, minIndex);
			}
		}

		void ShakerSortByNum() {
			int left = 0;
			int right = length - 1;

			while (left <= right) {
				for (int i = right; i > left; --i) {
					if (arr[i - 1]->flightNumber->CompareTo(arr[i]->flightNumber) > 0) {
						Swap(i - 1, i);
					}
				}
				++left;

				for (int i = left; i < right; ++i) {
					if (arr[i]->flightNumber->CompareTo(arr[i + 1]->flightNumber) > 0) {
						Swap(i, i + 1);
					}
				}
				--right;
			}
		}
		
	};

	public ref class Client {
	public:
		String^ login;
		String^ name;
		String^ flightNumber;
		String^ card;
		String^ status;
		String^ passport;
		String^ amount;
		String^ cost;
		Client(String^ login, String^ name,  String^ amount, String^ flightNumber, String^ cost, String^ card, String^ passport, String^ status) {
			this->login = login;
			this->name = name;
			this->flightNumber = flightNumber;
			this->card = card;
			this->status = status;
			this->passport = passport;
			this->amount = amount;
			this->cost = cost;
		}

		Client(String^ login) {
			this->login = login;
		}
		Client()
		{

		}
	};
	public ref class ClientsContainer {
	public:
		array<Client^>^ arr;
		int length;
		ClientsContainer() {
			this->length = 0;
			this->arr = gcnew array<Client^>(1000);
		}
		void Add(Client^ client,String^ path) {
			StreamReader^ reader = gcnew StreamReader(path);

			String^ line;
			while ((line = reader->ReadLine()) != nullptr) {
				array<String^>^ strArr = line->Split(',');

				if (client == nullptr || client->flightNumber == strArr[3])
					{
					MessageBox::Show("Вы уже купили билет на этот рейс");
					return;
					}
					
			}
			reader->Close();
			if (client != nullptr) {
				StreamWriter^ sw = gcnew StreamWriter(path, true);
				client->cost = Convert::ToString(Convert::ToInt32(client->cost) * Convert::ToInt32(client->amount));
				sw->WriteLine(client->login + "," + client->name + "," + client->amount + "," + client->flightNumber + "," + client->cost + "," + client->card + "," + client->passport + "," + client->status);
				sw->Close();
				MessageBox::Show("Заказ оформлен");
			}

		}
		void FillContainer(String^ filePath) {
			StreamReader^ reader = gcnew StreamReader(filePath);

			String^ line;
			int index = 0;

			while ((line = reader->ReadLine()) != nullptr) {
				array<String^>^ strArr = line->Split(',');

				Client^ client = gcnew Client(strArr[0], strArr[1], strArr[2], strArr[3], strArr[4], strArr[5], strArr[6], strArr[7]);
				this->arr[index] = client;
				index++;
			}

			reader->Close();
			this->length = index;
		}
		void Search(String^ login) {
			array<Client^>^ tempArr = gcnew array<Client^>(this->arr->Length);
			int index = 0;
			for (int i = 0; i < this->arr->Length; i++) {
				Client^ client = arr[i];
				if (client != nullptr && client->login == login)
				{
					tempArr[index] = client;
					index++;
				}
			}
			this->length = index;
			this->arr = tempArr;

		}
		void Search(String^ login, String^ num) {
			array<Client^>^ tempArr = gcnew array<Client^>(this->arr->Length);
			int index = 0;
			for (int i = 0; i < this->arr->Length; i++) {
				Client^ client = arr[i];
				if (client != nullptr && client->login == login && client->flightNumber == num)
				{
					tempArr[index] = client;
					index++;
				}
			}
			this->length = index;
			this->arr = tempArr;

		}
		void Remove(Client^ client) {
			String^ tempFilePath = "temp.txt";
			StreamWriter^ sw = gcnew StreamWriter(tempFilePath);
			StreamReader^ sr = gcnew StreamReader("Clients.txt");

			String^ line;
			while ((line = sr->ReadLine()) != nullptr)
			{
				array<String^>^ strArr = line->Split(',');
				if (strArr[3] != client->flightNumber) {
					sw->WriteLine(line);
				}
			}
			sr->Close();
			sw->Close();
			File::Delete("Clients.txt");
			File::Move(tempFilePath, "Clients.txt");
			FillContainer("Clients.txt");
		}
		void Swap(int index1, int index2) {
			Client^ temp = arr[index1];
			arr[index1] = arr[index2];
			arr[index2] = temp;
		}
		void SortByLog() {
			if (length < 10)
			{
				ShakerSortByLog();
			}
			else
				if (length < 50)
					SelectionSortByLog();
				else
					QuickSortByLog(0, length);
		}
		void QuickSortByLog(int low, int high) {
			if (low < high) {
				int pivotIndex = PartitionByLog(low, high);
				QuickSortByLog(low, pivotIndex - 1);
				QuickSortByLog(pivotIndex + 1, high);
			}
		}

		int PartitionByLog(int low, int high) {
			Client^ pivot = arr[high];
			int i = low - 1;

			for (int j = low; j < high; j++) {
				if (pivot != nullptr && arr[j] != nullptr)
					if (arr[j]->login->CompareTo(pivot->login) <= 0) {
						i++;
						Swap(i, j);
					}
			}

			Swap(i + 1, high);
			return i + 1;
		}

		void SelectionSortByLog() {
			for (int i = 0; i < length - 1; i++) {
				int minIndex = i;

				for (int j = i + 1; j < length; j++) {
					if (arr[j]->login->CompareTo(arr[minIndex]->login) < 0) {
						minIndex = j;
					}
				}

				Swap(i, minIndex);
			}
		}

		void ShakerSortByLog() {
			int left = 0;
			int right = length - 1;

			while (left <= right) {
				for (int i = right; i > left; --i) {
					if (arr[i - 1]->login->CompareTo(arr[i]->login) > 0) {
						Swap(i - 1, i);
					}
				}
				++left;

				for (int i = left; i < right; ++i) {
					if (arr[i]->login->CompareTo(arr[i + 1]->login) > 0) {
						Swap(i, i + 1);
					}
				}
				--right;
			}
		}
	};
}