#include <iostream>
#include "pessoa.h"
#include "estudante.h"
#include "turma.h"

int main(){
    Estudante e1("jorge", "00", 1, 1054);

    std::cout << "Nome: " << e1.get_nome() << std::endl;
    std::cout << "Codigo: " << e1.get_codigo() << std::endl;
    std::cout << "Ano: " << e1.get_ano() << std::endl;
    std::cout << "Matricula: " << e1.get_matricula() << std::endl;
    std::cout << "Modificando valores......................" << std::endl << std::endl;

    e1.set_ano(2);
    e1.set_codigo("01");
    

    std::cout << "Valores modificados......................" << std::endl << std::endl;

    std::cout << "Nome: " << e1.get_nome() << std::endl;
    std::cout << "Codigo: " << e1.get_codigo() << std::endl;
    std::cout << "Ano: " << e1.get_ano() << std::endl;
    std::cout << "Matricula: " << e1.get_matricula() << std::endl;
    


    return 0;
}