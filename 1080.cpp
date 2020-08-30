#include <iostream>
using namespace std;
int main() {
    int n=0,n1,maior=0,x;

    while(n<100){
        cin >> x;
        n++;
        if (x>maior)
        {
            maior = x;
            n1=n;
        }

    }

    cout << maior << endl << n1 << endl;

    return 0;
}
