#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H
#include "package.h"

class OvernightPackage : public Package
{
private:
    float _Tx_night;
public:
    OvernightPackage(std::string nome, std::string endereco, float peso, float custo, float taxa);
    virtual double calculateCost() override;
    ~OvernightPackage();
};

OvernightPackage::OvernightPackage(std::string nome, std::string endereco, float peso, float custo, float taxa) : Package(nome, endereco, peso, custo), _Tx_night(taxa)
{
}

double  OvernightPackage::calculateCost(){
    return (get_custo()*get_peso() + (_Tx_night*get_peso()));

}

OvernightPackage::~OvernightPackage()
{
}

#endif