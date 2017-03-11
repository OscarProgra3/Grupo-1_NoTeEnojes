#include <ncurses.h>

#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

#include "Pieza.h"
#include "PiezaAmarilla.h"
#include "PiezaAzul.h"
#include "PiezaRoja.h"
#include "PiezaVerde.h"

using namespace std;

//Crea una matriz de chars de n * n
char** inicializarMatriz(int);
//Imprime el laberinto
void imprimirTablero(char**, int);

int tiro();
int selectPiezas();



int main(){
	char** tablero = NULL;
	int size=15;
	srand (time(NULL));
	tablero = inicializarMatriz(size);
	//imprimir laberinto
	imprimirTablero(tablero, size);



	cout<<endl<<endl;
	cout<<"Jugador 1 ingresar color de pieza\n ";
	Pieza* p1;
	string c_p1;
	int color;
	switch (selectPiezas()){
		case 1:{
			p1=new PiezaAmarilla();
			c_p1="Amarilla";
			color=1;
			break;
		}
		case 2:{
			p1=new PiezaRoja();
			c_p1="Roja";
			color=2;
			break;
		}
		case 3:{
			p1=new PiezaVerde();
			c_p1="Verde";
			color=3;
			break;

		}case 4:{
			p1=new PiezaAzul();
			c_p1="Azul";
			color=4;
			break;
		}
	}
	cout<<"Jugador 2 ingresar color de pieza\n";
	Pieza* p2;
	string colorp2;
	int color2;
	color2=selectPiezas();
	while(color==color2){
		cout<<"El color le pertenece al Jugador 1\nVuelva Ingresar Color\n";
		color2=selectPiezas();
	}
	switch (color2){
		case 1:{
			p2=new PiezaAmarilla();
			break;
		}
		case 2:{
			p2=new PiezaRoja();
			break;
		}
		case 3:{
			p2=new PiezaVerde();
			break;

		}case 4:{
			p2=new PiezaAzul();
			break;
		}
	}


	bool ganador=false;
	int turno=1;
	
	while(!ganador){
		if(turno=1){
			int d1, d2;
			cout<<"Turno de Jugador 1"<<endl;
			cout<<"Lanzando Dados!"<<endl;
			d1=tiro();
			d2=tiro();
			cout<<"Dado 1= "<<d1<<"  Dado 2= "<<d2<<endl;
			if (p1->inTablero(d1,d2)){
				
			}
			

			turno=2;
		}else{
			int d1, d2;
			cout<<"Turno de Jugador 2"<<endl;
			cout<<"Lanzando Dados!"<<endl;
			d1=tiro();
			d2=tiro();
			cout<<"Dado 1= "<<d1<<"  Dado 2= "<<d2<<endl;
			p2->inTablero(d1,d2);
			



			turno=1;
		}




}

	

	//imprimir laberinto
	


	
}


void imprimirTableroJugador(char** matriz, int size) {
	for(int i = 0; i < size; i++) {
		for(int j = 0; j < size; j++) {
			if (i==15/2 && j==15/2)
			{
				matriz[i][j]='@';
			}else if(i==0 || j==0 || i==14 || j==14 )
			{
					matriz[i][j]='O';

			}else if(j==15/2 && i<15/2)
			{
				matriz[i][j]='r';
				
					 	
			}else if(j==15/2 && i>15/2)
			{
				matriz[i][j]='a';
				
					 	
			}else if(i==15/2 && j<15/2)
			{
				matriz[i][j]='v';
				
					 	
			}else if(i==15/2 && j>15/2)
			{
				matriz[i][j]='z';

			}else
			{
				matriz[i][j]='#';
			}

		}
		cout << endl;
	}
}



void imprimirTablero(char** matriz, int size) {
	for(int i = 0; i < size; i++) {
		for(int j = 0; j < size; j++) {
			if (i==15/2 && j==15/2)
			{
				matriz[i][j]='@';
				cout<<matriz[i][j];

			}else if(i==0 || j==0 || i==14 || j==14 )
			{
					matriz[i][j]='O';
					cout<<matriz[i][j];
					 

			}else if(j==15/2 && i<15/2)
			{
				matriz[i][j]='r';
				cout<<matriz[i][j];
					 	
			}else if(j==15/2 && i>15/2)
			{
				matriz[i][j]='a';
				cout<<matriz[i][j];
					 	
			}else if(i==15/2 && j<15/2)
			{
				matriz[i][j]='v';
				cout<<matriz[i][j];
					 	
			}else if(i==15/2 && j>15/2)
			{
				matriz[i][j]='z';
				cout<<matriz[i][j];

				

			}else
			{
				matriz[i][j]='#';
				cout<<matriz[i][j];
			}

		}
		cout << endl;
	}
}
int selectPiezas(){
	int opc;
	do{
		cout<<"1) Piezas Amarillas\n"<<
			  "2) Piezas Roja\n"<<
			  "3) Piezas Verde\n"<<
			  "4) Piezas Azul\n"<<
			  "Ingrese Opcion: ";
		cin>>opc;
		if(opc<1 || opc>4){
			cout<<"Opcion Invalida";
		}else{
			return opc;
		}
	}while(opc<1 || opc>4);
}

int tiro()
{
	int dado = rand()%6 +1;
	return dado;
}


char** inicializarMatriz(int size) {
	char** retval = new char*[size];

	for(int i = 0; i < size; i++) {
		retval[i] = new char[size];
	}

	return retval;
}






