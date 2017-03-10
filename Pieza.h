#include <iostream>
#include <string>
#include <vector>

class Pieza{
private:
	bool centro;
public:
	Pieza();
	virtual bool otraPieza(bool);
	virtual bool inTablero(int,int);
	virtual bool zonaColor(Pieza*);
	virtual bool Comer(Pieza*);
};