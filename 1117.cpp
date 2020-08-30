#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    float nota,soma=0,media;
    int  cont=0;

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
    return 0;
}

