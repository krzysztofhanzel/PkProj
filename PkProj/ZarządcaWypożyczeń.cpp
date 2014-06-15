#include "stdafx.h"
#include "Zarz¹dcaWypo¿yczeñ.h"
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

void Zarz¹dcaWypo¿yczeñ::MenuWypo¿yczeñ(list<Admin>* ListaAdminów, list<Twórca>* ListaTwórców, list<Book>* ListaBook, list<Audiobook>* ListaAudiobook, list<Music>* ListaMusic, list <Video>* ListaVideo)
{
	int switch_on;
	do {
		system ("CLS");
			cout << "Wypo¿yczenia: \n";
			cout << "1.Nowe wypo¿yczenie\n";
			cout << "2.Obecnie posiadane pozycje\n";
			cout << "3.Zwrot pozycji\n";
			cout << "4.Wybierz/zmieñ u¿ytkownika\n";
			cout << "9.Wyjœcie\n";
		cin >> switch_on;
	switch (switch_on)
		{
		case 1:
			UUID tmpuuid;
			tmpuuid = Wypo¿ycz(ListaBook, ListaAudiobook, ListaMusic, ListaVideo);
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

UUID Zarz¹dcaWypo¿yczeñ::Wypo¿ycz(list<Book>* ListaBook, list<Audiobook>* ListaAudiobook, list<Music>* ListaMusic, list <Video>* ListaVideo)
{
	UUID tmp;
	return tmp;
}

Zarz¹dcaWypo¿yczeñ::Zarz¹dcaWypo¿yczeñ(void)
{
}


Zarz¹dcaWypo¿yczeñ::~Zarz¹dcaWypo¿yczeñ(void)
{
}
