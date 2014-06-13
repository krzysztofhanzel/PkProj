#pragma once
#include "item.h"
#include "Twórca.h"
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

	void GenerujKsi¹¿kê(std::list<Twórca>);
	void Przedstaw(void);
	Book(void);
	~Book(void);
};

