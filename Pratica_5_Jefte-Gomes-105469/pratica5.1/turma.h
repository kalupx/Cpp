#ifndef INF112_TURMA_H
#define INF112_TURMA_H
#include <string>

class Turma
{
private:
    std::string _codigo;
    int _ano;
public:
    Turma();
    Turma(std::string codigo, int ano);
    virtual std::string get_codigo();
    virtual int get_ano();
    virtual void set_codigo(std::string codigo);
    virtual void set_ano(int ano);
};
//criando um construtor sem argumentos
Turma::Turma(){
    this->_codigo = "null";
    this->_ano = 0;
}
Turma::Turma(std::string codigo, int ano) : _codigo(codigo), _ano(ano)
{
}

std::string Turma::get_codigo(){
    return this->_codigo;
}

int Turma::get_ano(){
    return this->_ano;
}

void Turma::set_codigo(std::string codigo){
    _codigo = codigo;
}
void Turma::set_ano(int ano){
    _ano = ano;
}
#endif