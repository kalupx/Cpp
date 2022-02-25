#ifndef PACKAGE_H
#define PACKAGE_H
#include <string>
class Package
{
private:
    std::string _nome;
    std::string _endereco;
    unsigned int _peso, _custo;
public:
    Package(std::string nome, std::string endereco, unsigned int peso, unsigned int custo);
    //getters
    std::string get_nome();
    std::string get_endereco();
    float get_peso();
    float get_custo();
    
    //setters
    void set_nome(std::string nome);
    void set_endereco(std::string endereco);
    void set_peso(float peso);
    void set_custo(float custo);
    ~Package();

    //outros metodos
    double calculateCost();
};

Package::Package(std::string nome, std::string endereco, unsigned int peso, unsigned int custo) : _nome(nome), _endereco(endereco), _peso(peso), _custo(custo)
{
}

//getters

std::string Package::get_nome(){
    return this->_nome;
}
std::string Package::get_endereco(){
    return this->_endereco;
}
float Package::get_peso(){
    return this->_peso;
}
float Package::get_custo(){
    return this->_custo;
}

//setters

void Package::set_nome(std::string nome){
    this->_nome = nome;
}
void Package::set_endereco(std::string endereco){
    this->_endereco = endereco;
}
void Package::set_peso(float peso){
    this->_peso = peso;
}
void Package::set_custo(float custo){
    this->_custo=custo;
}

//outros metodos

double Package::calculateCost(){
    return (get_custo()*get_peso());
}

Package::~Package()
{
}

#endif