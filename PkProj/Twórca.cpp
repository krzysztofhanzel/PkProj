#pragma once
#include "stdafx.h"
#include "Tw�rca.h"
#include <rpc.h>
#pragma comment(lib, "Rpcrt4.lib")
#include <string>
#include <iostream>
#include <conio.h> 


using namespace std;

void Tw�rca::GenerujTw�rca(void)
{
	system ("CLS");
	UuidCreate (&Id);
	cout << "Generator Tw�rcy tre�ci. \nPodaj imi� autora: ";
	cin >> Imie;
	cout << "Dzi�kuj�. Podaj nazwisko autora: ";
	cin >> Nazwisko;
	cout << "Dzi�kuj�. Podaj Dzie� Urodzenia Autora: ";
	cin >> DataUrodzenia.Dzien;
	cout << "Dzi�kuj�. Podaj Miesi�c Urodzenia Autora: ";
	cin >> DataUrodzenia.Miesiac;
	cout << "Dzi�kuj�. Podaj Rok Urodzenia Autora: ";
	cin >> DataUrodzenia.Rok;
	cout << "Dzi�kuj�. Podaj P�e� Autora: [M/K] ";
	char tmp;
	cin >> tmp;
	if (tmp == 'M' || tmp == 'm') Plec = M;
	else if (tmp == 'K' || tmp == 'k') Plec = K;
	cout << " Dzi�kuj�. Wybierz rodzaj autora: \n1. Pisarz\n2. Muzyk\n3. Aktor\n: ";
	int tmpint;
	cin >> tmpint;
	switch (tmpint)
	{
	case 1:
		Typ = Pisarz;
		break;
	case 2:
		Typ = Muzyk;
		break;
	case 3:
		Typ = Aktor;
		break;
	default:
		cout << "Z�y typ"; //rzu� wyj�tkiem.
	}

	cout << "Dzi�kuj�. Podaj kr�tk� notatk� o autorze zako�czon� znakiem enter: ";
	cin.ignore();
	getline(cin,Notka);

}

void Tw�rca::Przedstaw(void) 
{
	switch (Typ)
	{
	case Tw�rca::Pisarz:
		std::cout << "Pisarz";
		break;
	case Tw�rca::Muzyk:
		std::cout << "Muzyk";
		break;
	case Tw�rca::Aktor:
		std::cout << "Aktor";
		break;
	default:
		break;
	}
	cout << " " << Imie << " " <<  Nazwisko << ", urodzony " << DataUrodzenia.Dzien << "." << DataUrodzenia.Miesiac << "." << DataUrodzenia.Rok << ".\n";
}

void Tw�rca::Przedstaw(Tw�rca::typ_tworcy Zadany) 
{
	if (Typ == Zadany) {
		switch (Typ)
		{
		case Tw�rca::Pisarz:
			std::cout << "Pisarz";
			break;
		case Tw�rca::Muzyk:
			std::cout << "Muzyk";
			break;
		case Tw�rca::Aktor:
			std::cout << "Aktor";
			break;
		default:
			break;
		}
		cout << " " << Imie << " " <<  Nazwisko << ", urodzony " << DataUrodzenia.Dzien << "." << DataUrodzenia.Miesiac << "." << DataUrodzenia.Rok << ".\n";
	}
}

Tw�rca::~Tw�rca(void)
{
}
