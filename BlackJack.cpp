#include "Carta.h"
#include "Jugador.h"
#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;

bool alguienGano(int , int);
bool pedirCarta();
int cartaAleatoria(vector<int>);
int main(int argc, char const *argv[])
{

	//Iniciando decks
	vector<Carta*>deck(52);
	//Palo de corazones
	deck[0] = new Carta(1 , '*' , 'A');
	deck[1] = new Carta(2 , '*' , '2');
	deck[2] = new Carta(3 , '*' , '3');
	deck[3] = new Carta(4 , '*' , '4');
	deck[4] = new Carta(5 , '*' , '5');
	deck[5] = new Carta(6 , '*' , '6');
	deck[6] = new Carta(7 , '*' , '7');
	deck[7] = new Carta(8 , '*' , '8');
	deck[8] = new Carta(9 , '*' , '9');
	deck[9] = new Carta(10 , '*' , 'D');
	deck[10] = new Carta(10 , '*' , 'J');
	deck[11] = new Carta(10 , '*' , 'K');
	deck[12] = new Carta(10 , '*' , 'Q');
	//Palo de Picas
	deck[13] = new Carta(1 , '^' , 'A');
	deck[14] = new Carta(2 , '^' , '2');
	deck[15] = new Carta(3 , '^' , '3');
	deck[16] = new Carta(4 , '^' , '4');
	deck[17] = new Carta(5 , '^' , '5');
	deck[18] = new Carta(6 , '^' , '6');
	deck[19] = new Carta(7 , '^' , '7');
	deck[20] = new Carta(8 , '^' , '8');
	deck[21] = new Carta(9 , '^' , '9');
	deck[22] = new Carta(10 , '^' , 'D');
	deck[23] = new Carta(10 , '^' , 'J');
	deck[24] = new Carta(10 , '^' , 'K');
	deck[25] = new Carta(10 , '^' , 'Q');
	//Palo de treboles
	deck[26] = new Carta(1 , '#' , 'A');
	deck[27] = new Carta(2 , '#' , '2');
	deck[28] = new Carta(3 , '#' , '3');
	deck[29] = new Carta(4 , '#' , '4');
	deck[30] = new Carta(5 , '#' , '5');
	deck[31] = new Carta(6 , '#' , '6');
	deck[32] = new Carta(7 , '#' , '7');
	deck[33] = new Carta(8 , '#' , '8');
	deck[34] = new Carta(9 , '#' , '9');
	deck[35] = new Carta(10 , '#' , 'D');
	deck[36] = new Carta(10 , '#' , 'J');
	deck[37] = new Carta(10 , '#' , 'K');
	deck[38] = new Carta(10 , '#' , 'Q');
	//Palo de rombos
	deck[39] = new Carta(1 , '&' , 'A');
	deck[40] = new Carta(2 , '&' , '2');
	deck[41] = new Carta(3 , '&' , '3');
	deck[42] = new Carta(4 , '&' , '4');
	deck[43] = new Carta(5 , '&' , '5');
	deck[44] = new Carta(6 , '&' , '6');
	deck[45] = new Carta(7 , '&' , '7');
	deck[46] = new Carta(8 , '&' , '8');
	deck[47] = new Carta(9 , '&' , '9');
	deck[48] = new Carta(10 , '&' , 'D');
	deck[49] = new Carta(10 , '&' , 'J');
	deck[50] = new Carta(10 , '&' , 'K');
	deck[51] = new Carta(10 , '&' , 'Q');

	//Vector cartas;
	vector<int> cartasJugadas;
	srand(time(NULL));
	cartasJugadas.push_back(rand()%52);
	cartasJugadas.push_back(cartaAleatoria(cartasJugadas));
	cartasJugadas.push_back(cartaAleatoria(cartasJugadas));
	cartasJugadas.push_back(cartaAleatoria(cartasJugadas));
	
	
	//Jugadores
	Jugador* humano = new Jugador(deck);
	Jugador* IA  = new Jugador(deck);
	
	//Variables de control
	int turno = 0;

	humano->setCarta(cartasJugadas[0]);
	humano->setCarta(cartasJugadas[1]);
	IA->setCarta(cartasJugadas[2]);
	IA->setCarta(cartasJugadas[3]);
	//LLevar el turno

	//Inicar partida
	while(humano->sumaCartas() != 21 && IA->sumaCartas() != 21){
		//Turno para el jugador
		if(turno == 0){
			humano->imprimirCartas();

			if(pedirCarta()){
				//Agrega un numero aleatorio al arreglo de cartas jugadas
				cartasJugadas.push_back(cartasAleatorias(cartasJugadas));
				humano->setCarta(cartasJugadas[cartasJugadas.size()-1]);			
			}else{
				turno = 1;
			}			
		//Turno para la IA	
		}else{
			break;
		}
	}

	for (int i = 0; i < cartasJugadas.size(); ++i)
	{
		cout<<cartasJugadas[i]<<endl;
	}
	



	
	for (int i = 0; i < deck.size(); ++i)
	{
		delete deck[i];
		/* code */
	}
	delete humano;
	delete IA;
	deck.clear();
	

	return 0;
}


bool pedirCarta(){
	char opcion;
	do{
		cout<<"Desea otra carta..."<<endl;
		cin>>opcion;
	}while(opcion != 's' && opcion != 'n');
	if(opcion == 's'){
		return true;	
	}
	return false;
}

//Metodo que recibe una copia del arreglo de cartas y verifica que una carta no
// este repetida para introducirla 
int cartaAleatoria(vector<int> cartasJugadas){
	int random =rand()%52;
	//Repite el ciclo hasta que el numero que saque no este repitido 
	for (int i = 0; i < cartasJugadas.size(); ++i)
	{
		if(random == cartasJugadas[i]){
			random = rand()%52;
			i = 0;
		}
	}
	
	return random;
}


