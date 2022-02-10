#include <iostream>
using namespace std;

void EliminaZero(int *ptr);

int main(){

    int *a, vet[10];
    a = vet;
    for (int i = 0; i < 10; i++)
    {
        *(a+i) = i;
        if(i == 2){
            *(a+i) = 0;
        }
    }
   EliminaZero(a);
    for (int i = 0; i < 10; i++){
        cout << *(a+i) << " ";
    }
    cout << endl;
    
    
    return 0;
}

void EliminaZero(int *ptr){
    int i;
    for (int i = 0; i < 10; i++)
    {
        if(*(ptr+i) == 0){
            *(ptr+i) = 7;
        }
    }
    
}