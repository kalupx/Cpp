#include <iostream>
#include "pessoa.h"
#include "estudante.h"

int main(){
    Pessoa pessoa("Julio Reis");
    Estudante estudante("Jane Doe", 20180101);
    std::cout << "A pessoa e: " << pessoa.get_nome() << std::endl;
    std::cout << "O estudante e: " << estudante.get_nome() << std::endl;
    return 0;
};