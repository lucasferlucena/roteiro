#include <iostream>
#include <string>
#include "FiguraGeometrica.h"
#include "Triangulo.h"
using namespace std;

Triangulo::Triangulo(std::string n,float b,  float a){
	setNome(n);
	setBase(b);
	setAltura(a);
}

void Triangulo::calcularArea(){

	float area;

	area = (getBase()*getAltura())/2;

	cout <<"A area do "<<getNome()<< " de altura "<< getAltura() <<" e base "<< getBase()<< " eh "<< area<< endl;

}