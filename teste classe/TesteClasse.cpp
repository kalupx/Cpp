#include <iostream>
#include "Classe.h"

using namespace std;

int main(){
    int testmod;
    cin  >> testmod;
    Aviao *av1=new Aviao(testmod);
    testmod++;
    Aviao *av2=new Aviao(testmod);
    testmod++;
    Aviao *av3=new Aviao(testmod);

    av1->imprimir();
    av2->imprimir();
    av3->imprimir();

    return 0;
}