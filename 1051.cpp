#include <iostream>
#include <iomanip>

using namespace std;
int main() {
double r,i,i1,i2,i3;
cin >> r;
    if (r<=2000)
      cout << "Isento" << endl;
      else if (r>=2000.01 && r<=3000)
        {
            i1=(r-2000.01)*0.08;
            i=i1;
            cout << fixed << setprecision(2) << "R$ " << i << endl;
        }
            else if (r>=3000.01 && r<= 4500)
            {
                i1=(r-2000.01)*0.08;
                i2=(r-3000.01)*0.18;
                i=i1+i2;
                cout << fixed << setprecision(2) << "R$ " << i << endl;
            }
                else if (r>4500)
                {
                    i1=(r-2000.01)*0.08;
                    i2=(r-3000.01)*0.18;
                    i3=(r-4500)*0.28;
                    i=i1+i2+i3;
                    cout << fixed << setprecision(2) << "R$ " << i << endl;
                }

return 0;
}
