#pragma once
#include "Tw�rca.h"
#include "Admin.h"
#include <iostream>
using namespace std;
#include <list>

class Zarz�dcaOs�b
{
public:
	list<Tw�rca> ListaTw�rc�w;
	list<Admin> ListaAdmin�w;
	int MenuTw�rc�w(void);
	int MenuAdmina(void);
	Zarz�dcaOs�b(void);
	~Zarz�dcaOs�b(void);
};

