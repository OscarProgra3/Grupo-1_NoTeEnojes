#include "PiezaAmarilla.h"

PiezaAmarilla::PiezaAmarilla(){
	pieza1.push_back(NULL);
	pieza1.push_back(NULL);

	pieza2.push_back(NULL);
	pieza2.push_back(NULL);
	
	pieza3.push_back(NULL);
	pieza3.push_back(NULL);
	
}

void PiezaAmarilla::setPieza1(int x, int y){
	pieza1.at(0)=x;
	pieza1.at(1)=y;
}

vector<int> PiezaAmarilla::getPieza1(){
	return pieza1;
}

void PiezaAmarilla::setPieza2(int x, int y){
	pieza2.at(0)=x;
	pieza2.at(1)=y;
}

vector<int> PiezaAmarilla::getPieza2(){
	return pieza2;
}

void PiezaAmarilla::setPieza3(int x, int y){
	pieza3.at(0)=x;
	pieza3.at(1)=y;
}

vector<int> PiezaAmarilla::getPieza3(){
	return pieza3;
}

bool PiezaAmarilla::otraPieza(bool x){
	return false;
}
bool PiezaAmarilla::inTablero(int d1, int d2){
	if((d1==1 && d2==1)&&(d1==6 && d2==6) ){
		return true;

	}else{
		return false;
	}
}
bool PiezaAmarilla::zonaColor(Pieza* pc){
	return false;
}
bool PiezaAmarilla::Comer(Pieza* pc){
	return false;
}




