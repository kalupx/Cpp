#include "esfera.h"
#include <string>


Esfera::Esfera(double raio, std::string nome, std::string cor) : _raio(raio), _nome(nome), _cor(cor)
{
}
double Esfera::get_volume(){
    double vol;
    vol = ((4)*(_raio*_raio*_raio));
    return vol;
}
std::string Esfera::get_cor(){
    return _cor;
}
std::string Esfera::get_nome(){
    return _nome;
}