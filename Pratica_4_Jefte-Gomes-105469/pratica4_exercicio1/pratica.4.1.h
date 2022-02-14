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
        if(lenght%20<0){
            this->lenght = (lenght%20)*-1;
        }
        else{
            this->lenght = lenght%20;
        }
    }
}
void Rectangle::setWidth(float width){
    this->width = width;
}
float Rectangle::calcPerimeter(){
    return (width*2)+(lenght*2);
}
float Rectangle::calcArea(){
    return width*lenght;
}
#endif