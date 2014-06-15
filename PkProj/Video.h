#pragma once
#include "disc.h"
#include "Twórca.h"
#include <iostream>
#include <string>
#include <conio.h> 
#include <list>
class Video :
	public Disc
{
public:
	std::string WersjaJêzykowa;
	std::string Gatunek;
	double Czas;
	std::string Notka;

	void GenerujVideo(std::list<Twórca>*);
	virtual void Przedstaw(void);
	void Przedstaw(std::string);
	Video(void);
	~Video(void);
};

