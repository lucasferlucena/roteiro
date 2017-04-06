#include <iostream>
#include <string>
#include "FiguraGeometrica.h"
#include "Quadrado.h"
using namespace std;

Quadrado::Quadrado(std::string n, float l){
	setNome(n);
	setLado(l);
}

void Quadrado::calcularArea(){

	float area;

	area = getLado()*getLado();

	cout <<"A area do "<<getNome()<< " de lado "<< getLado() << " eh "<< area<< endl;

}