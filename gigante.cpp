#include "gigante.h"
#include "guerrero.h"
#include <string>
#include <sstream>
#include <iostream>
#include <vector>
using std::string;
using std::stringstream;
using std::vector;

Gigante::Gigante(string nombre,int ataque,int defensa,int vida):Guerrero(nombre,ataque,defensa,vida,puedeAtacarVoladores,puedeVolar){
    this->puedeAtacarVoladores = false;
    this->puedeVolar = false;
}

void Gigante::atacar(Guerrero* guerreroDefendiendo){
 if (!guerreroDefendiendo->isPuedeVolar())
 {
     if (ataque > guerreroDefendiendo->getDefensa())
     {
        guerreroDefendiendo->setVida(guerreroDefendiendo->getVida() - (ataque - guerreroDefendiendo->getDefensa()));
     }else{
        guerreroDefendiendo->setVida(guerreroDefendiendo->getVida() - 1);
    }
}
}

string Gigante::toString(){
    stringstream ss;
    ss << "Gigante: " << Guerrero::toString();
    return ss.str();
}