#pragma once
#include <iostream>
#include <rpc.h>
#include <string>
#include <cstdio>
#include <list>
#include "Tw�rca.h"
using namespace std;
class Item
{
public:
	list<Tw�rca> ListaAutor�w;
	string Tytu�;
	UUID Id;
	int Ilo��;
	Item(void);
	~Item(void);
};

