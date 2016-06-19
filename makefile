juego: main.o guerrero.o arquero.o jugador.o dragon.o gigante.o mago.o soldado.o
	g++ main.o guerrero.o jugador.o arquero.o dragon.o gigante.o mago.o soldado.o -o game
main.o:	main.cpp jugador.h guerrero.h arquero.h dragon.h gigante.o mago.o soldado.o
	g++ -c main.cpp
guerrero.o:	guerrero.cpp guerrero.h
	g++ -c guerrero.cpp
arquero.o:	arquero.cpp arquero.h guerrero.h
	g++ -c arquero.cpp
dragon.o:	dragon.cpp dragon.h guerrero.h
	g++ -c dragon.cpp
gigante.o:	gigante.cpp gigante.h guerrero.h
	g++ -c gigante.cpp
mago.o:	mago.cpp mago.h guerrero.h
	g++ -c mago.cpp
soldado.o:	soldado.cpp soldado.h soldado.cpp
	g++ -c soldado.cpp
jugador.o:	jugador.cpp jugador.h
	g++ -c jugador.cpp