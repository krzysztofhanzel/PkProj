#pragma once
#include "Twórca.h"
#include "Admin.h"
#include "User.h"
#include <iostream>
using namespace std;
#include <list>

class Zarz¹dcaOsób
{
public:
	void MenuTwórców(list<Twórca>*);
	static Twórca DodajTwórcê(list<Twórca>*);
	static Twórca WydajTwórcê(list<Twórca>);

	void MenuUserów(list<User>*);
	static User DodajUsera(list<User>*);
	static User WydajUsera(list<User>);

	int MenuAdmina(list<Admin>*);

	Zarz¹dcaOsób(void);
	~Zarz¹dcaOsób(void);
};

