#include "stdafx.h"
#include "Zarz�dcaPrzedmiot�w.h"
#include <list>
#include <cstdio>
#include "Book.h"
#include "Audiobook.h"
#include "Music.h"
#include "Video.h"

using namespace std;

list<Book> ListaBook;
list<Audiobook> ListaAudiobook;
list<Music> ListaMusic;
list <Video> ListaVideo;

void Zarz�dcaPrzedmiot�w::MenuPrzedmiot�w(list<Book>, list<Audiobook>, list<Music>, list <Video>)
{
	int intmenu;
	system ("CLS");
	cout << "WItaj w menu przedmiot�w. Wybierz kategori� przedmiot�w:";
	cout << "\n1. Ksi��ki";
	cout << "\n2. Audiobooki";
	cout << "\n3. Muzyka";
	cout << "\n4. Film";
	cout << "\n9. Wyj�cie";
	cin >> intmenu;
	do {
		switch (intmenu)
		{
		case 1:
			Zarz�dcaPrzedmiot�w::MenuBook(ListaBook);
			break;
		case 2:
			Zarz�dcaPrzedmiot�w::MenuAudiobook(ListaAudiobook);
			break;
		case 3:
			Zarz�dcaPrzedmiot�w::MenuMusic(ListaMusic);
			break;
		case 4:
			Zarz�dcaPrzedmiot�w::MenuVideo(ListaVideo);
			break;
		default:
			break;
		};
	} while (intmenu != 5);
}

void Zarz�dcaPrzedmiot�w::MenuBook(list<Book>)
{
}
void Zarz�dcaPrzedmiot�w::MenuAudiobook(list<Audiobook>)
{
}
void Zarz�dcaPrzedmiot�w::MenuMusic(list<Music>)
{
}
void Zarz�dcaPrzedmiot�w::MenuVideo(list<Video>)
{
}

Book Zarz�dcaPrzedmiot�w::WydajKsi��k�(list<Book> ListaKsi��ek)
{
	Book tmpbook;
	string Tytu�; int Rok;
	cout << "Podaj nazw� Ksi��ki: ";
	cin >> Tytu�;
	cout << "Podaj rok wydania: ";
	cin >> Rok;
	for( list<Book>::iterator iter=ListaKsi��ek.begin(); iter != ListaKsi��ek.end(); iter++) {
		if (iter->Tytu� == Tytu� && iter->Rok == Rok) 
					tmpbook = *iter;
	}
	return tmpbook;
}

Audiobook Zarz�dcaPrzedmiot�w::WydajAudiobook(list<Audiobook> ListaAudiobook)
{
	Audiobook tmpaudiobook;
	string Tytu�; int Rok;
	cout << "Podaj nazw� Audiobooka: ";
	cin >> Tytu�;
	cout << "Podaj rok wydania: ";
	cin >> Rok;
	for( list<Audiobook>::iterator iter=ListaAudiobook.begin(); iter != ListaAudiobook.end(); iter++) {
		if (iter->Tytu� == Tytu� && iter->Rok == Rok)
		tmpaudiobook = *iter;
	}
	return tmpaudiobook;
}

Music Zarz�dcaPrzedmiot�w::WydajMuzyk�(list<Music> ListaMusic)
{
	Music tmpmusic;
	string Tytu�; int Rok;
	cout << "Podaj nazw� Albumu: ";
	cin >> Tytu�;
	cout << "Podaj rok wydania: ";
	cin >> Rok;
	for( list<Music>::iterator iter=ListaMusic.begin(); iter != ListaMusic.end(); iter++) {
		if (iter->Tytu� == Tytu� && iter->Rok == Rok)
		tmpmusic = *iter;
	}
	return tmpmusic;
}

Video Zarz�dcaPrzedmiot�w::WydajFilm(list<Video> ListaVideo)
{
	Video tmpvideo;
	string Tytu�; int Rok;
	cout << "Podaj nazw� Filmu: ";
	cin >> Tytu�;
	cout << "Podaj rok wydania: ";
	cin >> Rok;
	for( list<Video>::iterator iter=ListaVideo.begin(); iter != ListaVideo.end(); iter++) {
		if (iter->Tytu� == Tytu� && iter->Rok == Rok)
		tmpvideo = *iter;
	}
	return tmpvideo;
}

Zarz�dcaPrzedmiot�w::Zarz�dcaPrzedmiot�w(void)
{
}

Zarz�dcaPrzedmiot�w::~Zarz�dcaPrzedmiot�w(void)
{
}
