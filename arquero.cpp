#include "arquero.h"
#include "guerrero.h"
#include <string>
#include <sstream>
#include <iostream>
#include <vector>
using std::string;
using std::stringstream;
using std::vector;

Arquero::Arquero(string nombre,int ataque,int defensa,int vida):Guerrero(nombre,ataque,defensa,vida,puedeAtacarVoladores,puedeVolar){
    //noFlechas=50;
    this->noFlechas = 50;
    this->puedeAtacarVoladores = true;
    this->puedeVolar = false;
}

void Arquero::atacar(Guerrero* guerreroDefendiendo){
        int danho=0;
        danho = noFlechas*(ataque/guerreroDefendiendo->getDefensa());
        guerreroDefendiendo->setVida(guerreroDefendiendo->getVida()-danho);
    }

string Arquero::toString(){
    stringstream ss;
    ss << "Arquero: " << Guerrero::toString() << " No. Flechas: " << noFlechas;
    return ss.str();
}