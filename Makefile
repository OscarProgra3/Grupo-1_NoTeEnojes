Main.sex:	Pieza.o PiezaAmarilla.o PiezaAzul. PiezaRoja.o PiezaVerde.o
	g++ Main.o Pieza.o PiezaAmarilla.o PiezaAzul.o PiezaRoja.o PiezaVerde.o

Pieza.o:	Pieza.cpp Pieza.h
	g++ -c Pieza.cpp

PiezaAmarilla.o:	PiezaAmarilla.cpp PiezaAmarilla.h Pieza.h
	g++ -c PiezaAmarilla.cpp

PiezaAzul.o:	PiezaAzul.cpp PiezaAzul.h Pieza.h
	g++ -c PiezaAzul.cpp

PiezaRoja.o:	PiezaRoja.cpp PiezaRoja.h Pieza.h
	g++ -c PiezaRoja.cpp

PiezaVerde.o:	PiezaVerde.cpp PiezaVerde.h Pieza
	g++ -c PiezaVerde.cpp
clean:	
	rm *.o main