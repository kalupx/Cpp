#include <iostream>
using namespace std;

int main(){
	int x, *xptr;
	double y, *yptr;
	char c, *cptr;
	
	cptr = &c;
	xptr = &x;
	yptr = &y;
	
	cout << "digite 2 um int, um double e um char" << endl;
	cin>> x >> y >> c;
	cout << "voce digitou: " << x << " " << y << " " << c << endl;
	*cptr++;
	*xptr = 37;
	*yptr = 1;
	cout << "os novos numeros sao: " << x << " " << y << " " << c << endl;

	
	
	
	
	
	return 0;
}
