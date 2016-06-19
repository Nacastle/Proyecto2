#include "soldado.h"
#include "guerrero.h"
#include <string>
#include <sstream>
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>

using std::string;
using std::stringstream;
using std::vector;

Soldado::Soldado(string nombre,int ataque,int defensa,int vida,bool puedeAtacarVoladores,bool puedeVolar):Guerrero(nombre,ataque,defensa,vida,puedeAtacarVoladores,puedeVolar){
    this->puedeAtacarVoladores = false;
    this->puedeVolar = false;
}

void Soldado::atacar(Guerrero* guerreroDefendiendo){
    int moneda;//Si es !1 no puede atacar voladores, si es 1 si puede atacar voladores;
    srand(time(NULL));
    moneda = 1+rand()%(3-1);

    if (guerreroDefendiendo->isPuedeVolar()){
        if (moneda == 1){
            if (ataque > guerreroDefendiendo->getDefensa()){
                guerreroDefendiendo->setVida(guerreroDefendiendo->getVida() - (ataque - guerreroDefendiendo->getDefensa()));
            }else{
                guerreroDefendiendo->setVida(guerreroDefendiendo->getVida() - 1);
            }
        }
    }else{
        if (ataque > guerreroDefendiendo->getDefensa()){
            guerreroDefendiendo->setVida(guerreroDefendiendo->getVida() - (ataque - guerreroDefendiendo->getDefensa()));
        }else{
            guerreroDefendiendo->setVida(guerreroDefendiendo->getVida() - 1);
        }
    }

}

string Soldado::toString(){
    stringstream ss;
    ss << "Soldado: " << Guerrero::toString();
    return ss.str();
}