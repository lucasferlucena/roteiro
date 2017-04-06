#include <iostream>
#include <string>
#include "FiguraGeometrica.h"
#include "Quadrado.h"
#include "Triangulo.h"
#include "Circulo.h"

int main(){

	Quadrado a("Quadrado", 10.0);
	Triangulo b("Triangulo", 20.0, 10.0);
	Circulo c("circulo", 10.0);

	a.calcularArea();
	b.calcularArea();
	c.calcularArea();

	return 0;


}