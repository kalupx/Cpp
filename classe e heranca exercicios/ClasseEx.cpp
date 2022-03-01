#include "ClasseEx.h"
#include <iostream>
ClasseEx::ClasseEx(std::string animal1, std::string animal2) : _animal1(animal1), _animal2(animal2)
{
}

void ClasseEx::imprimir(){
    std::cout << "o animal 1 e: " << _animal1 << std::endl;
    std::cout << "o animal 2 e: " << _animal2 << std::endl;
}