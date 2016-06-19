#include "jugador.h"
#include <string>
#include <sstream>
#include <iostream>
#include <vector>
using std::string;
using std::stringstream;
using std::vector;

Jugador::Jugador(string nombre){
	this->nombre = nombre;
}

string Jugador::toString()const{
	stringstream ss;
	ss << "Jugador: " << nombre;
	return ss.str();
}
