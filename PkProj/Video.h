#pragma once
#include "disc.h"
#include "Tw�rca.h"
#include <iostream>
#include <string>
#include <conio.h> 
#include <list>
class Video :
	public Disc
{
public:
	std::string WersjaJ�zykowa;
	std::string Gatunek;
	double Czas;
	std::string Notka;

	void GenerujVideo(std::list<Tw�rca>);
	void Przedstaw(void);
	Video(void);
	~Video(void);
};

