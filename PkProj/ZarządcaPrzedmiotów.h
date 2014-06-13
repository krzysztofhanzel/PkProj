#pragma once
#include "Item.h"
#include <list>
#include "Book.h"
#include "Audiobook.h"
#include "Music.h"
#include "Video.h"
using namespace std;

class Zarz�dcaPrzedmiot�w
{
public:
	void MenuPrzedmiot�w(list<Book>, list<Audiobook>, list<Music>, list <Video>);
	static Book WydajKsi��k�(list<Book>);
	static Audiobook WydajAudiobook(list<Audiobook>);
	static Music WydajMuzyk�(list<Music>);
	static Video WydajFilm(list<Video>);
	Zarz�dcaPrzedmiot�w(void);
	~Zarz�dcaPrzedmiot�w(void);
};

