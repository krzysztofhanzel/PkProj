#pragma once
#include "person.h"
#include <rpc.h>
#include <list>
#include <conio.h> 
#include <string>
#include <iostream>



class Tw�rca :
	public Person
{
public:

	enum typ_tworcy {Pisarz, Muzyk, Aktor};
	typ_tworcy Typ;
	std::string Notka;
	
	virtual void Przedstaw(void);
	virtual void Przedstaw(Tw�rca::typ_tworcy);
	void GenerujTw�rca(void);
	~Tw�rca(void);
};