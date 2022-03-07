#ifndef CIRCULO_H_
#define CIRCULO_H_
#include "forma2d.h"
#include <string>

class Circulo : public Forma2d
{
private:
    int _raio;
    std::string _nome;
    std::string _cor;
public:
    Circulo(int raio, std::string nome, std::string cor);
    virtual std::string get_cor();
    virtual std::string get_nome();
    virtual double get_area();
    virtual double get_perimetro();
    
};


#endif