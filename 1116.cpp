#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int a,b,N;
    float c;
    cin >> N;

    for(int cont=0;cont<N;cont++)
        {
            cin >> a >> b;
            if (b==0)
                cout << ("divisao impossivel") << endl;
            else
            {
                c= float(a) / float(b);
                cout << fixed << setprecision(1) << c << endl;
            }
        }

return 0;
}
