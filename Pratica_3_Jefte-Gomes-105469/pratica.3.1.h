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

void  ListaVetorInteiros::inserir_elemento(int elemento){
    if(_num_elementos_inseridos == TAMANHO){
        std::cerr << "Erro, lista cheia" << std::endl;
        exit(1);
    }
    _elementos[_num_elementos_inseridos] = elemento;
    _num_elementos_inseridos++;
}

void ListaVetorInteiros::imprimir(){
    for (int i = 0; i < _num_elementos_inseridos; i++)
    {
        std::cout << _elementos[i] << " ";
    }
    
}

ListaVetorInteiros::~ListaVetorInteiros(){
    delete[] _elementos;
}
#endif