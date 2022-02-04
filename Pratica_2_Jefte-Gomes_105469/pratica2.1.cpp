#include <iostream>
#include <ctime>

using namespace std;


void preencheAleatorios ( int *ptr, int n) {
    for (int i = 0; i < n; i++)
    {
        *(ptr+i) = rand()%10;
    }
    
}


void imprime ( int *ptr , int n) {
    for (int i = 0; i < n; i++)
    {
        cout << *(ptr+i) << " ";
    }
}

/*
void contaParImpar ( int .. , int ... , int ... , int ... , int ...) {
// insira seu codigo aqui ...
}
*/


int main () {
// insira seu codigo aqui ...
    unsigned seed = time(0);

    srand(seed);

    int *a, *b, n;
    cin >> n;
    
    a = (int *) malloc(sizeof(int)*n);
    b = (int *) malloc(sizeof(int)*n);
    
    preencheAleatorios(a, n);
    preencheAleatorios(b, n);
    imprime(a, n);

return 0;
}