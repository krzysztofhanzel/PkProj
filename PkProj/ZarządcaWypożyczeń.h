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
class Zarz¹dcaWypo¿yczeñ
{
public:
	void MenuWypo¿yczeñ(list<Admin>*, list <Twórca>*, list<Book>*, list<Audiobook>*, list<Music>*, list <Video>*);
	UUID Wypo¿ycz(list<Book>*, list<Audiobook>*, list<Music>*, list <Video>*);
	Zarz¹dcaWypo¿yczeñ(void);
	~Zarz¹dcaWypo¿yczeñ(void);
};

