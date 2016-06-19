#include "dragon.h"
#include "guerrero.h"
#include <string>
#include <sstream>
#include <iostream>
#include <vector>
using std::string;
using std::stringstream;
using std::vector;

Dragon::Dragon(string nombre,int ataque,int defensa,int vida,bool puedeAtacarVoladores,bool puedeVolar):Guerrero(nombre,ataque,defensa,vida,puedeAtacarVoladores,puedeVolar){
    this->puedeAtacarVoladores = true;
    this->puedeVolar = true;
}

void Dragon::atacar(Guerrero* guerreroDefendiendo){
    if (ataque>guerreroDefendiendo->getDefensa())
    {
        guerreroDefendiendo->setVida(guerreroDefendiendo->getVida() - 2*(ataque-(guerreroDefendiendo->getDefensa())));
    }else{
        guerreroDefendiendo->setVida(guerreroDefendiendo->getVida() - 2);
    }
    vida = vida+(vida*0.1);
}

string Dragon::toString(){
    stringstream ss;
    ss << "Dragon: " << Guerrero::toString();
    return ss.str();
}