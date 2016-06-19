#pragma once
#include <string>
#include <vector>
//#include "guerrero.h"
using std::vector;
using std::string;

class Jugador{
	string nombre;
	//vector<Guerrero*> Tropa;
public:
	Jugador(string);
	string toString()const;
};