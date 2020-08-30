#include <iostream>
#include <iomanip>  //1014

using namespace std;
    int main(){
    int x; // distancia percorrida
    float y, z; //cosbustivel gasto, km/l
    cin >> x >> y;
    z= x/y;
    cout << fixed << setprecision(3) << z << " km/l" << endl;


    return 0;
    }
