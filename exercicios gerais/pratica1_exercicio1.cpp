//pratica1_exercicio1
#include <iostream>
using namespace std;

int main(){
	long int value1 = 200000;
	long int value2 = 0;
	// insira seu codigo aqui ...
	// insira aqui a resposta para o item (g) ...
	long int *longPtr;
	longPtr = &value1;
	cout << *longPtr << endl;
	value2 = *longPtr;
	cout << value2 << endl;
	cout << longPtr << endl;
	//o valor � diferente pois o que esta sendo impresso � o endere�o da variavel e nao a variavel em si.
	
	
	return 0;
}
