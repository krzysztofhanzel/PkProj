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

void MenuPrzedmiot�w(list<Book>, list<Audiobook>, list<Music>, list <Video>)
{
}

Book WydajKsi��k�(list<Book> ListaKsi��ek)
{
	Book tmpbook;
	string Tytu�; int Rok;
	cout << "Podaj nazw� Ksi��ki: ";
	cin >> Tytu�;
	cout << "Podaj rok wydania: ";
	cin >> Rok;
	for( list<Book>::iterator iter=ListaKsi��ek.begin(); iter != ListaKsi��ek.end(); iter++) {
				tmpbook = *iter;
				if (tmpbook.Tytu� == Tytu� && tmpbook.Rok == Rok) return tmpbook;
	}
}

Audiobook WydajAudiobook(list<Audiobook> ListaAudiobook)
{
	Audiobook tmpaudiobook;
	string Tytu�; int Rok;
	cout << "Podaj nazw� Audiobooka: ";
	cin >> Tytu�;
	cout << "Podaj rok wydania: ";
	cin >> Rok;
	for( list<Audiobook>::iterator iter=ListaAudiobook.begin(); iter != ListaAudiobook.end(); iter++) {
		tmpaudiobook = *iter;
		if (tmpaudiobook.Tytu� == Tytu� && tmpaudiobook.Rok == Rok) return tmpaudiobook;
	}
}

Music WydajMuzyk�(list<Music> ListaMusic)
{
	Music tmpmusic;
	string Tytu�; int Rok;
	cout << "Podaj nazw� Albumu: ";
	cin >> Tytu�;
	cout << "Podaj rok wydania: ";
	cin >> Rok;
	for( list<Music>::iterator iter=ListaMusic.begin(); iter != ListaMusic.end(); iter++) {
		tmpmusic = *iter;
		if (tmpmusic.Tytu� == Tytu� && tmpmusic.Rok == Rok) return tmpmusic;
	}
}

Video WydajFilm(list<Video> ListaVideo)
{
	Video tmpvideo;
	string Tytu�; int Rok;
	cout << "Podaj nazw� Filmu: ";
	cin >> Tytu�;
	cout << "Podaj rok wydania: ";
	cin >> Rok;
	for( list<Video>::iterator iter=ListaVideo.begin(); iter != ListaVideo.end(); iter++) {
		tmpvideo = *iter;
		if (tmpvideo.Tytu� == Tytu� && tmpvideo.Rok == Rok) return tmpvideo;
	}
}


Zarz�dcaPrzedmiot�w::Zarz�dcaPrzedmiot�w(void)
{
}


Zarz�dcaPrzedmiot�w::~Zarz�dcaPrzedmiot�w(void)
{
}
