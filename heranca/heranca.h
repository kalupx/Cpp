#ifndef VEICULO_H_INCLUDED
#define VEICULO_H_INCLUDED

class veiculo
{
private:
    /* data */
public:
    int rodas;
    int portas;
};

//heranca
class moto:public veiculo{
    //construtor
    public:
        moto();
        //detalhe, todos os att de motos estao sendo herdados, nao ha declaracao aqui;
};
 
moto::moto(){
    rodas = 2;
    portas = 0;
    
}


#endif