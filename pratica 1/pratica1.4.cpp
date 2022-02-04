#include <iostream>
using namespace std;

struct Jogador {
    int pontos ;
    int x , y ;
};

void leDadosJogador ( Jogador *jogador) {
    cin >> (*jogador).pontos;
    cin >> (*jogador).x;
    cin >> (*jogador).y;
}


int main () {
    Jogador j [5], *ptrj;

    ptrj = &j[0];
      
    for (int i = 0; i < 5; i++)
    {
        leDadosJogador(ptrj+i);
    }
    
    
    for (int i = 0; i < 5; i++)
    {
        cout << "ponto: " << j[i].pontos << " x: " << j[i].x << " y: " << j[i].y << endl;
    }

return 0;
}