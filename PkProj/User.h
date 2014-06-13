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
	list<UUID> Wypo¿yczenia;
	void GenerujUsera(void);
	void Przedstaw(void);
	User(void);
	~User(void);
};

