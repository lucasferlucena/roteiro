#include <iostream>
#include <string>
#include "Funcionario.h"
#include "Consultor.h"

using namespace std;

int main(){
	Consultor a("Lucas", 2016, 1000);
	cout << a.getSal() << endl;
	cout << a.getSal(50) << endl;

	return 0;
}