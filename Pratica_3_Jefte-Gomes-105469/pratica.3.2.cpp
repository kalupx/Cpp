#include <iostream>
#include "pratica.3.2.h"

using namespace std;

float calculaAreaCubo (Cubo *cubo ){
    float a;
    a = 6*(cubo->a*cubo->a);
    return a;
}

float calculaVolumeCubo (Cubo *cubo ){
    int v;
    v = (cubo->a*cubo->a*cubo->a);
    return v;
}

int main () {
    float area , volume ;
    Cubo * cubo = new Cubo (3.0) ;
    area = calculaAreaCubo ( cubo ) ;
    cout << area << endl ;
    volume = calculaVolumeCubo ( cubo ) ;
    cout << volume << endl ;
    delete cubo ;

return 0;
}