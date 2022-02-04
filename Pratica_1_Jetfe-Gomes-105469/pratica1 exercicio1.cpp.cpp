#include <iostream>
using namespace std;

int main(){

    int long value2, value1 = 200000, *longptr;

    longptr = &value1;

    cout << *longptr << endl;
    
    value2 = *longptr;
    cout << value2 << endl;

    cout << &value2 << endl;

    cout << &value1 << endl;
    cout << longptr << endl;
    //os valores sao iguais pois longptr armazena o endereco de 1;
    return 0;
}