#pragma once
#include "Item.h"
#include <list>
#include "Book.h"
#include "Audiobook.h"
#include "Music.h"
#include "Video.h"
using namespace std;

class ZarządcaPrzedmiotów
{
public:
	void MenuPrzedmiotów(list<Book>, list<Audiobook>, list<Music>, list <Video>);
	static Book WydajKsiążkę(list<Book>);
	static Audiobook WydajAudiobook(list<Audiobook>);
	static Music WydajMuzykę(list<Music>);
	static Video WydajFilm(list<Video>);
	ZarządcaPrzedmiotów(void);
	~ZarządcaPrzedmiotów(void);
};

