#ifndef AQUECEDOR_H
#define AQUECEDOR_H 
 
class Aquecedor{
    private:
        float temperatura;
    public:
        Aquecedor();
        float getTemperatura();
        void aquecer();
        void esfriar();

};
Aquecedor::Aquecedor(): temperatura(20) {}

float Aquecedor::getTemperatura (){
    return temperatura;
}

void Aquecedor::aquecer(){
    temperatura+=5;
}
void Aquecedor::esfriar(){
    temperatura-=5;
}

#endif