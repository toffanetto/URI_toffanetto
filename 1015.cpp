#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std; //1015 //1.0 7.0 5.0 9.0
int main () {

    float x1,x2,y1,y2,r;

    cin >> x1 >> y1 >> x2 >> y2;       //ler coordenadas

    r= sqrt( pow(x2-x1,2) + pow(y2-y1,2) ); //formula

    cout << std::fixed << std::setprecision(4) << r << endl; // saida

return 0;

}
