#pragma once
using namespace System;
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
				if (!(login->Contains(" ") || pas->Contains(" ")))
					return true;
			}
			else return false;

		};

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
	};
}