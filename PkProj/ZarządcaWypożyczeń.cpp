#include "stdafx.h"
#include "ZarządcaWypożyczeń.h"
#include <list>
#include <cstdio>
#include <rpc.h>
#include "Admin.h"
#include "Twórca.h"
#include "Book.h"
#include "Audiobook.h"
#include "Music.h"
#include "Video.h"

using namespace std;

void ZarządcaWypożyczeń::MenuWypożyczeń(list<Admin>* ListaAdminów, list<Twórca>* ListaTwórców, list<Book>* ListaBook, list<Audiobook>* ListaAudiobook, list<Music>* ListaMusic, list <Video>* ListaVideo)
{
	int switch_on;
	do {
		system ("CLS");
			cout << "Wypożyczenia: \n";
			cout << "1.Nowe wypożyczenie\n";
			cout << "2.Obecnie posiadane pozycje\n";
			cout << "3.Zwrot pozycji\n";
			cout << "4.Wybierz/zmień użytkownika\n";
			cout << "9.Wyjście\n";
		cin >> switch_on;
	switch (switch_on)
		{
		case 1:
			UUID tmpuuid;
			tmpuuid = Wypożycz(ListaBook, ListaAudiobook, ListaMusic, ListaVideo);
			if (tmpuuid.Data1 == ' ')
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		default:
			break;
		}
	} while (switch_on !=9);
}

UUID ZarządcaWypożyczeń::Wypożycz(list<Book>* ListaBook, list<Audiobook>* ListaAudiobook, list<Music>* ListaMusic, list <Video>* ListaVideo)
{
	UUID tmp;
	return tmp;
}

ZarządcaWypożyczeń::ZarządcaWypożyczeń(void)
{
}


ZarządcaWypożyczeń::~ZarządcaWypożyczeń(void)
{
}
