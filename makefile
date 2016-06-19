juego: main.o guerrero.o arquero.o jugador.o dragon.o
	g++ main.o guerrero.o jugador.o arquero.o dragon.o -o game
main.o:	main.cpp jugador.h guerrero.h arquero.h dragon.h
	g++ -c main.cpp
guerrero.o:	guerrero.cpp guerrero.h
	g++ -c guerrero.cpp
arquero.o:	arquero.cpp arquero.h guerrero.h
	g++ -c arquero.cpp
dragon.o:	dragon.cpp dragon.h guerrero.h
	g++ -c dragon.cpp
jugador.o:	jugador.cpp jugador.h
	g++ -c jugador.cpp