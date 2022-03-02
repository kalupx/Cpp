#ifndef FORMA2D_H_
#define FORMA2D_H_
#include "forma.h"
#include <string>
class Forma2d : public Forma
{
private:
    std::string _cor = "vermelho";
    std::string _nome = "robson";
public:
    Forma2d();
    virtual std::string get_cor();
    virtual std::string get_nome();
    
};
/*
Forma2d::Forma2d()
{
}

std::string Forma2d::get_cor(){
    return _cor;
}

std::string Forma2d::get_nome(){
    return _nome;
}*/
#endif