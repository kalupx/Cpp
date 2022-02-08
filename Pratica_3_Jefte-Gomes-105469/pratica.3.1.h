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
    
    void remover_primeiro ();

    void remover_ultimo ();

    void inverte () ;
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
    std::cout << std::endl;
    
}

void ListaVetorInteiros::remover_primeiro (){
    for (int i = 0; i < _num_elementos_inseridos; i++)
    {
        if(i == 0){
            _elementos[i] = 0;
        }
        else{
            _elementos[i-1] = _elementos[i];
        }
    }
    _num_elementos_inseridos--;
}

void ListaVetorInteiros::remover_ultimo (){
    _num_elementos_inseridos--;
}

void ListaVetorInteiros::inverte(){
    int aux = _elementos[_num_elementos_inseridos];
    int control = 0;
    //corrigir a troca;
    for (int i = _num_elementos_inseridos-1); i >= 0; i--)
    {
        _elementos[_num_elementos_inseridos] = _elementos[control];
        control++;
    }
    
}

ListaVetorInteiros::~ListaVetorInteiros(){
    delete[] _elementos;
}
#endif