#pragma once
#include "item.h"
#include "Tw�rca.h"
#include <iostream>
#include <string>
#include <conio.h> 
#include <list>

class Book :
	public Item
{
public:
	std::string Gatunek;
	int Rok;
	int Stron;
	std::string Notka;

	void GenerujKsi��k�(std::list<Tw�rca>*);
	virtual void Przedstaw(void);
	void Przedstaw(std::string);
	Book(void);
	~Book(void);
};

