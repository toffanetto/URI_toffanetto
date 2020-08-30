#include <iostream>
#include <iomanip>

using namespace std;
int main() {
float s,i;
   cin >> s;
    if (s<=2000)
        cout << "Isento" << endl;
        else if (s>2000 && s<=3000)
        {
            i=(s-2000.00)*0.08;
            cout << fixed << setprecision(2) << "R$ " << i << endl;
        }
            else if (s>3000 && s<4500)
            {
                i=((s-3000.00)*0.18 + (((s-2000)-(s-3000))*0.08));
                cout << fixed << setprecision(2) << "R$ "  << i << endl;
            }
                else
                {
                    i=(((s-4500)*0.28)+((s-3000.00)-(s-4500)*0.18)+(((s-2000)-(s-3000))*0.08));
                    cout << fixed << setprecision(2) << "R$ " << i << endl;
                }

return 0;
}
