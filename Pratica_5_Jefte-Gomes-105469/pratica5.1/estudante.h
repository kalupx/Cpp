#ifndef INF112_ESTUDANTE_H
#define INF112_ESTUDANTE_H
#include "pessoa.h"
#include "turma.h"

class Estudante : public Pessoa
{
private:
    Turma turma;
    const int _matricula;
public:
    Estudante(std::string nome, std::string codigo, int ano, int matricula);
    //getters
    int get_matricula() const;
    std::string get_codigo();
    int get_ano();
    //setters
    void set_codigo(std::string codigo);
    void set_ano(int ano);
};

Estudante::Estudante(std::string nome, std::string codigo, int ano, int matricula) : Pessoa(nome), turma(codigo, ano), _matricula(matricula) {}
//getters
int Estudante::get_matricula() const
{
    return this-> _matricula;
}
std::string Estudante::get_codigo(){
    return turma.get_codigo();
}

int Estudante::get_ano(){
    return turma.get_ano();
}

//setters
void Estudante::set_codigo(std::string codigo){
    turma.set_codigo(codigo);
}

void Estudante::set_ano(int ano){
    turma.set_ano(ano);
}
#endif      