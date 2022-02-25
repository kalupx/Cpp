#ifndef INF112_TURMA_H
#define INF112_TURMA_H
#include <string>

class Turma
{
private:
    std::string _codigo;
    int _ano;
public:
    Turma(std::string codigo, int ano);
    virtual void set_codigo(std::string codigo);
    virtual std::string get_codigo();
    virtual void set_ano(int ano);
    virtual int get_ano();

};

Turma::Turma(std::string codigo, int ano) : _codigo(codigo), _ano(ano)
{
}

void Turma::set_codigo(std::string codigo){
    this->_codigo = codigo;
}

std::string Turma::get_codigo(){
    return _codigo;
}

void Turma::set_ano(int ano){
    this->_ano = ano;
}

int Turma::get_ano(){
    return _ano;
}
#endif