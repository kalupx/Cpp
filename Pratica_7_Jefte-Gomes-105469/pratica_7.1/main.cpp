#include <iostream>
#include "ExcecaoSoma.h"

int main(){
    
    ExcecaoSoma ex;
    try{
        ex.somaValores(10);
        std::cout << "O resultado da soma foi: " << ex.get_n() << std::endl;
        std::cout << "A quantidade de numeros somados foi : " << ex.get_ctr() << std::endl;
        std::cout << "A media dos numeros somados foi: " << ex.get_med() << std::endl;
    }catch(std::invalid_argument &e){
        std::cout << e.what();
    }catch(std::overflow_error &e){
        std::cout << e.what();
    }
    

    return 0;
}