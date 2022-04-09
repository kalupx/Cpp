#include "Soma.h"
#include <iostream>
int main(){
    //o codigo soma recursivamente todos os valores de "m" ate "n"
    int m, n;
    std::cout << "Digite m: ";
    std::cin >> m;
    std::cout << "Digite n: ";
    std::cin >> n;
    Soma s;
    std::cout << s.Sum(m, n);
    return 0;
}