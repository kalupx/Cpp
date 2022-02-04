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

    for (int i = 0; i < 5; i++)
    {
        cin >> j[i].x;
        cin >> j[i].y;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << "x: " << j[i].x << " y: " << j[i].y << endl;
    }
        
    
    /*
    for (int i = 0; i < 5; i++)
    {
        leDadosJogador(j[i]);
    }
    */
    

return 0;
}