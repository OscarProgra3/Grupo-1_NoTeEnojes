#include <ncurses.h>

#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
/*
#include "Pieza.h"
#include "PiezaAmarilla.h"
#include "PiezaAzul.h"
#include "PiezaRoja.h"
#include "PiezaVerde.h"
*/
using namespace std;

//Crea una matriz de chars de n * n
char** inicializarMatriz(int);
//Imprime el laberinto
void imprimirLaberinto(char**, int);

int tiro();



int main()
{

srand (time(NULL));

	int dado1=tiro();

	cout<<"tiro de dado 1: "<<dado1<<endl;

	char** laberinto = NULL;
	int size=15;
	laberinto = inicializarMatriz(size);
	//imprimir laberinto
	imprimirLaberinto(laberinto, size);


	
}




void imprimirLaberinto(char** matriz, int size) {
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
				//cout<<matriz[i][j];

				/*start_color();
      			init_pair(1, COLOR_BLUE, COLOR_BLACK);
      			attron(COLOR_PAIR(1));
      			printf([%c],"asidunasdnoasnd");
      			//printw("[%c] ", matriz[i][j]);
				refresh();
				getch();
				
*/

			}else
			{
				matriz[i][j]='#';
				cout<<matriz[i][j];
			}

		}
		cout << endl;
	}
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




	return 0;	
}

