#pragma once
#include "Twórca.h"
#include "Admin.h"
#include <iostream>
using namespace std;
#include <list>

class ZarządcaOsób
{
public:
	list<Twórca> ListaTwórców;
	list<Admin> ListaAdminów;
	int MenuTwórców(void);
	int MenuAdmina(void);
	ZarządcaOsób(void);
	~ZarządcaOsób(void);
};

