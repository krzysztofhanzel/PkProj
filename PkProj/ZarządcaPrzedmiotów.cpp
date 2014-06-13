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

void Zarz¹dcaPrzedmiotów::MenuPrzedmiotów(list<Book>, list<Audiobook>, list<Music>, list <Video>)
{
	int intmenu;
	system ("CLS");
	cout << "WItaj w menu przedmiotów. Wybierz kategoriê przedmiotów:";
	cout << "\n1. Ksi¹¿ki";
	cout << "\n2. Audiobooki";
	cout << "\n3. Muzyka";
	cout << "\n4. Film";
	cout << "\n9. Wyjœcie";
	cin >> intmenu;
	do {
		switch (intmenu)
		{
		case 1:
			Zarz¹dcaPrzedmiotów::MenuBook(ListaBook);
			break;
		case 2:
			Zarz¹dcaPrzedmiotów::MenuAudiobook(ListaAudiobook);
			break;
		case 3:
			Zarz¹dcaPrzedmiotów::MenuMusic(ListaMusic);
			break;
		case 4:
			Zarz¹dcaPrzedmiotów::MenuVideo(ListaVideo);
			break;
		default:
			break;
		};
	} while (intmenu != 5);
}

void Zarz¹dcaPrzedmiotów::MenuBook(list<Book>)
{
}
void Zarz¹dcaPrzedmiotów::MenuAudiobook(list<Audiobook>)
{
}
void Zarz¹dcaPrzedmiotów::MenuMusic(list<Music>)
{
}
void Zarz¹dcaPrzedmiotów::MenuVideo(list<Video>)
{
}

Book Zarz¹dcaPrzedmiotów::WydajKsi¹¿kê(list<Book> ListaKsi¹¿ek)
{
	Book tmpbook;
	string Tytu³; int Rok;
	cout << "Podaj nazwê Ksi¹¿ki: ";
	cin >> Tytu³;
	cout << "Podaj rok wydania: ";
	cin >> Rok;
	for( list<Book>::iterator iter=ListaKsi¹¿ek.begin(); iter != ListaKsi¹¿ek.end(); iter++) {
		if (iter->Tytu³ == Tytu³ && iter->Rok == Rok) 
					tmpbook = *iter;
	}
	return tmpbook;
}

Audiobook Zarz¹dcaPrzedmiotów::WydajAudiobook(list<Audiobook> ListaAudiobook)
{
	Audiobook tmpaudiobook;
	string Tytu³; int Rok;
	cout << "Podaj nazwê Audiobooka: ";
	cin >> Tytu³;
	cout << "Podaj rok wydania: ";
	cin >> Rok;
	for( list<Audiobook>::iterator iter=ListaAudiobook.begin(); iter != ListaAudiobook.end(); iter++) {
		if (iter->Tytu³ == Tytu³ && iter->Rok == Rok)
		tmpaudiobook = *iter;
	}
	return tmpaudiobook;
}

Music Zarz¹dcaPrzedmiotów::WydajMuzykê(list<Music> ListaMusic)
{
	Music tmpmusic;
	string Tytu³; int Rok;
	cout << "Podaj nazwê Albumu: ";
	cin >> Tytu³;
	cout << "Podaj rok wydania: ";
	cin >> Rok;
	for( list<Music>::iterator iter=ListaMusic.begin(); iter != ListaMusic.end(); iter++) {
		if (iter->Tytu³ == Tytu³ && iter->Rok == Rok)
		tmpmusic = *iter;
	}
	return tmpmusic;
}

Video Zarz¹dcaPrzedmiotów::WydajFilm(list<Video> ListaVideo)
{
	Video tmpvideo;
	string Tytu³; int Rok;
	cout << "Podaj nazwê Filmu: ";
	cin >> Tytu³;
	cout << "Podaj rok wydania: ";
	cin >> Rok;
	for( list<Video>::iterator iter=ListaVideo.begin(); iter != ListaVideo.end(); iter++) {
		if (iter->Tytu³ == Tytu³ && iter->Rok == Rok)
		tmpvideo = *iter;
	}
	return tmpvideo;
}

Zarz¹dcaPrzedmiotów::Zarz¹dcaPrzedmiotów(void)
{
}

Zarz¹dcaPrzedmiotów::~Zarz¹dcaPrzedmiotów(void)
{
}
