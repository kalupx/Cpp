#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED

struct Data{
    int dia, mes, ano;

    Data(int dia, int mes, int ano);
    void exibirDataFormatoNumero();
    void exibirDataPorExtenso();
    void getDataEmSegundos();
    
    };
Data::Data(int dia, int mes, int ano){
    this->dia = dia;
    this->mes = mes;
    this->ano = ano;
};
void Data::exibirDataFormatoNumero(){
    std::cout << dia << "/" << mes << "/" << ano << std::endl;
};
void Data::exibirDataPorExtenso(){};
void Data::getDataEmSegundos(){};
#endif