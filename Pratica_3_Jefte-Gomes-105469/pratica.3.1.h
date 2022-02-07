#ifndef HEADE_H_INCLUDED
#define HEADER_H_INCLUDED
#define TAMANHO 100

struct ListaVetorInteiros{

    int *_elementos;
    int _num_elementos_inseridos;

    ListaVetorInteiros();

    ~ListaVetorInteiros();

    void inserir_elemento(int elemento);

    void imprimir();
};


#endif