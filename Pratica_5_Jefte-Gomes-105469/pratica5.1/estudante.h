#ifndef INF112_ESTUDANTE_H
#define INF112_ESTUDANTE_H
#include "pessoa.h"
#include "turma.h"
//Turma turma;
//Turma *ptrturma = &turma;

class Estudante : public Pessoa
{
private:
    //Turma turma;
    const int _matricula;
public:
    Estudante(std::string nome, int matricula);
    int get_matricula() const;
    
};

Estudante::Estudante(std::string nome, int matricula) : Pessoa(nome), _matricula(matricula)
{
}

int Estudante::get_matricula() const{
    return this->_matricula;
}


#endif