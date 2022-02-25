#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H
#include "package.h"

class TwoDayPackage : public Package
{
private:
    float _Tx_twodays;
public:
    TwoDayPackage(std::string nome, std::string endereco, float peso, float custo, float taxa);
    ~TwoDayPackage();
};

TwoDayPackage::TwoDayPackage(std::string nome, std::string endereco, float peso, float custo, float taxa) : Package(nome, endereco, peso, custo), _Tx_twodays(taxa)
{
}



TwoDayPackage::~TwoDayPackage()
{
}

#endif