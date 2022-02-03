#ifndef ClasseEx_H_INCLUDED
#define ClasseEx_H_INCLUDED

class figuras
{
private:
    int comprimento = 8;
    int altura = 9;
public:
    int getaltura();
    int getcomprimento();
    void setaltura();
    void setcomprimento();
    int teste;
};

class retangulo:public figuras{
    public:
    retangulo();
    
};

retangulo::retangulo(){
    teste = 7;
}

int figuras::getaltura(){
    return altura;
}
int figuras::getcomprimento(){
    return comprimento;
}
void figuras::setaltura(){
    std::cin >> altura;
}
void figuras::setcomprimento(){
    std::cin >> comprimento;
}




#endif