#pragma once
#include "stdafx.h"
#include "Music.h"
#include <rpc.h>
#pragma comment(lib, "Rpcrt4.lib")
#include "Zarz¹dcaOsób.h"
#include <list>
#include "Twórca.h"

void Music::GenerujMusic(list<Twórca> ListaTwórców)
{
	Twórca tmpwykonawca;
	int tmpint;
	system ("CLS");
	UuidCreate (&Id);
	cout << "Dodawanie p³yty audio. Podaj Tytu³:";
	cin >> Tytu³;
	do {
		cout << "Obecnie na liœcie jest" << ListaAutorów.size() << "wykonawców.\nWybierz czy chcesz dodaæ nowego, wybraæ istniej¹cego czy te¿ wyjœæ?:\n1.Nowy Wykonawca.\n2.Istniej¹cy wykonawca\n3.Wyjœcie";
		cin >> tmpint;
		if (tmpint == 1) ListaAutorów.push_back(tmpwykonawca = Zarz¹dcaOsób::DodajTwórcê(ListaTwórców));
		if (tmpint == 2) ListaAutorów.push_back(tmpwykonawca = Zarz¹dcaOsób::WydajTwórcê(ListaTwórców));	
	} while (tmpint !=3);
	cout << "Dziêkujê. Podaj Rok nagrania: ";
	cin >> Rok;
	cout << "Dziêkujê. Podaj Gatunek: ";
	cin >> Gatunek;
	cout << "Dziêkujê. Podaj Nazwê albumu: ";
	cin.ignore();
	getline(cin,Album);
	cout << "Dziêkujê. Podaj czas s³uchania (minuty): ";
	cin >> Czas;
	cout << "Dziêkujê. Podaj iloœæ sztuk na magazynie";
	cin >> Iloœæ;
	cout << "Dziêkujê. Podaj notkê literacj¹ odnoœnie tej pozycji:";
	cin.ignore();
	getline(cin,Notka);
}

void Music::Przedstaw(void)
{
	cout << "Tytu³: " << Tytu³ << " z albumu "<< Album << ". Gatunek: " << Gatunek << " rok: " << Rok << " czas s³uchania(minut): " << Czas;
	cout << " na magazynie " << Iloœæ << "sztuk.";
}

Music::Music(void)
{
}


Music::~Music(void)
{
}
