#include <iostream>
#include "ClasseEx.h"

using namespace std;

int main(){
cout << "o programa esta sendo executado" << endl;
    int x, y;
    retangulo *ret1 = new  retangulo;
    // <--------------ERROR--------------->
    /* cout << ret1->getaltura << endl;*/
    //erro na falta de "()";
    y = ret1->getaltura();
    x = ret1->getcomprimento();
    cout << "area do retangulo: " << x*y << endl;

    ret1->setaltura();
    ret1->setcomprimento();

    y = ret1->getaltura();
    x = ret1->getcomprimento();

    cout << "area do retangulo" << x*y << endl;
    return 0;
}