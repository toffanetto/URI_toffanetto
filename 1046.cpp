#include <iostream>
#include <cstdlib>

using namespace std;
int main() {
int a,b,A=0,B=0,c=0,C=0;
    cin >> a >> b;
    if (a>=b)
    {
        c=a-b-24;
        C=abs(c);
    }
    else if (a<b)
    {
        c=a-b;
        C=abs(c);

    }

    cout << "O JOGO DUROU " << C << " HORA(S)" << endl;





return 0;
}
