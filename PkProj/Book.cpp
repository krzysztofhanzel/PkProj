#include "stdafx.h"
#include "Book.h"
#include <rpc.h>
#pragma comment(lib, "Rpcrt4.lib")
#include "Zarz�dcaOs�b.h"
#include <list>
#include "Tw�rca.h"

using namespace std;

void Book::GenerujKsi��k�(list<Tw�rca> ListaTw�rc�w)
{
	Tw�rca tmpautor;
	int tmpint;
	system ("CLS");
	UuidCreate (&Id);
	cout << "Dodawanie pozycji ksi��kowej. Podaj Tytu�:";
	cin.ignore();
	getline(cin,Tytu�);
	do {
		cout << "Obecnie na li�cie jest" << ListaAutor�w.size() << "autor�w.\nWybierz czy chcesz doda� nowego autora, wybra� istniej�cego czy te� wyj��?:\n1.Nowy Autor.\n2.Istniej�cy Autor\n3.Wyj�cie";
		cin >> tmpint;
		if (tmpint == 1) ListaAutor�w.push_back(tmpautor = Zarz�dcaOs�b::DodajTw�rc�(&ListaTw�rc�w));
		if (tmpint == 2) {tmpautor = Zarz�dcaOs�b::WydajTw�rc�(ListaTw�rc�w); if (tmpautor.Plec == ' ')  ListaAutor�w.push_back(tmpautor);}
	} while (tmpint !=3);
	cout << "Dzi�kuj�. Podaj Rok wydania: ";
	cin >> Rok;
	cout << "Dzi�kuj�. Podaj Gatunek: ";
	cin.ignore();
	getline(cin,Gatunek);
	cout << "Dzi�kuj�. Podaj Ilo�� stron publikacji: ";
	cin >> Stron;
	cout << "Dzi�kuj�. Podaj ilo�� sztuk na magazynie";
	cin >> Ilo��;
	cout << "Dzi�kuj�. Podaj notk� literacj� odno�nie tej pozycji:";
	cin.ignore();
	getline(cin,Notka);
	
}

void Book::Przedstaw()
{
	cout << "Tytu�: " << Tytu� << " Gatunek: " << Gatunek << " rok: " << Rok << " Stron: " << Stron << " na magazynie " << Ilo�� << "sztuk.";
}

void Book::Przedstaw(string TmpGatunek)
{
	if (Gatunek == TmpGatunek)
		cout << "Tytu�: " << Tytu� << " rok: " << Rok << " Stron: " << Stron << " na magazynie " << Ilo�� << "sztuk.";
}

Book::Book(void)
{
}


Book::~Book(void)
{
}
