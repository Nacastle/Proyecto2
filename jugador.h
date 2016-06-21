#pragma once
#include <string>
#include <vector>
#include "guerrero.h"
using std::vector;
using std::string;

class Jugador{
	string nombre;
	vector<Guerrero*> tropa;
public:
	Jugador(string, vector<Guerrero*>);
	~Jugador();
	string getNombre();
	void setNombre(string);
	vector<Guerrero*> getTropa();
	void setTropa(vector<Guerrero*> tropa);
	//Guerrero* getTropa();
	string toString()const;
};