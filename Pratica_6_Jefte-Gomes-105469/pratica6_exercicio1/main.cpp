#include <iostream>
//#include "forma2d.h"
#include "quadrado.h"
#include "circulo.h"
#include "triangulo.h"
//#include "forma3d.h"
int main(){
    
    // lado , nome , cor
    Quadrado q (2.0 , " Quadrado ", " Vermelho ") ;
    // raio , nome , cor
    Circulo c (3.0 , " Circulo ", " Azul ") ;
    // lado 1 , lado 2 , lado 3/ base , altura , nome , cor
    Triangulo t1 (7.0 , 3.0 , 4.0 , 2.0 , " TrianguloEscaleno ", " Amarelo ") ;
    // lado 1/ lado 2 , lado 3/ base , altura , nome , cor
    Triangulo t2 (3.0 , 4.0 , 2.0 , " Triangulo Isosceles ", " Rosa ") ;
    // lado 1/ base , altura , nome , cor
    Triangulo t3 (7.0 ,2.0 , " Triangulo Equilatero ", "Verde ") ;
    // raio , nome , cor
    
    std::cout << " Area : " << q.get_area() << " - Perimetro : " << q.get_perimetro() << " - Nome : " << q.get_nome() << " - Cor: " << q.get_cor() << std::endl ;

    std::cout << " Area : " << c.get_area() << " - Perimetro : " << c.get_perimetro() << " - Nome : " << c.get_nome() << " -  Cor: " << c.get_cor() << std::endl ;
    //continuar os teste com o pdf e fazer os obj 3d
    return 0;
}