#pragma once

#include "stdafx.h"
#include "Zarz�dcaOs�b.h"
#include "Tw�rca.h"
using namespace std;
#include <list>
#include <iostream>
#include <cstdlib>
#include <string>
Zarz�dcaOs�b::Zarz�dcaOs�b(void)
{
	
}

void Zarz�dcaOs�b::MenuTw�rc�w(list<Tw�rca>* Tw�rcy)
{
	list<Tw�rca> ListaTw�rc�w;
	ListaTw�rc�w = *Tw�rcy;
	Tw�rca tmp; 
	string TmpImie, TmpNazwisko;
	int switch_on;
	do {
		system ("CLS");
			cout << "Wybierz opcje menu Tw�rc�w: \n";
			cout << "1.Dodaj Tw�rc�\n";
			cout << "2.Przegl�daj list� wszystkich\n";
			cout << "3.Przegl�daj list� tematycznie\n";
			cout << "4.Zast�p poszczeg�lne wyst�pienia\n";
			cout << "5.Kasuj ca�� list�\n";
			cout << "6.Kasuj wybrany element listy\n";
			cout << "9.Wyj�cie\n";
		cin >> switch_on;
		switch (switch_on)
		{
		case 1:
			tmp.GenerujTw�rca();
			ListaTw�rc�w.push_back(tmp);
			break;
		case 2:
			system ("CLS");
			for( list<Tw�rca>::iterator iter=ListaTw�rc�w.begin(); iter != ListaTw�rc�w.end(); iter++)
			{
				tmp = *iter;
				tmp.Przedstaw();
			}
			std::system ("pause");
			break;
		case 3:
			system ("CLS");
			int tmpint; Tw�rca::typ_tworcy tmptyp;
				cout << "\n Wybierz rodzaj autora: \n1. Pisarz\n2. Muzyk\n3. Aktor\n";
				cin >> tmpint;
				if (tmpint == 1) tmptyp = Tw�rca::typ_tworcy::Pisarz;
			if (tmpint == 2) tmptyp = Tw�rca::typ_tworcy::Muzyk;
			if (tmpint == 3) tmptyp = Tw�rca::typ_tworcy::Aktor;

			for( list<Tw�rca>::iterator iter=ListaTw�rc�w.begin(); iter != ListaTw�rc�w.end(); iter++)
			{
				tmp = *iter;
				tmp.Przedstaw(tmptyp);
			}
			std::system ("pause");
			break;
		case 4:
			system ("CLS");
			cout << "Podaj szukane imi�:";
			cin >> TmpImie;
			cout << "Podaj szukane nazwisko:";
			cin >> TmpNazwisko;
			for( list<Tw�rca>::iterator iter=ListaTw�rc�w.begin(); iter != ListaTw�rc�w.end(); iter++) {
				tmp = *iter;
				if (tmp.Imie == TmpImie && tmp.Nazwisko == TmpNazwisko) {
					cout << "Obecny rekord to:\n";
					tmp.Przedstaw();
					cout << "Zmieni�? [T/N]";
					char tmpChar;
					cin >> tmpChar;
					if (tmpChar == 'T' || tmpChar == 't') {
						tmp.GenerujTw�rca();
						*iter = tmp;
					}
				}
			}
			break;
		case 5:
			cout << "Czy aby na pewno chcesz skasowa� ca�� list�? [T/N]";
			char tmpChar;
			cin >> tmpChar;
			if (tmpChar == 'T' || tmpChar == 't')
				ListaTw�rc�w.clear();
			break;
		case 6:
			system ("CLS");
			cout << "Podaj imi�:";
			cin >> TmpImie;
			cout << "Podaj nazwisko:";
			cin >> TmpNazwisko;
			for( list<Tw�rca>::iterator iter=ListaTw�rc�w.begin(); iter != ListaTw�rc�w.end(); iter++) {
				tmp = *iter;
				if (tmp.Imie == TmpImie && tmp.Nazwisko == TmpNazwisko) {
					cout << "Obecny rekord to:\n";
					tmp.Przedstaw();
					cout << "Usun��? [T/N]";
					char tmpChar;
					cin >> tmpChar;
					if (tmpChar == 'T' || tmpChar == 't') {
						iter = ListaTw�rc�w.erase(iter);
					}
				}
			}
			break;
		default:
			break;
		}
	} while (switch_on != 9);
	*Tw�rcy = ListaTw�rc�w;
}

Tw�rca Zarz�dcaOs�b::DodajTw�rc� (list<Tw�rca>* ListaTw�rc�w) 
{
	Tw�rca tmp; list<Tw�rca> lista;
	tmp.GenerujTw�rca();
	lista = *ListaTw�rc�w;
	lista.push_back(tmp);
	ListaTw�rc�w = &lista;
	return tmp;
}

Tw�rca Zarz�dcaOs�b::WydajTw�rc� (list<Tw�rca> ListaTw�rc�w)
{
	string TmpImie, TmpNazwisko;
	Tw�rca tmp;
	system ("CLS");
			cout << "Podaj imi�:";
			cin >> TmpImie;
			cout << "Podaj nazwisko:";
			cin >> TmpNazwisko;
			for( list<Tw�rca>::iterator iter=ListaTw�rc�w.begin(); iter != ListaTw�rc�w.end(); iter++) {
				if (iter->Imie == TmpImie && iter->Nazwisko == TmpNazwisko)
					tmp = *iter;
			}
			return tmp;
}

int Zarz�dcaOs�b::MenuAdmina (list<Admin>* Admini)
	{
		list<Admin> ListaAdmin�w;
		ListaAdmin�w = *Admini;
	Admin tmp; 
	string TmpLogin;
	int switch_on;
	do {
		system ("CLS");
			cout << "Wybierz opcje menu Admin�w: \n";
			cout << "1.Dodaj Admina\n";
			cout << "2.Przegl�daj list� wszystkich\n";
			cout << "3.Przegl�daj list� tematycznie\n";
			cout << "4.Zast�p poszczeg�lne wyst�pienia\n";
			cout << "5.Kasuj ca�� list�\n";
			cout << "6.Kasuj wybrany element listy\n";
			cout << "9.Wyj�cie\n";
		cin >> switch_on;
		switch (switch_on)
		{
		case 1:
			tmp.GenerujAdmina();
			ListaAdmin�w.push_back(tmp);
			break;
		case 2:
			system ("CLS");
			for( list<Admin>::iterator iter=ListaAdmin�w.begin(); iter != ListaAdmin�w.end(); iter++)
			{
				tmp = *iter;
				tmp.Przedstaw();
			}
			std::system ("pause");
			break;
		case 3:
			system ("CLS");
			std::system ("pause");
			break;
		case 4:
			system ("CLS");
			cout << "Podaj szukany login:";
			cin >> TmpLogin;
			for( list<Admin>::iterator iter=ListaAdmin�w.begin(); iter != ListaAdmin�w.end(); iter++) {
				tmp = *iter;
				if (tmp.Login == TmpLogin) {
					cout << "Obecny rekord to:\n";
					tmp.Przedstaw();
					cout << "Zmieni�? [T/N]";
					char tmpChar;
					cin >> tmpChar;
					if (tmpChar == 'T' || tmpChar == 't') {
						tmp.GenerujAdmina();
						*iter = tmp;
					}
				}
			}
			break;
		case 5:
			cout << "Czy aby na pewno chcesz skasowa� ca�� list�? [T/N]";
			char tmpChar;
			cin >> tmpChar;
			if (tmpChar == 'T' || tmpChar == 't') {
				cout << "Operacja ta spowoduje unieruchomienie programu do czasu r�cznego wprowadzenia danych przez serwis. Czy aby na pewno chcesz kontunuowa�?? [T/N]";
				cin >> tmpChar;
				if (tmpChar == 'T' || tmpChar == 't') {
					ListaAdmin�w.clear();
				}
			}
			break;
		case 6:
			system ("CLS");
			cout << "Podaj Login:";
			cin >> TmpLogin;
			for( list<Admin>::iterator iter=ListaAdmin�w.begin(); iter != ListaAdmin�w.end(); iter++) {
				tmp = *iter;
				if (tmp.Login == TmpLogin) {
					cout << "Obecny rekord to:\n";
					tmp.Przedstaw();
					cout << "Usun��? [T/N]";
					char tmpChar;
					cin >> tmpChar;
					if (tmpChar == 'T' || tmpChar == 't') {
						iter = ListaAdmin�w.erase(iter);
					}
				}
			}
			break;
		default:
			break;
		}
	} while (switch_on != 9);
	*Admini = ListaAdmin�w;
	return(0);
}





Zarz�dcaOs�b::~Zarz�dcaOs�b(void)
{
}
