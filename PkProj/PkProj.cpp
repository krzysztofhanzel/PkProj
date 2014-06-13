// PkProj.cpp: Określa punkt wejścia dla aplikacji konsoli.
//
#pragma once
#include "stdafx.h"
#include "ZarządcaOsób.h"
#include <iostream>
#include <list>
#include "Admin.h"
#include "Twórca.h"
using namespace std;

list<Twórca> ListaTwórców;
list<Admin> ListaAdminów;

#include <list>

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "");

	ZarządcaOsób Zarządca;

	int switch_on;
	do {
		system ("CLS");
		cout << "Wybierz opcje menu: \n";
		cout << "1. Wypożyczenia\n";
		cout << "2. Zarządzaj zbiorami\n";
		cout << "2. Twórcy\n";
		cout << "3. AdminMenu\n";
		cout << "9. Wyjście\n";
		cin >> switch_on;
		switch (switch_on)
		{
		case 1:
			break;
		case 2:

			break;
		case 3:
			Zarządca.MenuTwórców(ListaTwórców);
			break;
		case 4:
			Zarządca.MenuAdmina(ListaAdminów);
			break;
		case 9:
			break;
		default:
			switch_on = 0;
		}
	} while (switch_on !=9);

	return(0);
	

	return 0;
}

