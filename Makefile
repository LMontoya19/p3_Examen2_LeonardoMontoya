main:	Bespina.o Bnormal.o Bomba.o Bombav.o Item.o Jugador.o Obstaculo.o main.o
	g++ Bespina.o Bnormal.o Bomba.o Bombav.o Item.o Jugador.o Obstaculo.o main.o -o main
	rm *.o
main.o:	Bespina.cpp	Bnormal.cpp Bomba.cpp Bombav.cpp Item.cpp Jugador.cpp Obstaculo.cpp main.cpp
	g++ -c main.cpp
Bespina.o:	Bespina.cpp Bomba.cpp
	g++ -c Bespina.cpp
Bomba.o:	Bomba.cpp Item.cpp
	g++ -c Bomba.cpp
Bnormal.o:	Bnormal.cpp
	g++ -c Bnormal.cpp
Bombav.o:	Bombav.cpp
	g++ -c Bombav.cpp
Jugador.o:	Jugador.cpp Item.cpp
	g++ -c Jugador.cpp
Obstaculo.o:	Item.cpp Obstaculo.cpp
	g++ -c Obstaculo.cpp