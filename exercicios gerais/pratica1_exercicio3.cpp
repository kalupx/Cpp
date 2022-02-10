#include <iostream>
#include <string>

using namespace std;

void calculaTamanhoString1 ( char *str) {
	// insira seu codigo aqui ...
	int counter = 0;
	for(int i = 0; i <= str.size(); i++){
		cout << i << endl;
	}

}
/*
int calculaTamanhoString2 ( char *str) {
	// insira seu codigo aqui ...
}

int calculaTamanhoString3 ( char *str) {
	// insira seu codigo aqui ...
}
*/


int main () {
	char str [51];
	cout << " Digite alguma string ... ( com ate 50 caracteres ):";
	cin . getline ( str , 50) ;
	cout << " Tamanhos calculados :" << endl ;
	calculaTamanhoString1(str);
	//cout << calculaTamanhoString1 ( str ) << " " << calculaTamanhoString2 ( str ) << " " << calculaTamanhoString3 ( str ) ;
	//cout << endl ;

return 0;
}
