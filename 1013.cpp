#include <iostream>
#include <cstdlib>      //1013

using namespace std;
    int main() {
    int a,b,c,d,e;
    cin >> a >> b >> c;

    d= ((a+b+abs(a-b))/2);   // mostra o maior entre a e b
    e= ((d+c+abs(d-c))/2);   // mostra o maior entre o maior de a e b e c
    cout << e << " eh o maior" << endl;
    return 0;
    }
