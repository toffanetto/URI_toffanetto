#include <iostream>
using namespace std;
int main() {
    int x,y,jogos=0,vitinter=0,vitgremio=0,empates=0,flag=1;

    while (flag==1)
    {
        jogos++;
        cin >> x >> y;
        if(x>y)
            vitinter++;
            else if(x<y)
                vitgremio++;
                else
                    empates++;
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> flag;

    }
    cout << jogos << " grenais" << endl << "Inter:" << vitinter << endl <<
    "Gremio:" << vitgremio << endl << "Empates:" << empates << endl;
    if(vitgremio>vitinter)
        cout << "Gremio venceu mais" << endl;
        else if(vitgremio<vitinter)
            cout << "Inter venceu mais" << endl;
            else
                cout << "Nao houve vencedor" << endl;
return 0;
}

