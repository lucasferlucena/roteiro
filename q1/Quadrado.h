#ifndef QUADRADO_H
#define QUADRADO_H
#include <string>
#include "FiguraGeometrica.h"

class Quadrado: public FiguraGeometrica{
private:
	float lado;
public:
	Quadrado(std::string, float);
	void setLado(float l){lado = l;}
	float getLado(){return lado;}
	virtual void calcularArea();
};	

#endif