#include "mago.h"
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

Mago::Mago(string nombre,int ataque,int defensa,int vida):Guerrero(nombre,ataque,defensa,vida,puedeAtacarVoladores,puedeVolar){
    this->puedeAtacarVoladores = true;
    this->puedeVolar = false;
}

void Mago::atacar(Guerrero* guerreroDefendiendo){
    int moneda;//Si es 2 atacara 2 veces sino solo una vez;
    srand(time(NULL));
    moneda = 1+rand()%(4-1);
    if (moneda == 2){
        if (ataque > guerreroDefendiendo->getDefensa()){
            guerreroDefendiendo->setVida(guerreroDefendiendo->getVida() - 2*(ataque - guerreroDefendiendo->getDefensa()));
        }else{
            guerreroDefendiendo->setVida(guerreroDefendiendo->getVida() - 2);
        }
    }else{
        if (ataque > guerreroDefendiendo->getDefensa()){
            guerreroDefendiendo->setVida(guerreroDefendiendo->getVida() - (ataque - guerreroDefendiendo->getDefensa()));
        }else{
            guerreroDefendiendo->setVida(guerreroDefendiendo->getVida() - 1);
        }
    }

}

string Mago::toString(){
    stringstream ss;
    ss << "Mago: " << Guerrero::toString();
    return ss.str();
}