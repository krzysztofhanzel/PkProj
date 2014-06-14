#pragma once

#include "stdafx.h"
#include "Zarz¹dcaOsób.h"
#include "Twórca.h"
using namespace std;
#include <list>
#include <iostream>
#include <cstdlib>
#include <string>
Zarz¹dcaOsób::Zarz¹dcaOsób(void)
{
	
}

void Zarz¹dcaOsób::MenuTwórców(list<Twórca>* Twórcy)
{
	list<Twórca> ListaTwórców;
	ListaTwórców = *Twórcy;
	Twórca tmp; 
	string TmpImie, TmpNazwisko;
	int switch_on;
	do {
		system ("CLS");
			cout << "Wybierz opcje menu Twórców: \n";
			cout << "1.Dodaj Twórcê\n";
			cout << "2.Przegl¹daj listê wszystkich\n";
			cout << "3.Przegl¹daj listê tematycznie\n";
			cout << "4.Zast¹p poszczególne wyst¹pienia\n";
			cout << "5.Kasuj ca³¹ listê\n";
			cout << "6.Kasuj wybrany element listy\n";
			cout << "9.Wyjœcie\n";
		cin >> switch_on;
		switch (switch_on)
		{
		case 1:
			tmp.GenerujTwórca();
			ListaTwórców.push_back(tmp);
			break;
		case 2:
			system ("CLS");
			for( list<Twórca>::iterator iter=ListaTwórców.begin(); iter != ListaTwórców.end(); iter++)
			{
				tmp = *iter;
				tmp.Przedstaw();
			}
			std::system ("pause");
			break;
		case 3:
			system ("CLS");
			int tmpint; Twórca::typ_tworcy tmptyp;
				cout << "\n Wybierz rodzaj autora: \n1. Pisarz\n2. Muzyk\n3. Aktor\n";
				cin >> tmpint;
				if (tmpint == 1) tmptyp = Twórca::typ_tworcy::Pisarz;
			if (tmpint == 2) tmptyp = Twórca::typ_tworcy::Muzyk;
			if (tmpint == 3) tmptyp = Twórca::typ_tworcy::Aktor;

			for( list<Twórca>::iterator iter=ListaTwórców.begin(); iter != ListaTwórców.end(); iter++)
			{
				tmp = *iter;
				tmp.Przedstaw(tmptyp);
			}
			std::system ("pause");
			break;
		case 4:
			system ("CLS");
			cout << "Podaj szukane imiê:";
			cin >> TmpImie;
			cout << "Podaj szukane nazwisko:";
			cin >> TmpNazwisko;
			for( list<Twórca>::iterator iter=ListaTwórców.begin(); iter != ListaTwórców.end(); iter++) {
				tmp = *iter;
				if (tmp.Imie == TmpImie && tmp.Nazwisko == TmpNazwisko) {
					cout << "Obecny rekord to:\n";
					tmp.Przedstaw();
					cout << "Zmieniæ? [T/N]";
					char tmpChar;
					cin >> tmpChar;
					if (tmpChar == 'T' || tmpChar == 't') {
						tmp.GenerujTwórca();
						*iter = tmp;
					}
				}
			}
			break;
		case 5:
			cout << "Czy aby na pewno chcesz skasowaæ ca³¹ listê? [T/N]";
			char tmpChar;
			cin >> tmpChar;
			if (tmpChar == 'T' || tmpChar == 't')
				ListaTwórców.clear();
			break;
		case 6:
			system ("CLS");
			cout << "Podaj imiê:";
			cin >> TmpImie;
			cout << "Podaj nazwisko:";
			cin >> TmpNazwisko;
			for( list<Twórca>::iterator iter=ListaTwórców.begin(); iter != ListaTwórców.end(); iter++) {
				tmp = *iter;
				if (tmp.Imie == TmpImie && tmp.Nazwisko == TmpNazwisko) {
					cout << "Obecny rekord to:\n";
					tmp.Przedstaw();
					cout << "Usun¹æ? [T/N]";
					char tmpChar;
					cin >> tmpChar;
					if (tmpChar == 'T' || tmpChar == 't') {
						iter = ListaTwórców.erase(iter);
					}
				}
			}
			break;
		default:
			break;
		}
	} while (switch_on != 9);
	*Twórcy = ListaTwórców;
}

Twórca Zarz¹dcaOsób::DodajTwórcê (list<Twórca>* ListaTwórców) 
{
	Twórca tmp; list<Twórca> lista;
	tmp.GenerujTwórca();
	lista = *ListaTwórców;
	lista.push_back(tmp);
	ListaTwórców = &lista;
	return tmp;
}

Twórca Zarz¹dcaOsób::WydajTwórcê (list<Twórca> ListaTwórców)
{
	string TmpImie, TmpNazwisko;
	Twórca tmp;
	system ("CLS");
			cout << "Podaj imiê:";
			cin >> TmpImie;
			cout << "Podaj nazwisko:";
			cin >> TmpNazwisko;
			for( list<Twórca>::iterator iter=ListaTwórców.begin(); iter != ListaTwórców.end(); iter++) {
				if (iter->Imie == TmpImie && iter->Nazwisko == TmpNazwisko)
					tmp = *iter;
			}
			return tmp;
}

int Zarz¹dcaOsób::MenuAdmina (list<Admin>* Admini)
	{
		list<Admin> ListaAdminów;
		ListaAdminów = *Admini;
	Admin tmp; 
	string TmpLogin;
	int switch_on;
	do {
		system ("CLS");
			cout << "Wybierz opcje menu Adminów: \n";
			cout << "1.Dodaj Admina\n";
			cout << "2.Przegl¹daj listê wszystkich\n";
			cout << "3.Przegl¹daj listê tematycznie\n";
			cout << "4.Zast¹p poszczególne wyst¹pienia\n";
			cout << "5.Kasuj ca³¹ listê\n";
			cout << "6.Kasuj wybrany element listy\n";
			cout << "9.Wyjœcie\n";
		cin >> switch_on;
		switch (switch_on)
		{
		case 1:
			tmp.GenerujAdmina();
			ListaAdminów.push_back(tmp);
			break;
		case 2:
			system ("CLS");
			for( list<Admin>::iterator iter=ListaAdminów.begin(); iter != ListaAdminów.end(); iter++)
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
			for( list<Admin>::iterator iter=ListaAdminów.begin(); iter != ListaAdminów.end(); iter++) {
				tmp = *iter;
				if (tmp.Login == TmpLogin) {
					cout << "Obecny rekord to:\n";
					tmp.Przedstaw();
					cout << "Zmieniæ? [T/N]";
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
			cout << "Czy aby na pewno chcesz skasowaæ ca³¹ listê? [T/N]";
			char tmpChar;
			cin >> tmpChar;
			if (tmpChar == 'T' || tmpChar == 't') {
				cout << "Operacja ta spowoduje unieruchomienie programu do czasu rêcznego wprowadzenia danych przez serwis. Czy aby na pewno chcesz kontunuowaæ?? [T/N]";
				cin >> tmpChar;
				if (tmpChar == 'T' || tmpChar == 't') {
					ListaAdminów.clear();
				}
			}
			break;
		case 6:
			system ("CLS");
			cout << "Podaj Login:";
			cin >> TmpLogin;
			for( list<Admin>::iterator iter=ListaAdminów.begin(); iter != ListaAdminów.end(); iter++) {
				tmp = *iter;
				if (tmp.Login == TmpLogin) {
					cout << "Obecny rekord to:\n";
					tmp.Przedstaw();
					cout << "Usun¹æ? [T/N]";
					char tmpChar;
					cin >> tmpChar;
					if (tmpChar == 'T' || tmpChar == 't') {
						iter = ListaAdminów.erase(iter);
					}
				}
			}
			break;
		default:
			break;
		}
	} while (switch_on != 9);
	*Admini = ListaAdminów;
	return(0);
}





Zarz¹dcaOsób::~Zarz¹dcaOsób(void)
{
}
