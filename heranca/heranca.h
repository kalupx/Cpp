#ifndef VEICULO_H_INCLUDED
#define VEICULO_H_INCLUDED

class veiculo
{
private:
    /* data */
public:
    int rodas;
    //char cor[30];
    int portas;
};

//heranca
class moto:public veiculo{
    //construtor
    moto();
};
 
moto::moto(){
    rodas = 2;
    //cor = "vermelho";
    portas = 0;

}


#endif