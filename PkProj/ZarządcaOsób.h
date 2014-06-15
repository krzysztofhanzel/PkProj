#pragma once
#include "Tw�rca.h"
#include "Admin.h"
#include "User.h"
#include <iostream>
using namespace std;
#include <list>

class Zarz�dcaOs�b
{
public:
	void MenuTw�rc�w(list<Tw�rca>*);
	static Tw�rca DodajTw�rc�(list<Tw�rca>*);
	static Tw�rca WydajTw�rc�(list<Tw�rca>);

	void MenuUser�w(list<User>*);
	static User DodajUsera(list<User>*);
	static User WydajUsera(list<User>);

	int MenuAdmina(list<Admin>*);

	Zarz�dcaOs�b(void);
	~Zarz�dcaOs�b(void);
};

