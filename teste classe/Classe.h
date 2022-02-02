#ifndef AVIAO_H_INCLUDED
#define AVIAO_H_INCLUDED

class Aviao{
public:
    int vel=0;
    int VelMax;
    std::string tipo;
    Aviao(int tp);
    void imprimir();
private:

};

Aviao::Aviao(int tp){
    if(tp==1){
        tipo="jato";
        VelMax=800;
    }
    if(tp==2){
        tipo="monomotor";
        VelMax=350;
    }
    if(tp==3){
        tipo="planador";
        VelMax=180;
    }
}

void Aviao::imprimir(){
    std::cout << "tipo: " << tipo << std::endl;
    std::cout << "velocidade maxima " << VelMax << std::endl;
    std::cout << "velocidade atual: " << vel << std::endl;
}

#endif