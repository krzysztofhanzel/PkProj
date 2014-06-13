// PkProj.cpp: Okreœla punkt wejœcia dla aplikacji konsoli.
//
#pragma once
#include "stdafx.h"
#include "Zarz¹dcaOsób.h"
#include <iostream>
using namespace std;

#include <list>

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "");

	Zarz¹dcaOsób Zarz¹dca;

	int switch_on;
	do {
		system ("CLS");
		cout << "Wybierz opcje menu: \n";
		cout << "1. Twórcy\n";
		cout << "2. AdminMenu\n";
		cout << "9. Wyjœcie\n";
		cin >> switch_on;
		switch (switch_on)
		{
		case 1:
			Zarz¹dca.MenuTwórców();
			break;
		case 2:
			Zarz¹dca.MenuAdmina();
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

