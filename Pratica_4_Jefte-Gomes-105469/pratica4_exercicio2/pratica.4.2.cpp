#include <iostream>
#include "pratica.4.2.h"

int main () {


Aquecedor aq1 ;

std :: cout << aq1 . getTemperatura() << std :: endl ;

aq1 . aquecer () ;
std :: cout << aq1 . getTemperatura () << std :: endl ;

aq1 . esfriar () ;
aq1 . esfriar () ;

std :: cout << aq1 . getTemperatura () << std :: endl ;

return 0;
}
