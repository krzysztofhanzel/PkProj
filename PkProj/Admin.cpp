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
	Has�o = "tmp";
	cout << "Generator Administrator�w. \nPodaj Login admina: ";
	cin >> Login;
	cout << "Dzi�kuj�. \nPodaj imi� admina: ";
	cin >> Imie;
	cout << "Dzi�kuj�. Podaj nazwisko admina: ";
	cin >> Nazwisko;
	cout << "Dzi�kuj�. Podaj Dzie� Urodzenia admina: ";
	cin >> DataUrodzenia.Dzien;
	cout << "Dzi�kuj�. Podaj Miesi�c Urodzenia admina: ";
	cin >> DataUrodzenia.Miesiac;
	cout << "Dzi�kuj�. Podaj Rok Urodzenia admina: ";
	cin >> DataUrodzenia.Rok;
	cout << "Dzi�kuj�. Podaj P�e� admina: [M/K] ";
	char tmp;
	cin >> tmp;
	if (tmp == 'M' || tmp == 'm') Plec = M;
	else if (tmp == 'K' || tmp == 'k') Plec = K;
	cout << "\nDzi�kuj�. Czy chcesz aby tworzony admin mia� dost�p do funkcji zaawansowanych? [T/N]";
	cin >> tmp;
	if (tmp == 'T' || tmp == 't') Uprzywilejowane = true;
	cout << "\nDzi�kuj�. Czy chcesz aby tworzony admin mia� automatycznie aktywowane konto? [T/N]";
	cin >> tmp;
	if (tmp == 'T' || tmp == 't') Aktywne = true;
	cout << "\nCzy chcesz zmieni� domy�lne has�o \'tmp\' na inne?: [T/N]";
	cin >> tmp;
	do {
		if (tmp == 'T' || tmp == 't') {
			cout << "Podaj nowe has�o: ";
			cin >> tmphaslo;
			cout << "Podaj nowe has�o ponownie: ";
			cin >> tmphaslo2;
			if (tmphaslo == tmphaslo2) {
				Has�o = tmphaslo;
				tmp = 'N';
			}
			else cout << "Has�a niezgodne, wprowad� jeszcze raz.\n";
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

void Admin::Zmie�Has�o()
{
	int tmp; int pr�b1 = 3, pr�b2 = 3;
	string obecnehas�o, tmphaslo, tmphaslo2;
	do {
		cout << "Podajobecne has�o:";
		cin >> obecnehas�o;
		if (obecnehas�o == Has�o && pr�b2 > 0){
			cout << "Podaj nowe has�o: ";
			cin >> tmphaslo;
			cout << "Podaj nowe has�o ponownie: ";
			cin >> tmphaslo2;
			if (tmphaslo == tmphaslo2) {
				Has�o = tmphaslo;
				pr�b2 = pr�b1 = 0;
			}
			else{
				cout << "Has�a niezgodne, wprowad� jeszcze raz.\n";
				pr�b2--;
			}
		}
		else {
			cout << "Has�a niezgodne, wprowad� jeszcze raz.\n";
			pr�b1--;
		}
	} while (pr�b1 > 0);
}

Admin::Admin(void)
{
}


Admin::~Admin(void)
{
}