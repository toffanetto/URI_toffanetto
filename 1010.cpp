#include <iostream>
#include <iomanip>

using namespace std;
    int main() {
        int c1, q1, c2, q2;
        float v1,v2,t;
            cin >> c1 >> q1 >> v1;
            cin >> c2 >> q2 >> v2;
            t= (q1*v1) + (q2*v2);
            cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << t << endl;




    return(0);
    }
