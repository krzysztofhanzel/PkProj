#pragma once
#include "item.h"
#include <iostream>
#include <string>
#include <conio.h> 
class Book :
	public Item
{
public:
	std::string Tytu�;
	std::string Gatunek;
	int Rok;
	int Stron;
	std::string Notka;

	void GenerujKsi��k�(void);
	void Przedstaw(void);
	Book(void);
	~Book(void);
};

