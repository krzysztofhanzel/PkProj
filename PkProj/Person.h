#pragma once
#include <iostream>
#include <string>
#include <conio.h>
#include <rpc.h>
class Person
{
public:
	UUID Id;
	std::string Imie;
	std::string Nazwisko;
	struct dt
	{
		int Dzien;
		int Miesiac;
		int Rok;
	};
	dt DataUrodzenia;
	enum pl {M,K};
	pl Plec;

	Person(void);
	~Person(void);

private:
	void Zarz¹dca(void);
};
