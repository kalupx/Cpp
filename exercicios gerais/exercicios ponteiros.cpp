#include <iostream>

using namespace std;

int main(){
	
	int a, b, *ptra, *ptrb; 
	
	*ptra = a;
	*ptrb = b;
	
	if(ptra > ptrb){
		cout << "ptra: " << ptra << endl;
	}
	else if(ptrb > ptra){
		cout << "ptrb" << ptrb << endl;
	}
	else{
		cout << "ERROR" << endl;
	}
	
	
	return 0;
}
