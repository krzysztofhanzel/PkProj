#pragma once
#include "disc.h"
#include "Twórca.h"
#include <iostream>
#include <string>
#include <conio.h> 
#include <list>
class Audiobook :
	public Disc
{
public:
	int RokKsi¹¿ki;
	std::string Gatunek;
	double Czas;
	std::string Notka;

	void GenerujAudiobook(std::list<Twórca>*);
	virtual void Przedstaw(void);
	void Przedstaw(std::string);
	Audiobook(void);
	~Audiobook(void);
};

