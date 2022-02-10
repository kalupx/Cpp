//ponteiro resumo
#include <iostream>
using namespace std;

void somar(float *ptr, float valor);

int main(){
	
	//criacao do ponteiro
	int *ptr;
	int x = 2;
	
	//apontando o ponteiro
	ptr = &x;
	
	//imprimindo o valor do ponteiro
	cout << "valor do ponteiro: " << ptr << endl;
	
	//imprimindo o valor que o ponteiro aponta, ou seja, o valor de x
	cout << "valor que o ponteiro aponta: " << *ptr << endl;
	
	//imprimindo o endereco do ponteiro
	cout << "endereco do ponteiro: " << &ptr << endl; 
	
	//mudando o valor da variavel com ponteiro
	*ptr = 4;
	
	cout << "valor que o ponteiro aponta: " << *ptr << endl;
	
	//apontando o ponteiro para um vetor
	int vet[10];
	ptr = vet; //o ponteiro aponta para vet[0];
	vet[0] = 3;
	cout << "valor que o ponteiro aponta no vetor: " << *ptr << endl;
	vet[1] = 11;
	//faz o ponteiro apontar para a proxima posicao, vet[1]
	ptr++;
	
	cout << "valor que o ponteiro aponta no vetor: " << *ptr << endl;
	
	//altera o valor apontado, no caso, vet[1];
	*ptr= 7;
	
	cout << "valor que o ponteiro aponta no vetor: " << vet[1] << endl;
	
	//ponteiro com funcoes
	float num = 0;
	
	//tem que passar o endereco da variavel para a funcao
	somar(&num,15);
	cout << "num: " << num << endl;
	return 0;
}

//recebe o endereco da de num no ponteiro ptr
//lembrando que char e vetor ja sao passados por endereco
void somar(float *ptr, float valor){
	*ptr+=valor;
}
