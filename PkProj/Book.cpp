#include "stdafx.h"
#include "Book.h"
#include <rpc.h>
#pragma comment(lib, "Rpcrt4.lib")

using namespace std;

void Book::GenerujKsi��k�()
{
	system ("CLS");
	UuidCreate (&Id);
	cout << "Dodawanie pozycji ksi��kowej. Podaj Tytu�:";
	cin >> Tytu�;
	cout << "Dzi�kuj�. Podaj Rok wydania: ";
	cin >> Rok;
	cout << "Dzi�kuj�. Podaj Gatunek: ";
	cin >> Gatunek;
	cou
	
}

void Book::Przedstaw()
{
	cout << "Tytu�: " << Tytu� << " Gatunek: " << Gatunek << " rok: " << Rok << " Stron: " << Stron << " na magazynie " << Ilo�� << "sztuk.";
}

Book::Book(void)
{
}


Book::~Book(void)
{
}
