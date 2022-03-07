#ifndef QUADRADO_H_
#define QUADRADO_H_
#include "forma2d.h"
#include <string>


class Quadrado : public Forma2d
{
private:
    int _lado;
    std::string _nome;
    std::string _cor;
public:
    Quadrado(int lado, std::string nome, std::string cor);
    virtual std::string get_cor();
    virtual std::string get_nome();
    virtual double get_area();
    virtual double get_perimetro();
    
};


#endif