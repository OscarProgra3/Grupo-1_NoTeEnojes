#include "PiezaAmarilla.h"

PiezaAmarilla::PiezaAmarilla(){
	pieza1.push_back(-1);
	pieza1.push_back(-1);
	
}
PiezaAmarilla::~PiezaAmarilla(){
}

void PiezaAmarilla::setPieza1(int x, int y){
	pieza1.at(0)=x;
	pieza1.at(1)=y;
}

vector<int> PiezaAmarilla::getPieza1(){
	return pieza1;
}

bool PiezaAmarilla::otraPieza(bool x){
	return false;
}
bool PiezaAmarilla::inTablero(int d1, int d2){
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
bool PiezaAmarilla::zonaColor(Pieza* pc){

	return false;
}
bool PiezaAmarilla::Comer(Pieza* pc,char**){
	return false;
}





