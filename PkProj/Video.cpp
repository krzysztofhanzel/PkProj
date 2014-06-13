#pragma once
#include "stdafx.h"
#include "Video.h"
#include <rpc.h>
#pragma comment(lib, "Rpcrt4.lib")
#include "Zarz¹dcaOsób.h"
#include <list>
#include "Twórca.h"

void Video::GenerujVideo(list<Twórca> ListaTwórców)
{
	Twórca tmpaktor;
	int tmpint;
	system ("CLS");
	UuidCreate (&Id);
	cout << "Dodawanie filmu Video. Podaj Tytu³:";
	cin.ignore();
	getline(cin,Tytu³);
	do {
		cout << "Obecnie na liœcie jest" << ListaAutorów.size() << "aktorów.\nWybierz czy chcesz dodaæ nowego, wybraæ istniej¹cego czy te¿ wyjœæ?:\n1.Nowy Aktor.\n2.Istniej¹cy Aktor\n3.Wyjœcie";
		cin >> tmpint;
		if (tmpint == 1) ListaAutorów.push_back(tmpaktor = Zarz¹dcaOsób::DodajTwórcê(ListaTwórców));
		if (tmpint == 2) ListaAutorów.push_back(tmpaktor= Zarz¹dcaOsób::WydajTwórcê(ListaTwórców));	
	} while (tmpint !=3);
	cout << "Dziêkujê. Podaj Wersjê jêzykow¹:";
	cin.ignore();
	getline(cin,WersjaJêzykowa);
	cout << "Dziêkujê. Podaj Rok premiery: ";
	cin >> Rok;
	cout << "Dziêkujê. Podaj Gatunek: ";
	cin >> Gatunek;
	cout << "Dziêkujê. Podaj czas trwania(minuty): ";
	cin >> Czas;
	cout << "Dziêkujê. Podaj iloœæ sztuk na magazynie";
	cin >> Iloœæ;
	cout << "Dziêkujê. Podaj notkê literacj¹ odnoœnie tej pozycji:";
	cin.ignore();
	getline(cin,Notka);
}

void Video::Przedstaw(void)
{
	cout << "Tytu³: " << Tytu³ << " jêzyk "<< WersjaJêzykowa << ". Gatunek: " << Gatunek << " rok: " << Rok << " d³ugoœæ (minut): " << Czas;
	cout << " na magazynie " << Iloœæ << "sztuk.";
}

Video::Video(void)
{
}


Video::~Video(void)
{
}
