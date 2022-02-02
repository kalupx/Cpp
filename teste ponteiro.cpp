#include <iostream>
using namespace std;

void quadrado(int *x){
	*x = *x**x;
}

int main(){
	
	int *x;
	int b;
	cin >> b;
	x = &b;
	cout << *x << endl;
	quadrado(x);
	
	cout << b;
	
	
	
	
	return 0;
}
//*pega o valor que do endereco apontado pelo ponteiro
//& indica a referencia do endereco
