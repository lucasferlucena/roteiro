#include <iostream>
#include <string>
#include "FiguraGeometrica.h"
#include "Circulo.h"
using namespace std;

Circulo::Circulo(std::string n,float b){
	setNome(n);
	setRaio(b);
}

void Circulo::calcularArea(){

	float area;

	area = 3.1415*getRaio()*getRaio();

	cout <<"A area do "<<getNome()<< " de Raio "<< getRaio()<< " eh "<< area<< endl;

}