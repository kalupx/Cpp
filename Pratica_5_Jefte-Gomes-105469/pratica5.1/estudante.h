#ifndef INF112_ESTUDANTE_H
#define INF112_ESTUDANTE_H
#include "pessoa.h"

class Estudante : public Pessoa
{
private:
    const int _matricula;
public:
   Estudante(std::string nome, int matricula);
   int get_matricula() const;
};
#endif