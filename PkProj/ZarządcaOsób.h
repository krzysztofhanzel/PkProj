#pragma once
#include "Tw�rca.h"
#include "Admin.h"
#include <iostream>
using namespace std;
#include <list>

class Zarz�dcaOs�b
{
public:
	void MenuTw�rc�w(list<Tw�rca>*);
	static Tw�rca DodajTw�rc�(list<Tw�rca>*);
	static Tw�rca WydajTw�rc�(list<Tw�rca>);
	int MenuAdmina(list<Admin>*);
	Zarz�dcaOs�b(void);
	~Zarz�dcaOs�b(void);
};

