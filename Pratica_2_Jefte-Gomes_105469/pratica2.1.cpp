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
    cout << endl;
}


void contaParImpar ( int *ptra, int *ptrb , int n , int &par , int &impar) {
    for (int i = 0; i < n; i++)
    {   
        if((*(ptra+i)+*(ptrb+i)) % 2 == 0){
            par++;
        }
        else{
            impar++;
        }
    }
    
}



int main () {
    unsigned seed = time(0);

    srand(seed);

    int *a, *b, n, impar = 0, par = 0;
    
    cin >> n;

    a = (int *) malloc(sizeof(int)*n);
    b = (int *) malloc(sizeof(int)*n);
    
    preencheAleatorios(a, n);
    preencheAleatorios(b, n);
    
    imprime(a, n);
    imprime(b, n);

    contaParImpar(a, b, n, par, impar);

    cout << "jogadas pares: " << par << endl;
    cout << "jogadas impares: " << impar << endl;
return 0;
}
