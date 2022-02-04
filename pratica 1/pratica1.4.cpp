#include <iostream>
using namespace std;

struct Jogador {
    int pontos ;
    int x , y ;
};
/*
void leDadosJogador ( Jogador *jogador) {
    cin >> j.x;
    cin >> j.y;
}
*/
int main () {
    Jogador j [5];

    
    cin >> j[1].x;
    cin >> j[1].y;
    cout << "x: " << j[1].x << " y: " << j[1].y << endl;
    /*
    for (int i = 0; i < 5; i++)
    {
        leDadosJogador(j[i]);
    }
    */
    

return 0;
}