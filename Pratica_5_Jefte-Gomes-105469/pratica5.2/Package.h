#ifndef PACKAGE_H
#define PACKAGE_H
#include <string>
class Package
{
private:
    std::string _nome;
    std::string _endereco;
    float _peso, _custo;
public:
    Package(std::string nome, std::string endereco, float peso, float custo);
    ~Package();
};

Package::Package(std::string nome, std::string endereco, float peso, float custo) : _nome(nome), _endereco(endereco), _peso(peso), _custo(custo)
{
}

Package::~Package()
{
}

#endif