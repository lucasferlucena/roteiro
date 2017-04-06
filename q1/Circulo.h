#ifndef CIRCULO_H
#define CIRCULO_H
#include <string>
#include "FiguraGeometrica.h"

class Circulo: public FiguraGeometrica{
private:
	float raio;
public:
	Circulo(std::string, float);
	void setRaio(float r){raio = r;}
	float getRaio(){return raio;}
	virtual void calcularArea();	
};	

#endif