#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    int N,X,cont=0;
    double tg=0,mg,mk;
    cin >> N;
    for(int c=0;c<N;c++)
    {
        cin >> X;
        while(cont<X)
            {
                tg=tg+pow(2,cont);
                cont++;
            }
        mg=tg/12;
        mk=mg/1000;
        mk=trunc(mk);
        cout << fixed << setprecision(0) << mk << " kg" << endl;
        tg=0;
        cont=0;
    }
return 0;
}
