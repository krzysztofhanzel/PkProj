#pragma once
#include "stdafx.h"
#include "Admin.h"
#include <rpc.h>
#pragma comment(lib, "Rpcrt4.lib")
#include <string>
#include <iostream>
#include <conio.h> 

using namespace std;

void Admin::GenerujAdmina()
{
	string tmphaslo, tmphaslo2, tmpimie;
	system ("CLS");
	UuidCreate (&Id);
	Uprzywilejowane = Aktywne = false;
	Has³o = "tmp";
	cout << "Generator Administratorów. \nPodaj Login admina: ";
	cin >> Login;
	cout << "Dziêkujê. \nPodaj imiê admina: ";
	cin >> Imie;
	cout << "Dziêkujê. Podaj nazwisko admina: ";
	cin >> Nazwisko;
	cout << "Dziêkujê. Podaj Dzieñ Urodzenia admina: ";
	cin >> DataUrodzenia.Dzien;
	cout << "Dziêkujê. Podaj Miesi¹c Urodzenia admina: ";
	cin >> DataUrodzenia.Miesiac;
	cout << "Dziêkujê. Podaj Rok Urodzenia admina: ";
	cin >> DataUrodzenia.Rok;
	cout << "Dziêkujê. Podaj P³eæ admina: [M/K] ";
	char tmp;
	cin >> tmp;
	if (tmp == 'M' || tmp == 'm') Plec = M;
	else if (tmp == 'K' || tmp == 'k') Plec = K;
	cout << "\nDziêkujê. Czy chcesz aby tworzony admin mia³ dostêp do funkcji zaawansowanych? [T/N]";
	cin >> tmp;
	if (tmp == 'T' || tmp == 't') Uprzywilejowane = true;
	cout << "\nDziêkujê. Czy chcesz aby tworzony admin mia³ automatycznie aktywowane konto? [T/N]";
	cin >> tmp;
	if (tmp == 'T' || tmp == 't') Aktywne = true;
	cout << "\nCzy chcesz zmieniæ domyœlne has³o \'tmp\' na inne?: [T/N]";
	cin >> tmp;
	do {
		if (tmp == 'T' || tmp == 't') {
			cout << "Podaj nowe has³o: ";
			cin >> tmphaslo;
			cout << "Podaj nowe has³o ponownie: ";
			cin >> tmphaslo2;
			if (tmphaslo == tmphaslo2) {
				Has³o = tmphaslo;
				tmp = 'N';
			}
			else cout << "Has³a niezgodne, wprowadŸ jeszcze raz.\n";
		}
	} while (tmp == 't' || tmp == 'T');	

}

void Admin::Przedstaw() 
{
	cout << Imie << " " <<  Nazwisko << ", urodzony " << DataUrodzenia.Dzien << "." << DataUrodzenia.Miesiac << "." << DataUrodzenia.Rok << ".\n";
	cout << "Uprawnienia: \n";
	cout << "Konto uprzywilejowane: ";
	if (Uprzywilejowane) cout << "TAK\n"; else cout << "NIE\n";
	cout << "Konto aktywne: ";
	if (Aktywne) cout << "TAK\n"; else cout << "NIE\n";
}

void Admin::Przedstaw(bool uprzywilejowany) 
{
	if (Uprzywilejowane == uprzywilejowany)
		Admin::Przedstaw();
}

void Admin::ZmieñHas³o()
{
	int tmp; int prób1 = 3, prób2 = 3;
	string obecnehas³o, tmphaslo, tmphaslo2;
	do {
		cout << "Podajobecne has³o:";
		cin >> obecnehas³o;
		if (obecnehas³o == Has³o && prób2 > 0){
			cout << "Podaj nowe has³o: ";
			cin >> tmphaslo;
			cout << "Podaj nowe has³o ponownie: ";
			cin >> tmphaslo2;
			if (tmphaslo == tmphaslo2) {
				Has³o = tmphaslo;
				prób2 = prób1 = 0;
			}
			else{
				cout << "Has³a niezgodne, wprowadŸ jeszcze raz.\n";
				prób2--;
			}
		}
		else {
			cout << "Has³a niezgodne, wprowadŸ jeszcze raz.\n";
			prób1--;
		}
	} while (prób1 > 0);
}

Admin::Admin(void)
{
}


Admin::~Admin(void)
{
}