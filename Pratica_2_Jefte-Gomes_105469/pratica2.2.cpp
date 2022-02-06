#include <iostream>
using namespace std;

struct Imagem {
int ** pixels ; // matriz com os pixels da imagem
int nrows ; // numero de linhas na imagem ( altura )
int ncolumns ; // numero de colunas na imagem ( largura )
};

void leImagem ( Imagem &im) {
// Insira seu codigo aqui ....
    int n, m;
    cin >> n >> m;
    cout << "lendo imagem" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> im.pixels[i][j];
        }
    }
    
}
/*
void deletaImagem ( Imagem ...) {
// Insira seu codigo aqui ....
}
void imprimeImagem ( Imagem ...) {
// Insira seu codigo aqui ....
}
void inverteCorImagem ( Imagem ...) {
// Insira seu codigo aqui ....
}
*/

int main () {
Imagem im ;
leImagem ( im ) ;
//inverteCorImagem ( im ) ;
//imprimeImagem ( im ) ;
//deletaImagem ( im ) ;
return 0;
}
