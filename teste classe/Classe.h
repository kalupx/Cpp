#ifndef AVIAO_H_INCLUDED
#define AVIAO_H_INCLUDED


class Aviao{
public:
    int vel = 0;
    int VelMax;
    std::string tipo;
    Aviao(int tp);
    void imprimir();
private:

};

Aviao::Aviao(int tp){
    if(tp == 1){
        tipo = "jato";
        VelMax = 800;
    }
}
void imprimir(){
    std::cout << "tipo: " << tipo << std::endl;
    std::cout << "velocidade maxima: " << std::endl;
    std::cout << "velocidade atual: " << std::endl;
}

#endif