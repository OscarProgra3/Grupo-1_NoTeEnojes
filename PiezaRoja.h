#include "Pieza.h"
#ifndef PIEZAROJA_H
#define PIEZAROJA_H

using namespace std;

class PiezaRoja :public Pieza{
private:
	vector<int> pieza1;
	
public:
	PiezaRoja();
	~PiezaRoja();
	void setPieza1(int,int);
	vector<int> getPieza1();

	
	virtual bool otraPieza(bool);

	virtual bool inTablero(int,int);
	
	virtual bool zonaColor(Pieza*);
	
	virtual bool Comer(Pieza*);
};
#endif