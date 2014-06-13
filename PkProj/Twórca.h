#pragma once
#include "person.h"
#include <rpc.h>
#include <list>
#include <conio.h> 
#include <string>
#include <iostream>



class Twórca :
	public Person
{
public:

	enum typ_tworcy {Pisarz, Muzyk, Aktor};
	typ_tworcy Typ;
	std::string Notka;
	
	virtual void Przedstaw(void);
	virtual void Przedstaw(Twórca::typ_tworcy);
	void GenerujTwórca(void);
	~Twórca(void);
};