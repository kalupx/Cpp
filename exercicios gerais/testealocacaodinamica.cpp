#include <iostream>
#include <stdio.h> //funcao gets
#include <stdlib.h> //funcao malloc

using namespace std;

int main(){
	
	char *nome;
	nome = (char *) malloc(sizeof(char));
	gets(nome);
	
	cout << nome << endl;
	
	
	return 0;
}
