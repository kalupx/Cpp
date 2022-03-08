#ifndef CUBO_H_
#define CUBO_H_
#include "forma3d.h"


class Cubo : public Forma3d
{
private:
    double _lado;
    std::string _nome;
    std::string _cor;
public:
    Cubo(double lado, std::string nome, std::string cor);
    virtual std::string get_cor();
    virtual std::string get_nome();
    virtual double get_volume();
};


#endif