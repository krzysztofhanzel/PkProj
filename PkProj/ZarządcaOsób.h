#pragma once
#include "Twórca.h"
#include "Admin.h"
#include <iostream>
using namespace std;
#include <list>

class Zarz¹dcaOsób
{
public:
	void MenuTwórców(list<Twórca>*);
	static Twórca DodajTwórcê(list<Twórca>*);
	static Twórca WydajTwórcê(list<Twórca>);
	int MenuAdmina(list<Admin>*);
	Zarz¹dcaOsób(void);
	~Zarz¹dcaOsób(void);
};

