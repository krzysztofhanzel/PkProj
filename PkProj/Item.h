#pragma once
#include <iostream>
#include <rpc.h>
#include <string>
#include <cstdio>
#include <list>
#include "Twórca.h"
using namespace std;
class Item
{
public:
	list<Twórca> ListaAutorów;
	string Tytu³;
	UUID Id;
	int Iloœæ;
	Item(void);
	~Item(void);
};

