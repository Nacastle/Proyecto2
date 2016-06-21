#include <iostream>
#include <stdlib.h>
#include <ncurses.h>
#include <vector>
#include <string>
#include "jugador.h"
#include "guerrero.h"
#include "arquero.h"
#include "dragon.h"
#include "gigante.h"
#include "mago.h"
#include "soldado.h"

using std::vector;
using std::cout;
using std::string;

void comprobarGane(vector<Jugador*>,bool*);
void imprimirGuerreros(vector<Jugador*>);
void turnoJugador(vector<Jugador*>,int,bool*);

int main(int argc, char const *argv[]) {
	string nombreJugador;
	vector<Jugador*> players;
	bool* gane;
	//Jugador players [] = Jugador[2];
	initscr();
	start_color();
	init_pair(1,COLOR_CYAN,COLOR_BLACK);
	attron(COLOR_PAIR(1));
	
	int opcion;
	while(opcion != 3){
		char str2[80];
		mvprintw(0,0,"Bienvenido al Juego de batalla (Se requieren 2 jugadores)");
		mvprintw(1,0,"Ingrese una opcion\n1. Nuevo Juego\n2. Cargar Juego\n3. Salir");
		opcion = getch()-'0';
		erase();
		char str1[80];
		
		if (opcion == 1)
		{
			int opcion2;
			mvprintw(1,0,"Ingrese una opcion\n1. Nuevo Juego\n2. Cargar Juego\n3. Salir");
			opcion2 = getch()-'0';
			erase();
			if (opcion2 == 1)
			{
				for (int i = 0; i < 2; ++i)
				{
					vector<Guerrero*> Tropa;
					mvprintw(0,0,"Ingrese el nombre del Jugador %d: ",(i+1));
					getstr(str1);
				//erase();
					for (int i = 0; i < 5; ++i)
					{
						mvprintw(1,0,"Ingrese el tipo de guerrero que desea crear: ");
						mvprintw(2,0,"1 para Soldado");
						mvprintw(3,0,"2 para Arquero");
						mvprintw(4,0,"3 para Mago");
						mvprintw(5,0,"4 para Gigante");
						mvprintw(6,0,"5 para Dragon");
						int eleccion = getch()-48;
						if (eleccion == 1)
						{
							erase();
							char nombre[50];
							int control;
							char valores;
							string datos = "";
							int vida;
							int ataque;
							int defensa;
							mvprintw(0,0,"Ingrese el nombre del Soldado: ");
							getstr(nombre);
							mvprintw(1,0,"Ingrese la cantidad de vida (numero): ");
							while((control=getch())!=10){
								mvprintw(1,0,"Ingrese la cantidad de vida (numero): ");
								if (control > 47 && control < 58)
								{
									valores=control;
									datos.push_back(valores);
									mvprintw(1,38,"%s",datos.c_str());
								}
								else{
									mvprintw(1,38,"%s",datos.c_str());
								}
								vida = atoi(datos.c_str());
							}
							datos.clear();
							mvprintw(2,0,"Ingrese la cantidad de ataque del Soldado: ");
							while((control=getch())!=10){
								mvprintw(2,0,"Ingrese la cantidad de ataque del Soldado: ");
								if (control > 47 && control < 58)
								{
									valores=control;
									datos.push_back(valores);
									mvprintw(2,43,"%s",datos.c_str());
								}
								else{
									mvprintw(2,43,"%s",datos.c_str());
								}
								ataque = atoi(datos.c_str());
							}
							datos.clear();
							mvprintw(3,0,"Ingrese la cantidad de defensa del Soldado: ");
							while((control=getch())!=10){
								mvprintw(3,0,"Ingrese la cantidad de defensa del Soldado: ");
								if (control > 47 && control < 58)
								{
									valores=control;
									datos.push_back(valores);
									mvprintw(3,44,"%s",datos.c_str());
								}
								else{
									mvprintw(3,44,"%s",datos.c_str());
								}
								defensa = atoi(datos.c_str());
							}
							datos.clear();
							Tropa.push_back(new Soldado(nombre,ataque,defensa,vida));
							mvprintw(5,0,"Felicidades ha creado un Soldado.");
							getch();
							erase();
						}else if (eleccion == 2)
						{
							erase();
							char nombre[50];
							int control;
							char valores;
							string datos = "";
							int vida;
							int ataque;
							int defensa;
							mvprintw(0,0,"Ingrese el nombre del Arquero: ");
							getstr(nombre);
							mvprintw(1,0,"Ingrese la cantidad de vida (numero): ");
							while((control=getch())!=10){
								mvprintw(1,0,"Ingrese la cantidad de vida (numero): ");
								if (control > 47 && control < 58)
								{
									valores=control;
									datos.push_back(valores);
									mvprintw(1,38,"%s",datos.c_str());
								}
								else{
									mvprintw(1,38,"%s",datos.c_str());
								}
								vida = atoi(datos.c_str());
							}
							datos.clear();
							mvprintw(2,0,"Ingrese la cantidad de ataque del Arquero: ");
							while((control=getch())!=10){
								mvprintw(2,0,"Ingrese la cantidad de ataque del Arquero: ");
								if (control > 47 && control < 58)
								{
									valores=control;
									datos.push_back(valores);
									mvprintw(2,43,"%s",datos.c_str());
								}
								else{
									mvprintw(2,43,"%s",datos.c_str());
								}
								ataque = atoi(datos.c_str());
							}
							datos.clear();
							mvprintw(3,0,"Ingrese la cantidad de defensa del Arquero: ");
							while((control=getch())!=10){
								mvprintw(3,0,"Ingrese la cantidad de defensa del Arquero: ");
								if (control > 47 && control < 58)
								{
									valores=control;
									datos.push_back(valores);
									mvprintw(3,44,"%s",datos.c_str());
								}
								else{
									mvprintw(3,44,"%s",datos.c_str());
								}
								defensa = atoi(datos.c_str());
							}
							datos.clear();
							Tropa.push_back(new Soldado(nombre,ataque,defensa,vida));
							mvprintw(5,0,"Felicidades ha creado un Arquero.");
							getch();
							erase();
						}else if (eleccion == 3)
						{
							erase();
							char nombre[50];
							int control;
							char valores;
							string datos = "";
							int vida;
							int ataque;
							int defensa;
							mvprintw(0,0,"Ingrese el nombre del Mago: ");
							getstr(nombre);
							mvprintw(1,0,"Ingrese la cantidad de vida (numero): ");
							while((control=getch())!=10){
								mvprintw(1,0,"Ingrese la cantidad de vida (numero): ");
								if (control > 47 && control < 58)
								{
									valores=control;
									datos.push_back(valores);
									mvprintw(1,38,"%s",datos.c_str());
								}
								else{
									mvprintw(1,38,"%s",datos.c_str());
								}
								vida = atoi(datos.c_str());
							}
							datos.clear();
							mvprintw(2,0,"Ingrese la cantidad de ataque del Mago: ");
							while((control=getch())!=10){
								mvprintw(2,0,"Ingrese la cantidad de ataque del Mago: ");
								if (control > 47 && control < 58)
								{
									valores=control;
									datos.push_back(valores);
									mvprintw(2,43,"%s",datos.c_str());
								}
								else{
									mvprintw(2,43,"%s",datos.c_str());
								}
								ataque = atoi(datos.c_str());
							}
							datos.clear();
							mvprintw(3,0,"Ingrese la cantidad de defensa del Mago: ");
							while((control=getch())!=10){
								mvprintw(3,0,"Ingrese la cantidad de defensa del Mago: ");
								if (control > 47 && control < 58)
								{
									valores=control;
									datos.push_back(valores);
									mvprintw(3,44,"%s",datos.c_str());
								}
								else{
									mvprintw(3,44,"%s",datos.c_str());
								}
								defensa = atoi(datos.c_str());
							}
							datos.clear();
							Tropa.push_back(new Arquero(nombre,ataque,defensa,vida));
							mvprintw(5,0,"Felicidades ha creado un Mago.");
							getch();
							erase();
						}else if (eleccion == 4)
						{
							erase();
							char nombre[50];
							int control;
							char valores;
							string datos = "";
							int vida;
							int ataque;
							int defensa;
							mvprintw(0,0,"Ingrese el nombre del Gigante: ");
							getstr(nombre);
							mvprintw(1,0,"Ingrese la cantidad de vida (numero): ");
							while((control=getch())!=10){
								mvprintw(1,0,"Ingrese la cantidad de vida (numero): ");
								if (control > 47 && control < 58)
								{
									valores=control;
									datos.push_back(valores);
									mvprintw(1,38,"%s",datos.c_str());
								}
								else{
									mvprintw(1,38,"%s",datos.c_str());
								}
								vida = atoi(datos.c_str());
							}
							datos.clear();
							mvprintw(2,0,"Ingrese la cantidad de ataque del Gigante: ");
							while((control=getch())!=10){
								mvprintw(2,0,"Ingrese la cantidad de ataque del Gigante: ");
								if (control > 47 && control < 58)
								{
									valores=control;
									datos.push_back(valores);
									mvprintw(2,43,"%s",datos.c_str());
								}
								else{
									mvprintw(2,43,"%s",datos.c_str());
								}
								ataque = atoi(datos.c_str());
							}
							datos.clear();
							mvprintw(3,0,"Ingrese la cantidad de defensa del Gigante: ");
							while((control=getch())!=10){
								mvprintw(3,0,"Ingrese la cantidad de defensa del Gigante: ");
								if (control > 47 && control < 58)
								{
									valores=control;
									datos.push_back(valores);
									mvprintw(3,44,"%s",datos.c_str());
								}
								else{
									mvprintw(3,44,"%s",datos.c_str());
								}
								defensa = atoi(datos.c_str());
							}
							datos.clear();
							Tropa.push_back(new Gigante(nombre,ataque,defensa,vida));
							mvprintw(5,0,"Felicidades ha creado un Gigante.");
							getch();
							erase();
						}else{
							erase();
							char nombre[50];
							int control;
							char valores;
							string datos = "";
							int vida;
							int ataque;
							int defensa;
							mvprintw(0,0,"Ingrese el nombre del Dragon: ");
							getstr(nombre);
							mvprintw(1,0,"Ingrese la cantidad de vida (numero): ");
							while((control=getch())!=10){
								mvprintw(1,0,"Ingrese la cantidad de vida (numero): ");
								if (control > 47 && control < 58)
								{
									valores=control;
									datos.push_back(valores);
									mvprintw(1,38,"%s",datos.c_str());
								}
								else{
									mvprintw(1,38,"%s",datos.c_str());
								}
								vida = atoi(datos.c_str());
							}
							datos.clear();
							mvprintw(2,0,"Ingrese la cantidad de ataque del Dragon: ");
							while((control=getch())!=10){
								mvprintw(2,0,"Ingrese la cantidad de ataque del Dragon: ");
								if (control > 47 && control < 58)
								{
									valores=control;
									datos.push_back(valores);
									mvprintw(2,43,"%s",datos.c_str());
								}
								else{
									mvprintw(2,43,"%s",datos.c_str());
								}
								ataque = atoi(datos.c_str());
							}
							datos.clear();
							mvprintw(3,0,"Ingrese la cantidad de defensa del Dragon: ");
							while((control=getch())!=10){
								mvprintw(3,0,"Ingrese la cantidad de defensa del Dragon: ");
								if (control > 47 && control < 58)
								{
									valores=control;
									datos.push_back(valores);
									mvprintw(3,44,"%s",datos.c_str());
								}
								else{
									mvprintw(3,44,"%s",datos.c_str());
								}
								defensa = atoi(datos.c_str());
							}
							datos.clear();
							Tropa.push_back(new Gigante(nombre,ataque,defensa,vida));
							mvprintw(5,0,"Felicidades ha creado un Dragon.");
							getch();
							erase();
						}
					}
					players.push_back(new Jugador(str1, Tropa));
				}
			}
			else if (opcion2 == 2)
			{
				while((gane[0]==false)&&(gane[1]==false)){
					turnoJugador(players,0,gane);
					if((gane[0]==false)&&(gane[1]==false)){
						turnoJugador(players,1,gane);
					}
				}
			}
			
		}

	}
	
	attroff(COLOR_PAIR(1));
	refresh();

	endwin();
	
	return 0;
}




void comprobarGane(vector<Jugador*> players,bool* gane){
	int* contador = new int[2];
	//int[] contador=new int[2];
	contador[0]=0;
	contador[1]=0;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 5; j++) {
			if(players[i]->getTropa()[j]->getVida()<=0){
				contador[i]++;
			}
		}
	}
	if(contador[0]==5){
		mvprintw(0,0,"Gano el Jugador: %s",players[1]->getNombre().c_str());
		gane[1]=true;
	}
	if(contador[1]==5){
		mvprintw(0,0,"Gano el Jugador: %s",players[0]->getNombre().c_str());
		gane[0]=true;
	}

} 

void imprimirGuerreros(Jugador* players){
	for (int i = 0; i < 2; ++i)
	{
		mvprintw(0,0,"Nombre del Jugador: %s", players->getNombre().c_str());
		for (int j = 0; j < 5; j++) {
			mvprintw((j+3),0,"%s",players->getTropa()[j]->toString().c_str());
		}
	}
	
}


void turnoJugador(vector<Jugador*> players,int i,bool* gane){
	int n;
	int m;
	if(i==0){
		mvprintw(0,0,"Con que guerrero atacaras (numero del guerrero 0-4)");
		imprimirGuerreros(players[i]);
		n=getch()-48;
		mvprintw(10,0,"Ingrese a que guerrero quieres destruir(0-4) :");
		imprimirGuerreros(players[1]);
		m=getch()-48;
		players[i]->getTropa()[n]->atacar(players[1]->getTropa()[m]);
		if(players[1]->getTropa()[m]->getVida()<0){
			players[1]->getTropa()[m]->muerte();
		}
		comprobarGane(players,gane);
	}else{
		mvprintw(0,0,"Con que guerrero atacaras (numero del guerrero 0-4)");
		imprimirGuerreros(players[i]);
		n=getch()-48;
		mvprintw(10,0,"Ingrese a que guerrero quieres destruir :");
		imprimirGuerreros(players[0]);
		m=getch()-48;
		players[i]->getTropa()[n]->atacar(players[0]->getTropa()[m]);
		if(players[0]->getTropa()[m]->getVida()<0){
			players[0]->getTropa()[m]->muerte();
		}
		comprobarGane(players,gane);
	}
}