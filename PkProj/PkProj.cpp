// PkProj.cpp: Okreœla punkt wejœcia dla aplikacji konsoli.
//
#pragma once
#include "stdafx.h"
#include "Zarz¹dcaOsób.h"
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

	Zarz¹dcaOsób Zarz¹dca;

	int switch_on;
	do {
		system ("CLS");
		cout << "Wybierz opcje menu: \n";
		cout << "1. Wypo¿yczenia\n";
		cout << "2. Zarz¹dzaj zbiorami\n";
		cout << "2. Twórcy\n";
		cout << "3. AdminMenu\n";
		cout << "9. Wyjœcie\n";
		cin >> switch_on;
		switch (switch_on)
		{
		case 1:
			break;
		case 2:

			break;
		case 3:
			Zarz¹dca.MenuTwórców(ListaTwórców);
			break;
		case 4:
			Zarz¹dca.MenuAdmina(ListaAdminów);
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

