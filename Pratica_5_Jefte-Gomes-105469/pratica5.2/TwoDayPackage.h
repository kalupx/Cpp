#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H
#include "package.h"

class TwoDayPackage : public Package
{
private:
    /* data */
public:
    TwoDayPackage(std::string nome, std::string endereco, float peso, float custo);
    ~TwoDayPackage();
};

TwoDayPackage::TwoDayPackage(std::string nome, std::string endereco, float peso, float custo) : Package(nome, endereco, peso, custo)
{
}



TwoDayPackage::~TwoDayPackage()
{
}

#endif