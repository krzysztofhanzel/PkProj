// PkProj.cpp: Okre�la punkt wej�cia dla aplikacji konsoli.
//
#pragma once
#include "stdafx.h"
#include "Zarz�dcaOs�b.h"
#include <iostream>
using namespace std;

#include <list>

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "");

	Zarz�dcaOs�b Zarz�dca;

	int switch_on;
	do {
		system ("CLS");
		cout << "Wybierz opcje menu: \n";
		cout << "1. Tw�rcy\n";
		cout << "2. AdminMenu\n";
		cout << "9. Wyj�cie\n";
		cin >> switch_on;
		switch (switch_on)
		{
		case 1:
			Zarz�dca.MenuTw�rc�w();
			break;
		case 2:
			Zarz�dca.MenuAdmina();
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

