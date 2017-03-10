#include <iostream>
#include <string>

class Pieza{
private:
	bool centro;
public:
	Pieza();
	Pieza(int,int);
	virtual otraPieza(bool);
	virtual bool inTablero(int,int);
	virtual bool zonaColor(Pieza*);
	virtual bool Comer(Pieza*);





};