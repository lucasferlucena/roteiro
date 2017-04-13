#include <iostream>
#include <string>
#include "Medico.h"
#include "Oftamologista.h"
#include "Cirurgiao.h"
#include "Otorrino.h"
#include "Ginecologista.h"

using namespace std;


int main(){

    Cirurgiao a("Joao", 1.80, 85);
    Oftamologista b("Pedro", 1.80, 70);
    Otorrino c("Alan", 1.78, 85.5);
    Ginecologista d("Joana", 1.62, 60);

    cout << "Dr(a). " << a.getNome() << ", especializado(a) em " << a.getEspec() << " está: " 
    << a.cirurgiaCardiaca() << endl;

    cout << "Dr(a)." << a.getNome() << " tem " << a.getAltura() << "m e pesa " << a.getPeso() << " kg" << endl;
    
    cout << "Dr(a). " << b.getNome() << ", especializado(a) em " << b.getEspec() << " está: " 
    << b.exameDeVista() << endl;

    cout << "Dr(a)." << b.getNome() << " tem " << b.getAltura() << "m e pesa " << b.getPeso() << " kg" << endl;

    cout << "Dr(a). " << c.getNome() << ", especializado(a) em " << c.getEspec() << " está: " 
    << c.endoscopia() << endl;

    cout << "Dr(a)." << c.getNome() << " tem " << c.getAltura() << "m e pesa " << c.getPeso() << " kg" << endl;

    cout << "Dr(a). " << d.getNome() << ", especializado(a) em " << d.getEspec() << " está: " 
    << d.colposcopia() << endl;

    cout << "Dr(a)." << d.getNome() << " tem " << d.getAltura() << "m e pesa " << d.getPeso() << " kg" << endl;


    return 0;
}