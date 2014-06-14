#pragma once
#include "stdafx.h"
#include "Audiobook.h"
#include <rpc.h>
#pragma comment(lib, "Rpcrt4.lib")
#include "Zarz�dcaOs�b.h"
#include <list>
#include "Tw�rca.h"

void Audiobook::GenerujAudiobook(list<Tw�rca> ListaTw�rc�w)
{
	Tw�rca tmpautor;
	int tmpint;
	system ("CLS");
	UuidCreate (&Id);
	cout << "Dodawanie pozycji Audioksi��ki. Podaj Tytu�:";
	cin.ignore();
	getline(cin,Tytu�);
	do {
		cout << "Obecnie na li�cie jest" << ListaAutor�w.size() << "autor�w.\nWybierz czy chcesz doda� nowego autora, wybra� istniej�cego czy te� wyj��?:\n1.Nowy Autor.\n2.Istniej�cy Autor\n3.Wyj�cie";
		cin >> tmpint;
		if (tmpint == 1) ListaAutor�w.push_back(tmpautor = Zarz�dcaOs�b::DodajTw�rc�(&ListaTw�rc�w));
		if (tmpint == 2) ListaAutor�w.push_back(tmpautor = Zarz�dcaOs�b::WydajTw�rc�(ListaTw�rc�w));	
	} while (tmpint !=3);
	cout << "Dzi�kuj�. Podaj Rok nagrania: ";
	cin >> Rok;
	cout << "Dzi�kuj�. Podaj Rok wydania ksi��ki: ";
	cin >> RokKsi��ki;
	cout << "Dzi�kuj�. Podaj Gatunek: ";
	cin.ignore();
	getline(cin,Gatunek);
	cout << "Dzi�kuj�. Podaj czas s�uchania (minuty): ";
	cin >> Czas;
	cout << "Dzi�kuj�. Podaj ilo�� sztuk na magazynie";
	cin >> Ilo��;
	cout << "Dzi�kuj�. Podaj notk� literacj� odno�nie tej pozycji:";
	cin.ignore();
	getline(cin,Notka);
}

void Audiobook::Przedstaw(void)
{
	cout << "Tytu�: " << Tytu� << " Gatunek: " << Gatunek << " rok: " << Rok << " czas s�uchania(minut): " << Czas;
	cout << " Rok wydania ksi��ki: " << RokKsi��ki << " na magazynie " << Ilo�� << "sztuk.";
}

void Audiobook::Przedstaw(string TmpGatunek)
{
	if (Gatunek == TmpGatunek){
		cout << "Tytu�: " << Tytu� << " Gatunek: " << Gatunek << " rok: " << Rok << " czas s�uchania(minut): " << Czas;
		cout << " Rok wydania ksi��ki: " << RokKsi��ki << " na magazynie " << Ilo�� << "sztuk.";
	}
}

Audiobook::Audiobook(void)
{
}


Audiobook::~Audiobook(void)
{
}
