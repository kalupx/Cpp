#include "quadrado.h"

Quadrado::Quadrado(int lado, std::string nome, std::string cor) : _lado(lado), _nome(nome), _cor(cor)
{
}

std::string Quadrado::get_cor(){
    return _cor;
}
std::string Quadrado::get_nome(){
    return _nome;
}
double Quadrado::get_area(){
    return _lado*_lado;
}
double Quadrado::get_perimetro(){
    return 4*_lado;
}
    