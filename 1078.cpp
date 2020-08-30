#include <iostream>
 using namespace std; //tabuada

    int main() {
    int n,t;

    cin >> n;
    for(int N=1; N<11; N++) {
       t=n*N;
        cout << N << " x " << n << " = " << t << endl;
    }

    return 0;
    }
