#pragma once
#include "disc.h"
#include "Tw�rca.h"
#include <iostream>
#include <string>
#include <conio.h> 
#include <list>
class Music :
	public Disc
{
public:
	std::string Album;
	std::string Gatunek;
	double Czas;
	std::string Notka;

	void GenerujMusic(std::list<Tw�rca>);
	void Przedstaw(void);
	Music(void);
	~Music(void);
};

