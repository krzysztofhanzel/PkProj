#pragma once
#include "stdafx.h"
#include "Audiobook.h"
#include <rpc.h>
#pragma comment(lib, "Rpcrt4.lib")
#include "Zarz¹dcaOsób.h"
#include <list>
#include "Twórca.h"

void Audiobook::GenerujAudiobook(list<Twórca> ListaTwórców)
{
	Twórca tmpautor;
	int tmpint;
	system ("CLS");
	UuidCreate (&Id);
	cout << "Dodawanie pozycji Audioksi¹¿ki. Podaj Tytu³:";
	cin.ignore();
	getline(cin,Tytu³);
	do {
		cout << "Obecnie na liœcie jest" << ListaAutorów.size() << "autorów.\nWybierz czy chcesz dodaæ nowego autora, wybraæ istniej¹cego czy te¿ wyjœæ?:\n1.Nowy Autor.\n2.Istniej¹cy Autor\n3.Wyjœcie";
		cin >> tmpint;
		if (tmpint == 1) ListaAutorów.push_back(tmpautor = Zarz¹dcaOsób::DodajTwórcê(&ListaTwórców));
		if (tmpint == 2) ListaAutorów.push_back(tmpautor = Zarz¹dcaOsób::WydajTwórcê(ListaTwórców));	
	} while (tmpint !=3);
	cout << "Dziêkujê. Podaj Rok nagrania: ";
	cin >> Rok;
	cout << "Dziêkujê. Podaj Rok wydania ksi¹¿ki: ";
	cin >> RokKsi¹¿ki;
	cout << "Dziêkujê. Podaj Gatunek: ";
	cin.ignore();
	getline(cin,Gatunek);
	cout << "Dziêkujê. Podaj czas s³uchania (minuty): ";
	cin >> Czas;
	cout << "Dziêkujê. Podaj iloœæ sztuk na magazynie";
	cin >> Iloœæ;
	cout << "Dziêkujê. Podaj notkê literacj¹ odnoœnie tej pozycji:";
	cin.ignore();
	getline(cin,Notka);
}

void Audiobook::Przedstaw(void)
{
	cout << "Tytu³: " << Tytu³ << " Gatunek: " << Gatunek << " rok: " << Rok << " czas s³uchania(minut): " << Czas;
	cout << " Rok wydania ksi¹¿ki: " << RokKsi¹¿ki << " na magazynie " << Iloœæ << "sztuk.";
}

void Audiobook::Przedstaw(string TmpGatunek)
{
	if (Gatunek == TmpGatunek){
		cout << "Tytu³: " << Tytu³ << " Gatunek: " << Gatunek << " rok: " << Rok << " czas s³uchania(minut): " << Czas;
		cout << " Rok wydania ksi¹¿ki: " << RokKsi¹¿ki << " na magazynie " << Iloœæ << "sztuk.";
	}
}

Audiobook::Audiobook(void)
{
}


Audiobook::~Audiobook(void)
{
}
