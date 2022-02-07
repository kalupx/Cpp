#include <iostream>
#include <vector>
#include "pratica.3.1.h"

using namespace std;

ListaVetorInteiros::ListaVetorInteiros(){
    _elementos = new int[TAMANHO];
    _num_elementos_inseridos = 0;
}

int main () {
    
    ListaVetorInteiros l1 ;
    
    l1.inserir_elemento (7) ;
    l1.inserir_elemento (10) ;
    l1.inserir_elemento (5) ;
    l1.inserir_elemento (2) ;
    l1.inserir_elemento (2) ;

    l1.imprimir () ;
    // 7 , 10 , 5 , 2 , 1


    l1.remover_primeiro () ;
    l1.imprimir () ;
    // 10 , 5 , 2 , 1
    
    l1.remover_ultimo () ;
    l1.imprimir () ;
    // 10 , 5 , 2
/*
    l1.inverte () ;
    l1.imprimir () ;
    //2 , 5 , 10
*/
return 0;
}