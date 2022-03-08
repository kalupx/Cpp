#include "cubo.h"
#include <string>

Cubo::Cubo(double lado, std::string nome, std::string cor) : _lado(lado), _nome(nome), _cor(cor)
{
}

std::string Cubo::get_cor(){
    return _cor;
}
std::string Cubo::get_nome(){
    return _nome;
}
double Cubo::get_volume(){
    return _lado*_lado*_lado;
}
