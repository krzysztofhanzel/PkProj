#pragma once
#include "stdafx.h"
#include "Music.h"
#include <rpc.h>
#pragma comment(lib, "Rpcrt4.lib")
#include "Zarz�dcaOs�b.h"
#include <list>
#include "Tw�rca.h"

void Music::GenerujMusic(list<Tw�rca>* Tw�rcy)
{
	list<Tw�rca> ListaTw�rc�w;			ListaTw�rc�w = *Tw�rcy;
	Tw�rca tmpwykonawca;
	int tmpint;
	system ("CLS");
	UuidCreate (&Id);
	cout << "Dodawanie p�yty audio. Podaj Tytu�:";
	cin.ignore();
	getline(cin,Tytu�);
	do {
		cout << "Obecnie na li�cie jest" << ListaAutor�w.size() << "wykonawc�w.\nWybierz czy chcesz doda� nowego, wybra� istniej�cego czy te� wyj��?:\n1.Nowy Wykonawca.\n2.Istniej�cy wykonawca\n3.Wyj�cie";
		cin >> tmpint;
		if (tmpint == 1) ListaAutor�w.push_back(tmpwykonawca = Zarz�dcaOs�b::DodajTw�rc�(&ListaTw�rc�w));
		if (tmpint == 2) {tmpwykonawca = Zarz�dcaOs�b::WydajTw�rc�(ListaTw�rc�w); if (tmpwykonawca.Plec == ' ')  ListaAutor�w.push_back(tmpwykonawca);}
	} while (tmpint !=3);
	cout << "Dzi�kuj�. Podaj Rok nagrania: ";
	cin >> Rok;
	cout << "Dzi�kuj�. Podaj Gatunek: ";
	cin.ignore();
	getline(cin,Gatunek);
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
	*Tw�rcy = ListaTw�rc�w;
}

void Music::Przedstaw(void)
{
	cout << "Tytu�: " << Tytu� << " z albumu "<< Album << ". Gatunek: " << Gatunek << " rok: " << Rok << " czas s�uchania(minut): " << Czas;
	cout << "\nna magazynie " << Ilo�� << " sztuk.";
}

void Music::Przedstaw(string TmpGatunek)
{
	if (Gatunek == TmpGatunek){
		cout << "Tytu�: " << Tytu� << " z albumu "<< Album << " rok: " << Rok << " czas s�uchania(minut): " << Czas;
		cout << " na magazynie " << Ilo�� << "sztuk.";
	}
}

Music::Music(void)
{
}


Music::~Music(void)
{
}
