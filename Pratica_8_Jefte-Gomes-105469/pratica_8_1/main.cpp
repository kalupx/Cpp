#include <iostream>
#include <fstream>

//#include "Arquivoip.h"
using namespace std;

int main(){

    cout << "pratica 8" << endl << endl;
    int n;
    cin >> n;
    string palavras[n];

    ifstream fin("entrada.txt");
    ofstream fout("ips.txt");
    
    int ctr = 0;
    for (int i = 0; i < n; i++)
    {
        
        fin >> palavras[i];
        cout << "palavras[" << i << "]: " << palavras[i] << endl;
        ctr++;
        if(fin.eof()){
            break;
        }
        
    }
    
    for (int i = 0; i < ctr; i++)
    {
        fout << palavras[i];
        if(i != (ctr - 1)){
            fout << endl;
        }
    }
    

    fin.close();
    fout.close();

    return 0;
}