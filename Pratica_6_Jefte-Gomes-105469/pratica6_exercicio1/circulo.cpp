#include "circulo.h"

Circulo::Circulo(int raio, std::string nome, std::string cor) : _raio(raio), _nome(nome), _cor(cor)
{
}

std::string Circulo::get_cor(){
    return _cor;
}
std::string Circulo::get_nome(){
    return _nome;
}
double Circulo::get_area(){
    return _raio*_raio*3;
}
double Circulo::get_perimetro(){
    return _raio*6;
}