#pragma once
#include <string>
#include <iostream>
#include "guerrero.h"
using std::string;

class Soldado:public Guerrero{
    bool puedeAtacarVoladores;//Si es false significa que solo puede atacar a los terrestres.
    bool puedeVolar;//Si es false significa que es terrestre.
public:
    Soldado(string,int,int,int,bool,bool);
    virtual string toString();
    virtual void atacar(Guerrero*);
};