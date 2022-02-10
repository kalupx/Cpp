//alocacao dinamica resumo
#include <iostream>
#include <stdio.h>//funcao gets
#include <stdlib.h>//malloc

using namespace std;

int main(){
	//alocacao pra string
	char *vnome;//ao inves de definirmos prviamente o tamanho do vetor, criamos um ponteiro;
			//converte a saide de malloc, void, para char
	vnome = (char *) malloc(sizeof(char));//sizeof(char) = retorna o tamanho de char
					 //alocacao dinamica
	gets(vnome);
	
	cout << vnome << endl;
	
	//alocacao pra int
	int *a;
 	a = (int *) malloc (10 * sizeof(int);

	//libera a memoria
	free(a);
	
	return 0;
}
