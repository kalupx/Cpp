#include "Soma.h"

Soma::Soma()
{
}

Soma::~Soma()
{
}
int Soma::Sum(int m, int n){
    static int ctr = 0;
    if(ctr == n){
        return 0;
    }
    ctr++;
    return m + Sum(m+1, n);
}