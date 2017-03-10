#include "Pieza.h"
#ifndef PIEZAAZUL_H
#define PIEZAAZUL_H

using namespace std;

class PiezaAzul :public Pieza{
private:
	vector<int> pieza1;
	vector<int> pieza2;
	vector<int> pieza3;
	vector<int> pieza4;
public:
	PiezaAzul();
	~PiezaAzul();
	void setPieza1(int,int);
	vector<int> getPieza1();

	void setPieza2(int,int);
	vector<int> getPieza2();
	
	void setPieza3(int,int);
	vector<int> getPieza3();

	void setPieza4(int,int);
	vector<int> getPieza4();

	virtual bool otraPieza(bool);

	virtual bool inTablero(int,int);
	
	virtual bool zonaColor(Pieza*);
	
	virtual bool Comer(Pieza*);
	
};
#endif