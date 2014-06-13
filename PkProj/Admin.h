#pragma once
#include "person.h"
#include "User.h"
#include <rpc.h>
#include <list>
#include <conio.h> 
#include <string>
#include <iostream>

class Admin :
	public Person
{
public:
	std::string Login;
	void GenerujAdmina(void);
	void Przedstaw(void);
	Admin(void);
	~Admin(void);
private:
	std::string Has³o;
	bool Aktywne;
	bool Uprzywilejowane;	
};

