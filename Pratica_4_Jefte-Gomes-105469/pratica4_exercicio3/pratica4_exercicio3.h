#ifndef AQUECEDOR_H
#define AQUECEDOR_H 
 
class Aquecedor{
    private:
        float temperatura;
        float temperaturaminima;
        float temperaturamaxima;
        float fatordeincremento;
    public:
        Aquecedor();
        Aquecedor(float t1);
        Aquecedor(float t1, float t2);
        
        float getTemperatura();
        void aquecer();
        void esfriar();
        void setFatorDeIncrementoDaTemperatura(float fatordeincremento);
        
};
//construtor 1
Aquecedor::Aquecedor(): temperatura(20), temperaturaminima(10), temperaturamaxima(40), fatordeincremento(5) {}

//construtor 2
Aquecedor::Aquecedor(float t1): temperatura(t1), temperaturaminima(10), temperaturamaxima(40) {}

//construtor 3
Aquecedor::Aquecedor(float t1, float incremento): temperatura(t1), temperaturaminima(10), temperaturamaxima(40), fatordeincremento(incremento) {}

float Aquecedor::getTemperatura (){
    return temperatura;
}

void Aquecedor::aquecer(){
    if(temperatura+fatordeincremento<=temperaturamaxima)
        temperatura+=fatordeincremento;
    else{
        std::cout << "nao e possivel aumentar a temperatura pois excederia a temperatura maxima." << std::endl;
    }
}
void Aquecedor::esfriar(){
    if(temperatura-fatordeincremento>=temperaturaminima){
        temperatura-=fatordeincremento;
    }
    else{
        std::cout << "nao e possivel reduzir a temperatura pois excederia a temperatura minima." << std::endl;
    }
    
}

void Aquecedor::setFatorDeIncrementoDaTemperatura(float fatordeincremento){
    this->fatordeincremento = fatordeincremento;
}
#endif