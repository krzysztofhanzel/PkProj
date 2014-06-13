#include "stdafx.h"
#include "Book.h"
#include <rpc.h>
#pragma comment(lib, "Rpcrt4.lib")

using namespace std;

void Book::GenerujKsi¹¿kê()
{
	system ("CLS");
	UuidCreate (&Id);
	cout << "Dodawanie pozycji ksi¹¿kowej. Podaj Tytu³:";
	cin >> Tytu³;
	cout << "Dziêkujê. Podaj Rok wydania: ";
	cin >> Rok;
	cout << "Dziêkujê. Podaj Gatunek: ";
	cin >> Gatunek;
	cout << "Dziêkujê. Podaj Iloœæ stron publikacji: ";
	cin >> Stron;
	cout << "Dziêkujê. Podaj iloœæ sztuk na magazynie";
	cin >> Iloœæ;
	cout << "Dziêkujê. Podaj notkê literacj¹ odnoœnie tej pozycji:";
	cin.ignore();
	getline(cin,Notka);
	
}

void Book::Przedstaw()
{
	cout << "Tytu³: " << Tytu³ << " Gatunek: " << Gatunek << " rok: " << Rok << " Stron: " << Stron << " na magazynie " << Iloœæ << "sztuk.";
}

Book::Book(void)
{
}


Book::~Book(void)
{
}
