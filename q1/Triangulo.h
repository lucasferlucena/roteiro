#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "FiguraGeometrica.h"
#include <string>

class Triangulo: public FiguraGeometrica{
private:
	float base, altura;
public:
	Triangulo(std::string, float, float);
	void setBase(float b){base = b;}
	float getBase(){return base;}
	void setAltura(float a){altura = a;}
	float getAltura(){return altura;}
	virtual void calcularArea();


};

#endif