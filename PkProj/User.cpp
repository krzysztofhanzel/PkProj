#include "stdafx.h"
#include "User.h"
#include <list>
#include <cstdio>
#include <rpc.h>

void User::GenerujUsera(void)
{
	system ("CLS");
	UuidCreate (&Id);
	UuidCreate(&NumerKarty);
	cout << "Generator U�ytkownik�w. \nPodaj Imi�: ";
	cin >> Imie;
	cout << "Dzi�kuj�. Podaj nazwisko Nazwisko: ";
	cin >> Nazwisko;
	cout << "Dzi�kuj�. Podaj Dzie� Urodzenia: ";
	cin >> DataUrodzenia.Dzien;
	cout << "Dzi�kuj�. Podaj Miesi�c Urodzenia: ";
	cin >> DataUrodzenia.Miesiac;
	cout << "Dzi�kuj�. Podaj Rok Urodzenia: ";
	cin >> DataUrodzenia.Rok;
	cout << "Dzi�kuj�. Podaj P�e�: [M/K] ";
	char tmp;
	cin >> tmp;
	if (tmp == 'M' || tmp == 'm') Plec = M;
	else if (tmp == 'K' || tmp == 'k') Plec = K;
	Wypo�yczenia.clear();
}

void User::Przedstaw(void)
{
	cout << Imie << ' ' << Nazwisko << " Numer karty: " << NumerKarty.Data1 << "." << NumerKarty.Data2 << "." << NumerKarty.Data3 << "." << NumerKarty.Data4 << "\n";
}

User::User(void)
{
}


User::~User(void)
{
}
