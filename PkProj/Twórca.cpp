#pragma once
#include "stdafx.h"
#include "Twórca.h"
#include <rpc.h>
#pragma comment(lib, "Rpcrt4.lib")
#include <string>
#include <iostream>
#include <conio.h> 


using namespace std;

void Twórca::GenerujTwórca(void)
{
	system ("CLS");
	UuidCreate (&Id);
	cout << "Generator Twórcy treœci. \nPodaj imiê autora: ";
	cin >> Imie;
	cout << "Dziêkujê. Podaj nazwisko autora: ";
	cin >> Nazwisko;
	cout << "Dziêkujê. Podaj Dzieñ Urodzenia Autora: ";
	cin >> DataUrodzenia.Dzien;
	cout << "Dziêkujê. Podaj Miesi¹c Urodzenia Autora: ";
	cin >> DataUrodzenia.Miesiac;
	cout << "Dziêkujê. Podaj Rok Urodzenia Autora: ";
	cin >> DataUrodzenia.Rok;
	cout << "Dziêkujê. Podaj P³eæ Autora: [M/K] ";
	char tmp;
	cin >> tmp;
	if (tmp == 'M' || tmp == 'm') Plec = M;
	else if (tmp == 'K' || tmp == 'k') Plec = K;
	cout << " Dziêkujê. Wybierz rodzaj autora: \n1. Pisarz\n2. Muzyk\n3. Aktor\n: ";
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
		cout << "Z³y typ"; //rzuæ wyj¹tkiem.
	}

	cout << "Dziêkujê. Podaj krótk¹ notatkê o autorze zakoñczon¹ znakiem enter: ";
	cin.ignore();
	getline(cin,Notka);

}

void Twórca::Przedstaw(void) 
{
	switch (Typ)
	{
	case Twórca::Pisarz:
		std::cout << "Pisarz";
		break;
	case Twórca::Muzyk:
		std::cout << "Muzyk";
		break;
	case Twórca::Aktor:
		std::cout << "Aktor";
		break;
	default:
		break;
	}
	cout << " " << Imie << " " <<  Nazwisko << ", urodzony " << DataUrodzenia.Dzien << "." << DataUrodzenia.Miesiac << "." << DataUrodzenia.Rok << ".\n";
}

void Twórca::Przedstaw(Twórca::typ_tworcy Zadany) 
{
	if (Typ == Zadany) {
		switch (Typ)
		{
		case Twórca::Pisarz:
			std::cout << "Pisarz";
			break;
		case Twórca::Muzyk:
			std::cout << "Muzyk";
			break;
		case Twórca::Aktor:
			std::cout << "Aktor";
			break;
		default:
			break;
		}
		cout << " " << Imie << " " <<  Nazwisko << ", urodzony " << DataUrodzenia.Dzien << "." << DataUrodzenia.Miesiac << "." << DataUrodzenia.Rok << ".\n";
	}
}

Twórca::~Twórca(void)
{
}
