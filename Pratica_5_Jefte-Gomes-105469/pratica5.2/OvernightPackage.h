#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H
#include "package.h"

class OvernightPackage : public Package
{
private:
    /* data */
public:
    OvernightPackage(std::string nome, std::string endereco, float peso, float custo);
    ~OvernightPackage();
};

OvernightPackage::OvernightPackage(std::string nome, std::string endereco, float peso, float custo) : Package(nome, endereco, peso, custo)
{
}

OvernightPackage::~OvernightPackage()
{
}

#endif