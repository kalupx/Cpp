#ifndef FORMA3D_H_
#define FORMA3D_H_
#include "forma.h"
#include <string>


class Forma3d : public Forma
{
private:
public:
    virtual std::string get_cor() = 0;
    virtual std::string get_nome() = 0;
    virtual double get_volume() = 0;
};




#endif