#ifndef RETANGULO_H
#define RETANGULO_H

class Rectangle{
private:
    float width, lenght;
public:
    Rectangle();
    float getLength();
    float getWidth();
    void setLenght(float lenght);
    void setWidth(float width);
    float calcPerimeter();
    float calcArea();
};
Rectangle::Rectangle(): width(1), lenght(1){}

float Rectangle::getLength(){
    return lenght;
}
float Rectangle::getWidth(){
    return width;
}
void Rectangle::setLenght(float lenght){
    if(lenght <=20 && lenght >= 0){
        this->lenght = lenght;
    }
    else{
        if(lenght < 0){
            std::cout << "length negativo" << std::endl;
            lenght*=-1;
            this->lenght = lenght;
        }
        else{
            std::cout << "length maior que 20" << std::endl;
            this->lenght = lenght;
        }
    }
}
void Rectangle::setWidth(float width){
    if(width <=20 && width >= 0){
        this->width = width;
    }
    else{
        if(width < 0){
            std::cout << "width negativo" << std::endl;
            width*=-1;
            this->width = width;
        }
        else{
            std::cout << "width maior que 20" << std::endl;
            this->width = width;
        }
    }
}
float Rectangle::calcPerimeter(){
    return ((lenght+width)*2);
}
float Rectangle::calcArea(){
    return width*lenght;
}
#endif