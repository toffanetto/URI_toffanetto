#include <iostream>
using namespace std;
int main() {
    int N,cont=0,days=0;
    float C;
    cin >> N;
    while(cont<N)
    {   cin >> C;
            while(C>1)
            {
            C=C/2;
            days++;
            }
    cout << days << " dias" << endl;
    cont++;
    days=0;
    }

    return 0;
}
