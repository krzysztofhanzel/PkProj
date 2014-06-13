#include "stdafx.h"
#include "Zarz¹dcaPrzedmiotów.h"
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

void MenuPrzedmiotów(list<Book>, list<Audiobook>, list<Music>, list <Video>)
{
}

Book WydajKsi¹¿kê(list<Book> ListaKsi¹¿ek)
{
	Book tmpbook;
	string Tytu³; int Rok;
	cout << "Podaj nazwê Ksi¹¿ki: ";
	cin >> Tytu³;
	cout << "Podaj rok wydania: ";
	cin >> Rok;
	for( list<Book>::iterator iter=ListaKsi¹¿ek.begin(); iter != ListaKsi¹¿ek.end(); iter++) {
				tmpbook = *iter;
				if (tmpbook.Tytu³ == Tytu³ && tmpbook.Rok == Rok) return tmpbook;
	}
}

Audiobook WydajAudiobook(list<Audiobook> ListaAudiobook)
{
	Audiobook tmpaudiobook;
	string Tytu³; int Rok;
	cout << "Podaj nazwê Audiobooka: ";
	cin >> Tytu³;
	cout << "Podaj rok wydania: ";
	cin >> Rok;
	for( list<Audiobook>::iterator iter=ListaAudiobook.begin(); iter != ListaAudiobook.end(); iter++) {
		tmpaudiobook = *iter;
		if (tmpaudiobook.Tytu³ == Tytu³ && tmpaudiobook.Rok == Rok) return tmpaudiobook;
	}
}

Music WydajMuzykê(list<Music> ListaMusic)
{
	Music tmpmusic;
	string Tytu³; int Rok;
	cout << "Podaj nazwê Albumu: ";
	cin >> Tytu³;
	cout << "Podaj rok wydania: ";
	cin >> Rok;
	for( list<Music>::iterator iter=ListaMusic.begin(); iter != ListaMusic.end(); iter++) {
		tmpmusic = *iter;
		if (tmpmusic.Tytu³ == Tytu³ && tmpmusic.Rok == Rok) return tmpmusic;
	}
}

Video WydajFilm(list<Video> ListaVideo)
{
	Video tmpvideo;
	string Tytu³; int Rok;
	cout << "Podaj nazwê Filmu: ";
	cin >> Tytu³;
	cout << "Podaj rok wydania: ";
	cin >> Rok;
	for( list<Video>::iterator iter=ListaVideo.begin(); iter != ListaVideo.end(); iter++) {
		tmpvideo = *iter;
		if (tmpvideo.Tytu³ == Tytu³ && tmpvideo.Rok == Rok) return tmpvideo;
	}
}


Zarz¹dcaPrzedmiotów::Zarz¹dcaPrzedmiotów(void)
{
}


Zarz¹dcaPrzedmiotów::~Zarz¹dcaPrzedmiotów(void)
{
}
