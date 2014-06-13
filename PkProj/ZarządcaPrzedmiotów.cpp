#include "stdafx.h"
#include "ZarządcaPrzedmiotów.h"
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

void ZarządcaPrzedmiotów::MenuPrzedmiotów(list<Book>, list<Audiobook>, list<Music>, list <Video>)
{
	int intmenu;
	system ("CLS");
	cout << "WItaj w menu przedmiotów. Wybierz kategorię przedmiotów:";
	cout << "\n1. Książki";
	cout << "\n2. Audiobooki";
	cout << "\n3. Muzyka";
	cout << "\n4. Film";
	cout << "\n9. Wyjście";
	cin >> intmenu;
	do {
		switch (intmenu)
		{
		case 1:
			ZarządcaPrzedmiotów::MenuBook(ListaBook);
			break;
		case 2:
			ZarządcaPrzedmiotów::MenuAudiobook(ListaAudiobook);
			break;
		case 3:
			ZarządcaPrzedmiotów::MenuMusic(ListaMusic);
			break;
		case 4:
			ZarządcaPrzedmiotów::MenuVideo(ListaVideo);
			break;
		default:
			break;
		};
	} while (intmenu != 5);
}

void ZarządcaPrzedmiotów::MenuBook(list<Book>)
{
}
void ZarządcaPrzedmiotów::MenuAudiobook(list<Audiobook>)
{
}
void ZarządcaPrzedmiotów::MenuMusic(list<Music>)
{
}
void ZarządcaPrzedmiotów::MenuVideo(list<Video>)
{
}

Book ZarządcaPrzedmiotów::WydajKsiążkę(list<Book> ListaKsiążek)
{
	Book tmpbook;
	string Tytuł; int Rok;
	cout << "Podaj nazwę Książki: ";
	cin >> Tytuł;
	cout << "Podaj rok wydania: ";
	cin >> Rok;
	for( list<Book>::iterator iter=ListaKsiążek.begin(); iter != ListaKsiążek.end(); iter++) {
		if (iter->Tytuł == Tytuł && iter->Rok == Rok) 
					tmpbook = *iter;
	}
	return tmpbook;
}

Audiobook ZarządcaPrzedmiotów::WydajAudiobook(list<Audiobook> ListaAudiobook)
{
	Audiobook tmpaudiobook;
	string Tytuł; int Rok;
	cout << "Podaj nazwę Audiobooka: ";
	cin >> Tytuł;
	cout << "Podaj rok wydania: ";
	cin >> Rok;
	for( list<Audiobook>::iterator iter=ListaAudiobook.begin(); iter != ListaAudiobook.end(); iter++) {
		if (iter->Tytuł == Tytuł && iter->Rok == Rok)
		tmpaudiobook = *iter;
	}
	return tmpaudiobook;
}

Music ZarządcaPrzedmiotów::WydajMuzykę(list<Music> ListaMusic)
{
	Music tmpmusic;
	string Tytuł; int Rok;
	cout << "Podaj nazwę Albumu: ";
	cin >> Tytuł;
	cout << "Podaj rok wydania: ";
	cin >> Rok;
	for( list<Music>::iterator iter=ListaMusic.begin(); iter != ListaMusic.end(); iter++) {
		if (iter->Tytuł == Tytuł && iter->Rok == Rok)
		tmpmusic = *iter;
	}
	return tmpmusic;
}

Video ZarządcaPrzedmiotów::WydajFilm(list<Video> ListaVideo)
{
	Video tmpvideo;
	string Tytuł; int Rok;
	cout << "Podaj nazwę Filmu: ";
	cin >> Tytuł;
	cout << "Podaj rok wydania: ";
	cin >> Rok;
	for( list<Video>::iterator iter=ListaVideo.begin(); iter != ListaVideo.end(); iter++) {
		if (iter->Tytuł == Tytuł && iter->Rok == Rok)
		tmpvideo = *iter;
	}
	return tmpvideo;
}

ZarządcaPrzedmiotów::ZarządcaPrzedmiotów(void)
{
}

ZarządcaPrzedmiotów::~ZarządcaPrzedmiotów(void)
{
}
