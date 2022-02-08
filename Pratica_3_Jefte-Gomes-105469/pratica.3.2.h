#ifndef CUBO_H_INCLUDED
#define CUBO_H_INCLUDED

struct  Cubo
{
    float a;
    //construtor
    Cubo(float a){
        this->a = a;
    }

    ~Cubo();

    void calculaAreaCubo();

};


#endif