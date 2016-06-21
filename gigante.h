#pragma once
#include <string>
#include <iostream>
#include "guerrero.h"
using std::string;

class Gigante:public Guerrero{
    bool puedeAtacarVoladores;//Si es false significa que solo puede atacar a los terrestres.
    bool puedeVolar;//Si es false significa que es terrestre.
public:
    Gigante(string,int,int,int);
    virtual string toString();
    virtual void atacar(Guerrero*);
};