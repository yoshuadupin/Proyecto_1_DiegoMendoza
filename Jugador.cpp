#include "Jugador.h"
Jugador::Jugador(){
}

Jugador::Jugador(vector<Carta*> copia){
	this->copiaDeck = copia;
}

Jugador::~Jugador(){
	this->mano.clean();
	
}

Jugador::setCarta(int indice){
	this->mano.push_back(indice);
}

Jugador::setDeck(vector<Carta> deck){
	this->copiaDeck = deck;
}
//Suma las cartas que el jugador tiene en mano;
int Jugador::sumaCartas(){
	int suma = 0;
	for (int i = 0; i < this->mano.size(); ++i)
	{
		//Evalua si es un Az y si no se pasa de 21 le da valor de 11
		if(suma < = 21 && copiaDeck[mano[i]]->getSimbolo()=='A'){
			suma +=11;
		//Si se pasa le da valor de 1.	
		}else{
			suma +=copiaDeck[mano[i]]->getValor();
		}
	}
}


