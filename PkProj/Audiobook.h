#pragma once
#include "disc.h"
#include "Tw�rca.h"
#include <iostream>
#include <string>
#include <conio.h> 
#include <list>
class Audiobook :
	public Disc
{
public:
	int RokKsi��ki;
	std::string Gatunek;
	double Czas;
	std::string Notka;

	void GenerujAudiobook(std::list<Tw�rca>*);
	virtual void Przedstaw(void);
	void Przedstaw(std::string);
	Audiobook(void);
	~Audiobook(void);
};

