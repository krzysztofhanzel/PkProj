// PkProj.cpp: Okre�la punkt wej�cia dla aplikacji konsoli.
//
#pragma once
#include "stdafx.h"
#include "Zarz�dcaOs�b.h"
#include <iostream>
#include <list>
#include "Admin.h"
#include "Tw�rca.h"
using namespace std;

list<Tw�rca> ListaTw�rc�w;
list<Admin> ListaAdmin�w;

#include <list>

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "");

	Zarz�dcaOs�b Zarz�dca;

	int switch_on;
	do {
		system ("CLS");
		cout << "Wybierz opcje menu: \n";
		cout << "1. Wypo�yczenia\n";
		cout << "2. Zarz�dzaj zbiorami\n";
		cout << "2. Tw�rcy\n";
		cout << "3. AdminMenu\n";
		cout << "9. Wyj�cie\n";
		cin >> switch_on;
		switch (switch_on)
		{
		case 1:
			break;
		case 2:

			break;
		case 3:
			Zarz�dca.MenuTw�rc�w(ListaTw�rc�w);
			break;
		case 4:
			Zarz�dca.MenuAdmina(ListaAdmin�w);
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

