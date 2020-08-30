#include <iostream>
#include <iomanip>      //1017

using namespace std;
    int main(){
    int t,v;
    float lc,d;
    cin >> t >> v;
    d=t*v;
    lc=d/12;
    cout << fixed << setprecision(3) << lc << endl;
    return 0;
    }
