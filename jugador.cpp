#include "jugador.h"
#include <string>
#include <sstream>
#include <iostream>
#include <vector>
using std::string;
using std::stringstream;
using std::vector;

Jugador::Jugador(string nombre, vector<Guerrero*> tropa){
	this->nombre = nombre;
	this->tropa = tropa;
}

Jugador::~Jugador(){
	
}

string Jugador::getNombre(){
	return nombre;
}
void Jugador::setNombre(string){
	this->nombre = nombre;
}

vector<Guerrero*> Jugador::getTropa(){
	return tropa;
}
void Jugador::setTropa(vector<Guerrero*> tropa){
	this->tropa = tropa;
}

string Jugador::toString()const{
	stringstream ss;
	ss << "Jugador: " << nombre;
	return ss.str();
}
