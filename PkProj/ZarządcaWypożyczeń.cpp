#include "stdafx.h"
#include "Zarz�dcaWypo�ycze�.h"
#include <list>
#include <cstdio>
#include <rpc.h>
#include "Admin.h"
#include "Tw�rca.h"
#include "Book.h"
#include "Audiobook.h"
#include "Music.h"
#include "Video.h"

using namespace std;

void Zarz�dcaWypo�ycze�::MenuWypo�ycze�(list<Admin>* ListaAdmin�w, list<Tw�rca>* ListaTw�rc�w, list<Book>* ListaBook, list<Audiobook>* ListaAudiobook, list<Music>* ListaMusic, list <Video>* ListaVideo)
{
	int switch_on;
	do {
		system ("CLS");
			cout << "Wypo�yczenia: \n";
			cout << "1.Nowe wypo�yczenie\n";
			cout << "2.Obecnie posiadane pozycje\n";
			cout << "3.Zwrot pozycji\n";
			cout << "4.Wybierz/zmie� u�ytkownika\n";
			cout << "9.Wyj�cie\n";
		cin >> switch_on;
	switch (switch_on)
		{
		case 1:
			UUID tmpuuid;
			tmpuuid = Wypo�ycz(ListaBook, ListaAudiobook, ListaMusic, ListaVideo);
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

UUID Zarz�dcaWypo�ycze�::Wypo�ycz(list<Book>* ListaBook, list<Audiobook>* ListaAudiobook, list<Music>* ListaMusic, list <Video>* ListaVideo)
{
	UUID tmp;
	return tmp;
}

Zarz�dcaWypo�ycze�::Zarz�dcaWypo�ycze�(void)
{
}


Zarz�dcaWypo�ycze�::~Zarz�dcaWypo�ycze�(void)
{
}
