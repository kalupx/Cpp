#include <iostream>
#include "ClasseEx.h"

using namespace std;

int main(){
cout << "o programa esta sendo executado" << endl;
    
    retangulo *ret1 = new  retangulo;
// <--------------ERROR--------------->
   /* cout << ret1->getaltura << endl;*/
   cout << ret1->getaltura() << endl;
    
    return 0;
}
