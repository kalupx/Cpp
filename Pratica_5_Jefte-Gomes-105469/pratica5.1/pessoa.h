#ifndef INF112_PESSOA_H
#define INF112_PESSOA_H
#include <string>

class Pessoa
{
private:
    const std::string _nome;
public:
    Pessoa(std::string nome);
    virtual std::string get_nome() const;
};

Pessoa::Pessoa(std::string nome): _nome(nome){}

std::string Pessoa::get_nome() const{
    return this->_nome;
}

#endif      