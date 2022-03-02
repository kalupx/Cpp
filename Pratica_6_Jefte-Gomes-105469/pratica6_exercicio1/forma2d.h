#ifndef FORMA2D_H_
#define FORMA2D_H_
#include "forma.h"
#include <string>
class Forma2d : public Forma
{
private:
    
public:
    virtual std::string get_cor() = 0;
    virtual std::string get_nome() = 0;
    virtual double get_area() = 0;
    virtual double get_perimetro() = 0;
    
};


#endif