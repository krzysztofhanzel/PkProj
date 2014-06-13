#pragma once
#include "person.h"
#include <list>
#include <cstdio>
#include <rpc.h>

using namespace std;

class User :
	public Person
{
public:
	UUID NumerKarty;
	list<UUID> Wypożyczenia;
	void GenerujUsera(void);
	void Przedstaw(void);
	User(void);
	~User(void);
};

