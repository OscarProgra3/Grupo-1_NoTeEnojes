#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Pieza{
private:
	bool centro;
public:
	Pieza();
	virtual ~Pieza();
	bool otraPieza(bool);
	virtual bool inTablero(int,int);
	virtual bool zonaColor(Pieza*);
	virtual bool Comer(Pieza*);
};