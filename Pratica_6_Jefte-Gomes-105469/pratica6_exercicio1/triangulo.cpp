#include "triangulo.h"
#include <string>
//construtores
    Triangulo::Triangulo(int lado1, int lado2, int lado3, int altura, std::string nome, std::string cor) : _lado1(lado1), _lado2(lado2), _lado3(lado3), _altura(altura), _nome(nome), _cor(cor){}
    
    Triangulo::Triangulo(int lado1, int base, int altura, std::string nome, std::string cor) : _lado1(lado1), _lado2(lado1), _lado3(base), _altura(altura), _nome(nome), _cor(cor){}
    
    Triangulo::Triangulo(int lado, int altura, std::string nome, std::string cor) : _lado1(lado), _lado2(lado), _lado3(lado), _altura(altura), _nome(nome), _cor(cor){}

    //funcoes virtuais
    std::string Triangulo::get_cor(){
        return "get_Cor_Triangulo";
    }
    std::string Triangulo::get_nome(){
        return "get_nome_Triangulo";
    }
    double Triangulo::get_area(){
        return 37;
    }
    double Triangulo::get_perimetro(){
        return 38;
    }
    