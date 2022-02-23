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
   Turma t1("32424", 21);
   t1.set_codigo("5");
   t1.set_ano(34);
   std::cout << t1.get_ano() << std::endl;
   std::cout << t1.get_codigo() << std::endl;

    return 0;
};