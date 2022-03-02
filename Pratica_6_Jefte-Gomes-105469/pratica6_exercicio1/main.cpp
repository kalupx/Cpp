#include <iostream>
#include "forma2d.h"
#include "quadrado.h"
int main(){

    Quadrado q1;

    std::cout << q1.get_area() << std::endl;
    std::cout << q1.get_cor() << std::endl;
    std::cout << q1.get_nome() << std::endl;
    std::cout << q1.get_perimetro() << std::endl;

    
    return 0;
}