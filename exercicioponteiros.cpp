#include <iostream>
#include <cmath>

using namespace std;
int raizes(float A,float B,float C,float * X1,float * X2);

int main(){
	float a, b, c, x1, x2, roots;
	cin  >> a >> b >> c;
	
	roots = raizes(a, b, c, &x1, &x2);
	
	cout << "x1: " << x1 << " x2: " << x2 << endl;
	return 0;
}

int raizes(float A,float B,float C,float * X1,float * X2){
	*X1 = (-B+sqrt((B*B)-4*A*C))/2*A;
	*X2 = (-B-sqrt((B*B)-4*A*C))/2*A;
	if()
}
