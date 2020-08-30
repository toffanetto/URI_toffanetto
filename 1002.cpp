#include <iostream>
#include <iomanip>
#include <cmath>    //1002
using namespace std;
int main () {
    double r, a, pi;

    cin >> r;
    pi=3.14159;
    a= pi* pow(r,2);

    cout << "A=" << fixed << setprecision(4) << a << endl;

return (0);



}
