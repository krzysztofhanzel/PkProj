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
		if (iter->Tytu³ == Tytu³ && iter->Rok == Rok) 
					tmpbook = *iter;
	}
	return tmpbook;
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
		if (iter->Tytu³ == Tytu³ && iter->Rok == Rok)
		tmpaudiobook = *iter;
	}
	return tmpaudiobook;
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
		if (iter->Tytu³ == Tytu³ && iter->Rok == Rok)
		tmpmusic = *iter;
	}
	return tmpmusic;
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
