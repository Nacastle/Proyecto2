#pragma once
#include <string>
#include <iostream>
#include <vector>
using std::vector;
using std::string;

class Guerrero{
protected:
	string nombre;
	int ataque;
	int defensa;
	int vida;
	/*
	bool puedeAtacarVoladores;//Si es false significa que solo puede atacar a los terrestres.
	bool puedeVolar;//Si es false significa que es terrestre.
	*/
public:
	Guerrero(string,int,int,int/*,bool,bool*/);
	virtual string toString();
	~Guerrero();
	//Uso de Gets y Sets por la unica razon que no me deja acceder a ellos aunque los ponga protected, siendo esto asi no usare public ya que es una mala practica de programacion.
	//Gets
	string getNombre();
	int getAtaque();
	int getDefensa();
	int getVida();
	/*
	bool isPuedeAtacarVoladores();
	bool isPuedeVolar();
	*/
	//Sets
	void setNombre(string);
	void setAtaque(int);
	void setDefensa(int);
	void setVida(int);
	/*
	void setPuedeAtacarVoladores(bool);
	void setPuedeVolar(bool);
	*/
	virtual void atacar(vector<Guerrero&>) = 0;
	void muerte();
};