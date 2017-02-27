#pragma once
#include <iostream>

using std::cout;
class Carta{

private:
	int valor;
	char palo;
	char simbolo;

public:
	Carta();
	Carta(int , char, char);
	~Carta();
	
	//Setters
	void setValor(int);
	void setPalo(char);
	void setSimbolo(char);
	//Getters
	int getValor();
	char getPalo();
	char getSimbolo();


};