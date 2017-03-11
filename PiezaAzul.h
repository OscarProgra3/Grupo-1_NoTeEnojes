#include "Pieza.h"
#ifndef PIEZAAZUL_H
#define PIEZAAZUL_H

using namespace std;

class PiezaAzul :public Pieza{
private:
	vector<int> pieza1;
	
public:
	PiezaAzul();
	~PiezaAzul();
	
	void setPieza1(int,int);
	vector<int> getPieza1();


	virtual bool otraPieza(bool);

	virtual bool inTablero(int,int);
	
	virtual bool zonaColor(Pieza*);
	
	virtual bool Comer(Pieza*);
	
};
#endif