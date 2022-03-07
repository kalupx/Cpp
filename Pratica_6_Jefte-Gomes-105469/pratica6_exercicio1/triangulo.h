#ifndef TRIANGULO_H_
#define TRIANGULO_H_
#include <string>
#include "forma2d.h"

class Triangulo : public Forma2d
{
private:
    int _lado1, _lado2, _lado3, _altura;
    std::string _nome;
    std::string _cor;
public:
    //construtores
    Triangulo(int lado1, int lado2, int lado3, int altura, std::string nome, std::string cor);
    Triangulo(int lado1, int base, int altura, std::string nome, std::string cor);
    Triangulo(int lado, int altura, std::string nome, std::string cor);

    //funcoes virtuais
    virtual std::string get_cor();
    virtual std::string get_nome();
    virtual double get_area();
    virtual double get_perimetro();
};



#endif