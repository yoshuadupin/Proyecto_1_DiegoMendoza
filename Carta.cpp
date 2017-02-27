#include "Carta.h"

Carta::Carta(){
	valor = 0;
	simbolo = 'A';
	palo = '*'
}

Carta::Carta(int valor  , char palo , char simbolo){
	this->valor  = valor ;
	this->simbolo = simbolo;
}

Carta::~Carta(){
	cout<<"Liberando memoria";
}
