#ifndef QUADRADO_H_
#define QUADRADO_H_
#include "forma2d.h"


class Quadrado : public Forma2d
{
private:
    
public:
    Quadrado();
    virtual std::string get_cor();
    virtual std::string get_nome();
    virtual double get_area();
    virtual double get_perimetro();
    
};


#endif