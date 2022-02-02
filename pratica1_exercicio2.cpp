#include <iostream>
using namespace std;


void leiaInteiros ( int &a , int &b) {
// insira seu codigo aqui ...
	cin >> a >> b;
}

void leiaInteiros2 ( int *a , int *b) {
// insira seu codigo aqui ...
	cin >> *a >> *b;
}

int main () {
 	int a =0  , b=0 ;
 	// passagem por referencia
 	leiaInteiros (a, b) ;
 	
 	// utilize ponteiros
 	leiaInteiros2 (&a, &b) ;
 	
 
	cout << a << endl << b << endl;
return 0;
}
