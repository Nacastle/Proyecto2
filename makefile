juego: main.o guerrero.o arquero.o jugador.o
	g++ main.o guerrero.o jugador.o -o game
main.o:	main.cpp jugador.h guerrero.h arquero.h
	g++ -c main.cpp
guerrero.o:	guerrero.cpp guerrero.h
	g++ -c guerrero.cpp
arquero.o:	arquero.cpp arquero.h guerrero.h
	g++ -c arquero.cpp
jugador.o:	jugador.cpp jugador.h
	g++ -c jugador.cpp
