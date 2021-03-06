// PkProj.cpp: Określa punkt wejścia dla aplikacji konsoli.
//
#pragma once
#include "stdafx.h"
#include "ZarządcaOsób.h"
#include "ZarządcaPrzedmiotów.h"
#include "ZarządcaWypożyczeń.h"
#include <iostream>
#include <list>
#include "Admin.h"
#include "Twórca.h"
#include "User.h"
#include "Book.h"
#include "Audiobook.h"
#include "Music.h"
#include "Video.h"
using namespace std;

list<Twórca> ListaTwórców;
list<Admin> ListaAdminów;
list<User> ListaUżytkowników;
list<Book> ListaBook;
list<Audiobook> ListaAudiobook;
list<Music> ListaMusic;
list <Video> ListaVideo;

#include <list>

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "");

	ZarządcaOsób Zarządca;
	ZarządcaPrzedmiotów Przedmioty;
	ZarządcaWypożyczeń Wypożyczenia;

	int switch_on;
	do {
		system ("CLS");
		cout << "Wybierz opcje menu: \n";
		cout << "1. Wypożyczenia\n";
		cout << "2. Zarządzaj zbiorami\n";
		cout << "3. Twórcy\n";
		cout << "4. Użytkownicy\n";
		cout << "5. AdminMenu\n";
		cout << "9. Wyjście\n";
		cin >> switch_on;
		switch (switch_on)
		{
		case 1:
			Wypożyczenia.MenuWypożyczeń(&ListaAdminów, &ListaTwórców, &ListaBook, &ListaAudiobook, &ListaMusic, &ListaVideo);
			break;
		case 2:
			Przedmioty.MenuPrzedmiotów(&ListaTwórców, &ListaBook, &ListaAudiobook, &ListaMusic, &ListaVideo);
			break;
		case 3:
			Zarządca.MenuTwórców(&ListaTwórców);
			break;
		case 4:
			Zarządca.MenuUserów(&ListaUżytkowników);
			break;
		case 5:
			Zarządca.MenuAdmina(&ListaAdminów);
			break;
		case 9:
			break;
		default:
			switch_on = 0;
		}
	} while (switch_on !=9);

	return(0);
}

