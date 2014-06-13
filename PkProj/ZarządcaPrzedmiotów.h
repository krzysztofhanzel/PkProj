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
	void MenuPrzedmiotów(list <Twórca>, list<Book>, list<Audiobook>, list<Music>, list <Video>);
	static void MenuBook(list <Twórca>, list<Book>);
	static void MenuAudiobook(list <Twórca>, list<Audiobook>);
	static void MenuMusic(list <Twórca>, list<Music>);
	static void MenuVideo(list <Twórca>, list<Video>);

	static Book WydajKsi¹¿kê(list<Book>);
	static Audiobook WydajAudiobook(list<Audiobook>);
	static Music WydajMuzykê(list<Music>);
	static Video WydajFilm(list<Video>);
	Zarz¹dcaPrzedmiotów(void);
	~Zarz¹dcaPrzedmiotów(void);
};

