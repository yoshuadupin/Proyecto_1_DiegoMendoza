BlackJack:	BlackJack.o Carta.o
	g++ BlackJack.o Carta.o -o BlackJack

BlackJack.o:	BlackJack.cpp Carta.h
	g++ -c BlackJack.cpp			

Carta.o:	Carta.cpp Carta.h
	g++ -c Carta.cpp Carta.h

clean: 
	rm *.o BlackJack	