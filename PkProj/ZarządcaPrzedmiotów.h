#pragma once
#include "Item.h"
#include <list>
#include "Book.h"
#include "Audiobook.h"
#include "Music.h"
#include "Video.h"
using namespace std;

class Zarz¹dcaPrzedmiotów
{
public:
	void MenuPrzedmiotów(list<Book>, list<Audiobook>, list<Music>, list <Video>);
	static Book WydajKsi¹¿kê(list<Book>);
	static Audiobook WydajAudiobook(list<Audiobook>);
	static Music WydajMuzykê(list<Music>);
	static Video WydajFilm(list<Video>);
	Zarz¹dcaPrzedmiotów(void);
	~Zarz¹dcaPrzedmiotów(void);
};

