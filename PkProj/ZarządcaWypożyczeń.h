#pragma once
#include <list>
#include <cstdio>
#include <rpc.h>
#include "Admin.h"
#include "Tw�rca.h"
#include "Book.h"
#include "Audiobook.h"
#include "Music.h"
#include "Video.h"
class Zarz�dcaWypo�ycze�
{
public:
	void MenuWypo�ycze�(list<Admin>*, list <Tw�rca>*, list<Book>*, list<Audiobook>*, list<Music>*, list <Video>*);
	UUID Wypo�ycz(list<Book>*, list<Audiobook>*, list<Music>*, list <Video>*);
	Zarz�dcaWypo�ycze�(void);
	~Zarz�dcaWypo�ycze�(void);
};

