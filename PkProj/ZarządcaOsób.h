#pragma once
#include "Twórca.h"
#include "Admin.h"
#include <iostream>
using namespace std;
#include <list>

class Zarz¹dcaOsób
{
public:
	list<Twórca> ListaTwórców;
	list<Admin> ListaAdminów;
	int MenuTwórców(void);
	int MenuAdmina(void);
	Zarz¹dcaOsób(void);
	~Zarz¹dcaOsób(void);
};

