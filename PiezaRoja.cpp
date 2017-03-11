#include "PiezaRoja.h"

PiezaRoja::PiezaRoja(){
	pieza1.push_back(-1);
	pieza1.push_back(-1);

	
}
PiezaRoja::~PiezaRoja(){
}
void PiezaRoja::setPieza1(int x, int y){
	pieza1.at(0)=x;
	pieza1.at(1)=y;
}

vector<int> PiezaRoja::getPieza1(){
	return pieza1;
}


bool PiezaRoja::otraPieza(bool x){
	return false;
}
bool PiezaRoja::inTablero(int d1, int d2){
	if((d1==1 && d2==1)&&(d1==6 && d2==6) ){
		cout<<"Entro al tablero";
		pieza1.at(0)=0;
		pieza1.at(1)=14;


		return true;

	}else{
		cout<<"No par de 1 o 6\n";
		return false;
	}
}
bool PiezaRoja::zonaColor(Pieza* pc){
	return false;
}
bool PiezaRoja::Comer(Pieza* pc){
	return false;
}