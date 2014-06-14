#include "stdafx.h"
#include "Book.h"
#include <rpc.h>
#pragma comment(lib, "Rpcrt4.lib")
#include "Zarz¹dcaOsób.h"
#include <list>
#include "Twórca.h"

using namespace std;

void Book::GenerujKsi¹¿kê(list<Twórca> ListaTwórców)
{
	Twórca tmpautor;
	int tmpint;
	system ("CLS");
	UuidCreate (&Id);
	cout << "Dodawanie pozycji ksi¹¿kowej. Podaj Tytu³:";
	cin.ignore();
	getline(cin,Tytu³);
	do {
		cout << "Obecnie na liœcie jest" << ListaAutorów.size() << "autorów.\nWybierz czy chcesz dodaæ nowego autora, wybraæ istniej¹cego czy te¿ wyjœæ?:\n1.Nowy Autor.\n2.Istniej¹cy Autor\n3.Wyjœcie";
		cin >> tmpint;
		if (tmpint == 1) ListaAutorów.push_back(tmpautor = Zarz¹dcaOsób::DodajTwórcê(&ListaTwórców));
		if (tmpint == 2) {tmpautor = Zarz¹dcaOsób::WydajTwórcê(ListaTwórców); if (tmpautor.Plec == ' ')  ListaAutorów.push_back(tmpautor);}
	} while (tmpint !=3);
	cout << "Dziêkujê. Podaj Rok wydania: ";
	cin >> Rok;
	cout << "Dziêkujê. Podaj Gatunek: ";
	cin.ignore();
	getline(cin,Gatunek);
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

void Book::Przedstaw(string TmpGatunek)
{
	if (Gatunek == TmpGatunek)
		cout << "Tytu³: " << Tytu³ << " rok: " << Rok << " Stron: " << Stron << " na magazynie " << Iloœæ << "sztuk.";
}

Book::Book(void)
{
}


Book::~Book(void)
{
}
