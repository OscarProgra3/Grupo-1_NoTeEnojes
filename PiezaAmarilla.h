#ifndef PIEZAAMARILLA_H
#define PIEZAAMARILLA_H

using namespace std;

class PiezaAmarilla :public Pieza{
private:
	vector<int> pieza1;
	vector<int> pieza2;
	vector<int> pieza3;
	vector<int> pieza4;
	
public:
	PiezaAmarilla();
	void setPieza1(int,int);
	vector<int> getPieza1();

	void setPieza2(int,int);
	vector<int> getPieza2();
	
	void setPieza2(int,int);
	vector<int> getPieza2();

	void setPieza2(int,int);
	vector<int> getPieza2();

	virtual bool otraPieza(bool);

	virtual bool inTablero(int,int);
	
	virtual bool zonaColor(Pieza*);
	
	virtual bool Comer(Pieza*);
	
};
#endif