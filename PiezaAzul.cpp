#include "PiezaAzul.h"

PiezaAzul::PiezaAzul(){
	pieza1.push_back(-1);
	pieza1.push_back(-1);

	pieza2.push_back(-1);
	pieza2.push_back(-1);

	pieza3.push_back(-1);
	pieza3.push_back(-1);

	pieza4.push_back(-1);
	pieza4.push_back(-1);
	
}
PiezaAzul::~PiezaAzul(){

}


void PiezaAzul::setPieza1(int x, int y){
	pieza1.at(0)=x;
	pieza1.at(1)=y;
}

vector<int> PiezaAzul::getPieza1(){
	return pieza1;
}

void PiezaAzul::setPieza2(int x, int y){
	pieza2.at(0)=x;
	pieza2.at(1)=y;
}

vector<int> PiezaAzul::getPieza2(){
	return pieza2;
}

void PiezaAzul::setPieza3(int x, int y){
	pieza3.at(0)=x;
	pieza3.at(1)=y;
}

vector<int> PiezaAzul::getPieza3(){
	return pieza3;
}

bool PiezaAzul::otraPieza(bool x){
	return false;
}
bool PiezaAzul::inTablero(int d1, int d2){
	if((d1==1 && d2==1)&&(d1==6 && d2==6) ){
		return true;

	}else{
		return false;
	}
}
bool PiezaAzul::zonaColor(Pieza* pc){
	return false;
}
bool PiezaAzul::Comer(Pieza* pc){
	return false;
}