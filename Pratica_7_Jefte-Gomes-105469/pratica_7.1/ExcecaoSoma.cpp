#include "ExcecaoSoma.h"
#include <iostream>
ExcecaoSoma::ExcecaoSoma(){}


int ExcecaoSoma::somaValores(int x){
    int i = 0;
    if(x > 100){
         throw std::overflow_error("Nao consigo computar x > 100");
    }
    while(_n < x){
        std::cin >> i;
        if(i <= 0){
            throw std::invalid_argument("nao consigo computar numeros menores que 0");
        }
        if((_n + i) > x){
            break;
        }
        _n += i;
        _ctr++;
    }
    this->_med = _n/_ctr;
    return _n;
}

float ExcecaoSoma::get_med(){
        return this->_med;
}
int ExcecaoSoma::get_ctr(){
        return this->_ctr;
}
int ExcecaoSoma::get_n(){
        return this->_n;
}