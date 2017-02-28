BlackJack:	BlackJack.o Carta.o Jugador.o
	g++ BlackJack.o Carta.o  Jugador.o -o BlackJack

BlackJack.o:	BlackJack.cpp Carta.h
	g++ -c BlackJack.cpp			

Jugador.o:	Jugador.cpp Jugador.h Carta.h
	g++ -c Jugador.cpp 

Carta.o:	Carta.cpp Carta.h
	g++ -c Carta.cpp 


clean: 
	rm *.o BlackJack	