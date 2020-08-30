#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;                                     //| b - c | < a < b + c
   int main(){                                           //| a - c | < b < a + c
                                                         //| a - b | < c < a + b
    float a,b,c,p,A;
    cin >> a >> b >> c;
        if ( abs(b-c)<a && a < (b+c) && abs(a-c)<b && b<(a+c) && abs(a-b)<c && c<(a+b))
            {
                p=a+b+c;
                cout << fixed << setprecision(1) << "Perimetro = " << p << endl;
            }
            else
            {
                A=((a+b)*c)/2;
                cout << fixed << setprecision(1) << "Area = " << A << endl;
            }


    return 0;
    }
