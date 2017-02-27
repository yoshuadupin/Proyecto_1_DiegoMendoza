#include "Carta.h"

Carta::Carta(){
	valor = 0;
	simbolo = 'A';
	palo = '*';
}

Carta::Carta(int valor  , char palo , char simbolo){
	this->valor  = valor ;
	this->simbolo = simbolo;
	this->palo = palo;	
}

Carta::~Carta(){
	cout<<"Liberando memoria";
}
void Carta::setValor(int valor){
	this->valor = valor;
}
void Carta::setPalo(char palo){
	this->palo = palo;
}
void Carta::setSimbolo(char simbolo){
	this->simbolo =simbolo;
}

int Carta::getValor(){
	return valor;
}

char Carta::getPalo(){
	return palo;
}

char Carta::getSimbolo(){
	return simbolo;
}
