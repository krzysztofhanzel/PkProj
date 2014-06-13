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
	cout << "Generator U¿ytkowników. \nPodaj Imiê: ";
	cin >> Imie;
	cout << "Dziêkujê. Podaj nazwisko Nazwisko: ";
	cin >> Nazwisko;
	cout << "Dziêkujê. Podaj Dzieñ Urodzenia: ";
	cin >> DataUrodzenia.Dzien;
	cout << "Dziêkujê. Podaj Miesi¹c Urodzenia: ";
	cin >> DataUrodzenia.Miesiac;
	cout << "Dziêkujê. Podaj Rok Urodzenia: ";
	cin >> DataUrodzenia.Rok;
	cout << "Dziêkujê. Podaj P³eæ: [M/K] ";
	char tmp;
	cin >> tmp;
	if (tmp == 'M' || tmp == 'm') Plec = M;
	else if (tmp == 'K' || tmp == 'k') Plec = K;
	Wypo¿yczenia.clear();
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
