#include "PiezaRoja.h"

PiezaRoja::PiezaRoja(){
	pieza1.push_back(-1);
	pieza1.push_back(-1);

	pieza2.push_back(-1);
	pieza2.push_back(-1);

	pieza3.push_back(-1);
	pieza3.push_back(-1);

	pieza4.push_back(-1);
	pieza4.push_back(-1);
	
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

void PiezaRoja::setPieza2(int x, int y){
	pieza2.at(0)=x;
	pieza2.at(1)=y;
}

vector<int> PiezaRoja::getPieza2(){
	return pieza2;
}

void PiezaRoja::setPieza3(int x, int y){
	pieza3.at(0)=x;
	pieza3.at(1)=y;
}

vector<int> PiezaRoja::getPieza3(){
	return pieza3;
}

bool PiezaRoja::otraPieza(bool x){
	return false;
}
bool PiezaRoja::inTablero(int d1, int d2){
	if((d1==1 && d2==1)&&(d1==6 && d2==6) ){
		return true;

	}else{
		return false;
	}
}
bool PiezaRoja::zonaColor(Pieza* pc){
	return false;
}
bool PiezaRoja::Comer(Pieza* pc){
	return false;
}