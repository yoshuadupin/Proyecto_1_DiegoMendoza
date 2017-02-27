#pragma once
#include <vector>
#include "Carta.h"

using namespace std;
class Jugador
{
private:
	vector<int>mano;
	//Copia del deck que esta en el main
	vector<Carta*>copiaDeck;	
public:
	Jugador();
	Jugador(vector<Carta*>);
	~Jugador();

	void setCarta(int);
	void setDeck(vector<Carta>);
	int sumaCartas();
};