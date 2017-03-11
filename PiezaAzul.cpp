#include "PiezaAzul.h"

PiezaAzul::PiezaAzul(){
	pieza1.push_back(-1);
	pieza1.push_back(-1);

	
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

bool PiezaAzul::otraPieza(bool x){
	return false;
}
bool PiezaAzul::inTablero(int d1, int d2){
	if((d1==1 && d2==1)&&(d1==6 && d2==6) ){
		cout<<"Entro al tablero";
		pieza1.at(0)=14;
		pieza1.at(1)=14;

		

		return true;
	}else{
		cout<<"No par de 1 o 6\n";
		return false;
	}
}
bool PiezaAzul::zonaColor(Pieza* pc){
	return false;
}
bool PiezaAzul::Comer(Pieza* pc){
	return false;
}