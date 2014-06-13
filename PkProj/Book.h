#pragma once
#include "item.h"
#include <iostream>
#include <string>
#include <conio.h> 
class Book :
	public Item
{
public:
	std::string Tytu³;
	std::string Gatunek;
	int Rok;
	int Stron;
	std::string Notka;

	void GenerujKsi¹¿kê(void);
	void Przedstaw(void);
	Book(void);
	~Book(void);
};

