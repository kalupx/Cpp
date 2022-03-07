#ifndef CIRCULO_H_
#define CIRCULO_H_
#include "forma2d.h"


class Circulo : public Forma2d
{
private:
    
public:
    Circulo();
    virtual std::string get_cor();
    virtual std::string get_nome();
    virtual double get_area();
    virtual double get_perimetro();
    
};


#endif