#ifndef CLASSEX_H
#define CLASSEX_H
#include <string>
#include "Classeif.h"

class ClasseEx : public Classeif
{
private:
    std::string _animal1;
    std::string _animal2;
public:
    ClasseEx(std::string animal1, std::string animal2);
    virtual void imprimir();
};





#endif