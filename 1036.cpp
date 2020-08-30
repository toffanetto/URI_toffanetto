#include <iostream> //1036
#include <cmath>
#include <iomanip>
using namespace std;
    int main(){
    double a,b,c,D,R1,R2;
        cin >> a >> b >> c;
        D= (pow(b,2)) -(4*a*c);
        R1= (-b+ (sqrt(D))) / (2*a);
        R2= (-b- (sqrt(D))) / (2*a);

        if (D < 0 || a==0)
            cout << "Impossivel calcular" << endl;
        else
            cout << fixed << setprecision(5) << "R1 = " << R1 << endl << "R2 = " << R2 << endl;
    return 0;
    }
