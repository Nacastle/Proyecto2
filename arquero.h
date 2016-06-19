#pragma once
#include <string>
#include <iostream>
#include "guerrero.h"
using std::string;

class Arquero:public Guerrero{
	bool puedeAtacarVoladores;//Si es false significa que solo puede atacar a los terrestres.
	bool puedeVolar;//Si es false significa que es terrestre.
	int noFlechas;
public:
	Arquero(string,int,int,int,bool,bool,int);
	virtual string toString();
	virtual void atacar(Guerrero*);
};