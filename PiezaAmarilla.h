#include "Pieza.h"
#ifndef PIEZAAMARILLA_H
#define PIEZAAMARILLA_H

using namespace std;

class PiezaAmarilla : public Pieza
{
private:
	vector<int> pieza1;
public:
	PiezaAmarilla();
	~PiezaAmarilla();
	
	void setPieza1(int,int);
	vector<int> getPieza1();


	virtual bool otraPieza(bool);

	virtual bool inTablero(int,int);
	
	virtual bool zonaColor(Pieza*);
	
	virtual bool Comer(Pieza*, char**);

	
	
};
#endif