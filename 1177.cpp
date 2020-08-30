#include <iostream>
using namespace std;
int main () {
    int T, n[1000],i=0;

    cin >> T;

    for(i=0;i<1000;i++){
    for(int j=0;j<T;j++)
            n[i]=j;

    }

    for(i=0;i<1000;i++){
            cout << "N[" <<  i << "] = " << n[i] << endl;
    }
    return 0;
}
