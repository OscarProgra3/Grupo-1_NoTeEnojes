Main.sex:	Main.o Pieza.o PiezaAmarilla.o PiezaAzul.o PiezaRoja.o PiezaVerde.o
	g++ Main.o Pieza.o PiezaAmarilla.o PiezaAzul.o PiezaRoja.o PiezaVerde.o -o Main

Main.o:	Main.cpp Pieza.h PiezaAmarilla.h PiezaAzul.h PiezaVerde.h PiezaRoja.h
	g++ -c Main.cpp -Incurses

Pieza.o:	Pieza.cpp Pieza.h
	g++ -c Pieza.cpp

PiezaAmarilla.o:	PiezaAmarilla.cpp PiezaAmarilla.h Pieza.h
	g++ -c PiezaAmarilla.cpp

PiezaAzul.o:	PiezaAzul.cpp PiezaAzul.h Pieza.h
	g++ -c PiezaAzul.cpp

PiezaRoja.o:	PiezaRoja.cpp PiezaRoja.h Pieza.h
	g++ -c PiezaRoja.cpp

PiezaVerde.o:	PiezaVerde.cpp PiezaVerde.h Pieza.h
	g++ -c PiezaVerde.cpp
clean:	
	rm *.o main