#pragma once
#include <list>
#include <cstdio>
#include <rpc.h>
#include "Admin.h"
#include "Twórca.h"
#include "Book.h"
#include "Audiobook.h"
#include "Music.h"
#include "Video.h"
class ZarządcaWypożyczeń
{
public:
	void MenuWypożyczeń(list<Admin>*, list <Twórca>*, list<Book>*, list<Audiobook>*, list<Music>*, list <Video>*);
	UUID Wypożycz(list<Book>*, list<Audiobook>*, list<Music>*, list <Video>*);
	ZarządcaWypożyczeń(void);
	~ZarządcaWypożyczeń(void);
};

