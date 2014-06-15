#pragma once
#include "Person.h"
#include "User.h"
#include <rpc.h>
#include <list>
#include <conio.h> 
#include <string>
#include <iostream>

class Admin :
	public Person, public User
{
public:
	using Person::Imie;
	using Person::DataUrodzenia;
	using Person::Id;
	using Person::Nazwisko;
	using Person::Plec;

	std::string Login;
	void GenerujAdmina(void);
	void Przedstaw(void);
	void Przedstaw(bool);
	void ZmieñHas³o(void);
	Admin(void);
	~Admin(void);
private:
	std::string Has³o;
	bool Aktywne;
	bool Uprzywilejowane;	
};

