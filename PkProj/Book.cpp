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
	cou
	
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
