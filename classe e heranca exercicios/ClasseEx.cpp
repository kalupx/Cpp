#include <iostream>
#include "ClasseEx.h"

using namespace std;

int main(){

    int x, y, ctr;
    
    figuras *ret1 = new  figuras;
    
    // <--------------ERROR--------------->
    /* cout << ret1->getaltura << endl;*/
    //erro na falta de "()";
    cout << "quantas areas voce quer calcular? ";
    cin >> ctr;
    
    y = ret1->getaltura();
    x = ret1->getcomprimento();
    cout << "area inicial do retangulo: " << x*y << endl;
    
    for (int i = 0; i < ctr; i++)
    {
        ret1->setaltura();
        ret1->setcomprimento();

        y = ret1->getaltura();
        x = ret1->getcomprimento();

        cout << "area do retangulo: " << x*y << endl;
    }
    
   
    return 0;
}
