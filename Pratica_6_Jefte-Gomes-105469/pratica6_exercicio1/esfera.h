#ifndef ESFERA_H_
#define ESFERA_H
#include "forma3d.h"

class Esfera : public Forma3d
{
private:
    double _raio;
    std::string _nome;
    std::string _cor;
public:
    Esfera(double raio, std::string nome, std::string cor);
    virtual double get_volume();
    virtual std::string get_cor();
    virtual std::string get_nome();
};




#endif