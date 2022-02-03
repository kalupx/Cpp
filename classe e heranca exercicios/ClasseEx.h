#ifndef ClasseEx_H_INCLUDED
#define ClasseEx_H_INCLUDED

class retangulo
{
private:
    int comprimento = 8;
    int altura = 9;
public:
    int getaltura();
    int getcomprimento();
    void setaltura();
    void setcomprimento();
};

int retangulo::getaltura(){
    return altura;
}
int retangulo::getcomprimento(){
    return comprimento;
}
void retangulo::setaltura(){
    std::cin >> altura;
}
void retangulo::setcomprimento(){
    std::cin >> comprimento;
}




#endif