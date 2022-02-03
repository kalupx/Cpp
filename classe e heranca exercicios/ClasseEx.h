#ifndef ClasseEx_H_INCLUDED
#define ClasseEx_H_INCLUDED

class retangulo
{
private:
    int comprimento = 10;
    int altura = 10;
public:
    int getaltura();
    int getcomprimento();
};

int retangulo::getaltura(){
    return altura;
}
int retangulo::getcomprimento(){
    return comprimento;
}




#endif