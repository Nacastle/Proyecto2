#pragma once
#include <string>
#include <iostream>
#include "guerrero.h"
using std::string;

class Soldado:public Guerrero{
public:
    Soldado(string,int,int,int);
    virtual string toString();
    virtual void atacar(Guerrero*);
};