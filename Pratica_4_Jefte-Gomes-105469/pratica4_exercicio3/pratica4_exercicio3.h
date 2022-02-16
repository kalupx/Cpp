#ifndef AQUECEDOR_H
#define AQUECEDOR_H 
 
class Aquecedor{
    private:
        float temperatura;
    public:
        Aquecedor();
        Aquecedor(float t1);
        Aquecedor(float t1, float t2);
        
        float getTemperatura();
        void aquecer();
        void esfriar();

};
Aquecedor::Aquecedor(): temperatura(20) {}
Aquecedor::Aquecedor(float t1): temperatura(t1) {}
Aquecedor::Aquecedor(float t1, float t2): temperatura(t2) {}

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