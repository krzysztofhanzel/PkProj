#pragma once
#include "stdafx.h"
#include "Music.h"
#include <rpc.h>
#pragma comment(lib, "Rpcrt4.lib")
#include "Zarz�dcaOs�b.h"
#include <list>
#include "Tw�rca.h"

void Music::GenerujMusic(list<Tw�rca> ListaTw�rc�w)
{
	Tw�rca tmpwykonawca;
	int tmpint;
	system ("CLS");
	UuidCreate (&Id);
	cout << "Dodawanie p�yty audio. Podaj Tytu�:";
	cin >> Tytu�;
	do {
		cout << "Obecnie na li�cie jest" << ListaAutor�w.size() << "wykonawc�w.\nWybierz czy chcesz doda� nowego, wybra� istniej�cego czy te� wyj��?:\n1.Nowy Wykonawca.\n2.Istniej�cy wykonawca\n3.Wyj�cie";
		cin >> tmpint;
		if (tmpint == 1) ListaAutor�w.push_back(tmpwykonawca = Zarz�dcaOs�b::DodajTw�rc�(ListaTw�rc�w));
		if (tmpint == 2) ListaAutor�w.push_back(tmpwykonawca = Zarz�dcaOs�b::WydajTw�rc�(ListaTw�rc�w));	
	} while (tmpint !=3);
	cout << "Dzi�kuj�. Podaj Rok nagrania: ";
	cin >> Rok;
	cout << "Dzi�kuj�. Podaj Gatunek: ";
	cin >> Gatunek;
	cout << "Dzi�kuj�. Podaj Nazw� albumu: ";
	cin.ignore();
	getline(cin,Album);
	cout << "Dzi�kuj�. Podaj czas s�uchania (minuty): ";
	cin >> Czas;
	cout << "Dzi�kuj�. Podaj ilo�� sztuk na magazynie";
	cin >> Ilo��;
	cout << "Dzi�kuj�. Podaj notk� literacj� odno�nie tej pozycji:";
	cin.ignore();
	getline(cin,Notka);
}

void Music::Przedstaw(void)
{
	cout << "Tytu�: " << Tytu� << " z albumu "<< Album << ". Gatunek: " << Gatunek << " rok: " << Rok << " czas s�uchania(minut): " << Czas;
	cout << " na magazynie " << Ilo�� << "sztuk.";
}

Music::Music(void)
{
}


Music::~Music(void)
{
}
