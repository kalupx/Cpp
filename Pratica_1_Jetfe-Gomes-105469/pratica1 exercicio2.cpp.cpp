#include <iostream>
using namespace std;

void leiaInteiros1( int &a , int &b) {
    cin >> a >> b;
}

void leiaInteiros2( int *a , int *b) {
    cin >> *a >> *b;
}

int main () {
    int a , b ;
    // passagem por referencia
    leiaInteiros1 (a, b) ;
    cout << a << " e " << b << endl;
    
    // utilize ponteiros
    leiaInteiros2 (&a, &b) ;
    cout << a << " e " << b << endl;


return 0;
}