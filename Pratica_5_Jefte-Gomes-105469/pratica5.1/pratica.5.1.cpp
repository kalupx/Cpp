#include <iostream>
#include "pessoa.h"
#include "estudante.h"
#include "turma.h"

int main(){
    /*
    Pessoa pessoa("Julio Reis");
    Estudante estudante("Jane Doe", 20180101);
    std::cout << "A pessoa e: " << pessoa.get_nome() << std::endl;
    std::cout << "O estudante e: " << estudante.get_nome() << std::endl;
    */
    //Turma t1("string", 2);
    //t1.set_codigo("5");
    //t1.set_ano(34);
    Estudante e1("jorge", "128312", 3, 4);
    std::cout << e1.get_nome();
    //std::cout << t1.get_ano() << std::endl;
    //std::cout << t1.get_codigo() << std::endl;
    
    return 0;
};