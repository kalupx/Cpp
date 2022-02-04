#include <iostream>
using namespace std;

int main () {
    char str [] = " abc teste ", *strptr;
    strptr = str;

    for (int i = 11; i > 0; i--)
    {
        cout << *(strptr+i);
    }
    

// Exemplo de saida para o exemplo acima : etset cba

return 0;
}