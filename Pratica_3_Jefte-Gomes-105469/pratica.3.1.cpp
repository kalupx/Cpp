#include <iostream>
using namespace std;

struct ListaVetorInteiros {
 // Dados
 int *_elementos;
 int _num_elementos_inseridos;
 int _capacidade;
 // Construtor
 ListaVetorInteiros();
 // Destrutor
 ~ListaVetorInteiros();
 // Insere um inteiro na lista
 void inserir_elemento(int elemento);
 // Imprime a lista
 void imprimir();
};

int main () {
    ListaVetorInteiros l1 ;
    l1 . inserir_elemento (7) ;
    l1 . inserir_elemento (10) ;
    l1 . inserir_elemento (5) ;
    l1 . inserir_elemento (2) ;
    l1 . inserir_elemento (2) ;

    l1 . imprimir () ;
    // 7 , 10 , 5 , 2 , 1

    l1 . remover_primeiro () ;
    l1 . imprimir () ;
    // 10 , 5 , 2 , 1

    l1 . remover_ultimo () ;
    l1 . imprimir () ;
    // 10 , 5 , 2

    l1 . inverte () ;
    l1 . imprimir () ;
    //2 , 5 , 10

return 0;
}