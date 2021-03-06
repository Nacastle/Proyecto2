#include "guerrero.h"
#include <sstream>
#include <string>
#include <iostream>
#include <vector>
using std::vector;
using std::string;
using std::stringstream;

Guerrero::Guerrero(string nombre,int ataque,int defensa,int vida,bool puedeAtacarVoladores,bool puedeVolar){
	this->nombre = nombre;
	this->ataque = ataque;
	this->defensa = defensa;
	this->vida = vida;
	
	this->puedeAtacarVoladores = puedeAtacarVoladores;
	this->puedeVolar = puedeVolar;
	
}

Guerrero::~Guerrero(){
	
}

//Gets
string Guerrero::getNombre(){
	return nombre;
}
int Guerrero::getAtaque(){
	return ataque;
}
int Guerrero::getDefensa(){
	return defensa;
}
int Guerrero::getVida(){
	return vida;
}

bool Guerrero::isPuedeAtacarVoladores(){
	return puedeAtacarVoladores;
}
bool Guerrero::isPuedeVolar(){
	return puedeVolar;
}

//Sets
void Guerrero::setNombre(string nombre){
	this->nombre = nombre;
}
void Guerrero::setAtaque(int ataque){
	this->ataque = ataque;
}
void Guerrero::setDefensa(int defensa){
	this->defensa = defensa;
}
void Guerrero::setVida(int vida){
	this->vida = vida;
}
void Guerrero::setPuedeAtacarVoladores(bool puedeAtacarVoladores){
	this->puedeAtacarVoladores = puedeAtacarVoladores;
}
void Guerrero::setPuedeVolar(bool puedeVolar){
	this->puedeVolar = puedeVolar;
}

void Guerrero::muerte(){
	ataque = 0;
	defensa = 0;
	vida = 0;
}

string Guerrero::toString(){
	stringstream ss;
	ss << "Guerrero: " << nombre << "Ataque: " << ataque << "Defensa: " << defensa << "Vida: " << vida;
	return ss.str();
}
