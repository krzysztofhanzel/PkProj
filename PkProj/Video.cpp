#pragma once
#include "stdafx.h"
#include "Video.h"
#include <rpc.h>
#pragma comment(lib, "Rpcrt4.lib")
#include "Zarz�dcaOs�b.h"
#include <list>
#include "Tw�rca.h"

void Video::GenerujVideo(list<Tw�rca> ListaTw�rc�w)
{
	Tw�rca tmpaktor;
	int tmpint;
	system ("CLS");
	UuidCreate (&Id);
	cout << "Dodawanie filmu Video. Podaj Tytu�:";
	cin.ignore();
	getline(cin,Tytu�);
	do {
		cout << "Obecnie na li�cie jest" << ListaAutor�w.size() << "aktor�w.\nWybierz czy chcesz doda� nowego, wybra� istniej�cego czy te� wyj��?:\n1.Nowy Aktor.\n2.Istniej�cy Aktor\n3.Wyj�cie";
		cin >> tmpint;
		if (tmpint == 1) ListaAutor�w.push_back(tmpaktor = Zarz�dcaOs�b::DodajTw�rc�(ListaTw�rc�w));
		if (tmpint == 2) ListaAutor�w.push_back(tmpaktor= Zarz�dcaOs�b::WydajTw�rc�(ListaTw�rc�w));	
	} while (tmpint !=3);
	cout << "Dzi�kuj�. Podaj Wersj� j�zykow�:";
	cin.ignore();
	getline(cin,WersjaJ�zykowa);
	cout << "Dzi�kuj�. Podaj Rok premiery: ";
	cin >> Rok;
	cout << "Dzi�kuj�. Podaj Gatunek: ";
	cin >> Gatunek;
	cout << "Dzi�kuj�. Podaj czas trwania(minuty): ";
	cin >> Czas;
	cout << "Dzi�kuj�. Podaj ilo�� sztuk na magazynie";
	cin >> Ilo��;
	cout << "Dzi�kuj�. Podaj notk� literacj� odno�nie tej pozycji:";
	cin.ignore();
	getline(cin,Notka);
}

void Video::Przedstaw(void)
{
	cout << "Tytu�: " << Tytu� << " j�zyk "<< WersjaJ�zykowa << ". Gatunek: " << Gatunek << " rok: " << Rok << " d�ugo�� (minut): " << Czas;
	cout << " na magazynie " << Ilo�� << "sztuk.";
}

Video::Video(void)
{
}


Video::~Video(void)
{
}
