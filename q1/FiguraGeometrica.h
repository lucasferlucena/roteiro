#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <string>

class FiguraGeometrica{
private:
	std::string nome;
public:
	std::string getNome(){return nome;}
	void setNome(std::string n);
	virtual void calcularArea() = 0;
};

#endif