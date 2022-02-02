#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
unsigned seed = time(0);


void preencheAleatorios ( int *a , int *b) {
	// insira seu codigo aqui ...
	int i;
	for(i = 0; i<*a; i++){
		
	}
	
	
}
/*
void imprime ( int ... , int ...) {
	// insira seu codigo aqui ...
}
void contaParImpar ( int .. , int ... , int ... , int ... , int ...) {
	// insira seu codigo aqui ...
}
*/
int main () {
	srand(seed);
	
	int *lista1, *lista2;
	lista1 = (int *) malloc(sizeof(int));
	lista2 = (int *) malloc(sizeof(int));
	
	int n;
	cout << "digite o numero de jogadas a serem simuladas: ";
	cin >> n;
	lista1 = lista2 = &n;
	preencheAleatorios(lista1, lista2);
	
	//exemplo alocacao dinamica
	//nome = (char *) malloc(sizeof(char));
	//gets(nome);
	
	//preencheAleatorios(lista1, lista2);
	
return 0;
}

