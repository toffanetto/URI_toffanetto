#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    float nota,soma=0,media;
    int  cont=0,flag=1;
    while (flag==1)
    {
        while (cont<2)
        {
            cin >> nota;
            if (nota>=0 && nota <=10)
            {
                cont++;
                soma=soma+nota;
            }
            else
                cout << "nota invalida" << endl;
        }
            media=soma/cont;
            cout << fixed << setprecision(2) << "media = " << media << endl;
            cont=0;
            soma=0;

        do
            {
                cout << "novo calculo (1-sim 2-nao)" << endl;
                cin >> flag;
            } while(flag!=1 && flag!=2);
    }

    return 0;
}
