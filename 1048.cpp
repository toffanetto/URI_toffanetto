#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
    int main() {
    float s,ns,rg;
    cin >> s;
    if (s<=400)
        {
        rg=(s/100)*15;
        ns=s+rg;
        cout << fixed << setprecision(2) << "Novo salario: " << ns << endl << "Reajuste ganho: " << rg << endl << "Em percentual: 15 %" << endl;
        }
        else if (s>400 && s<=800)
            {
            rg=(s/100)*12;
            ns=s+rg;
            cout << fixed << setprecision(2) << "Novo salario: " << ns << endl << "Reajuste ganho: " << rg << endl << "Em percentual: 12 %" << endl;
            }
            else if (s>800 && s<=1200)
                {
                rg=(s/100)*10;
                ns=s+rg;
                cout << fixed << setprecision(2) << "Novo salario: " << ns << endl << "Reajuste ganho: " << rg << endl << "Em percentual: 10 %" << endl;
                }
                else if (s>1200 && s<=2000)
    {
                    rg=(s/100)*7;
                    ns=s+rg;
                    cout << fixed << setprecision(2) << "Novo salario: " << ns << endl << "Reajuste ganho: " << rg << endl << "Em percentual: 7 %" << endl;
    }
                    else if (s>2000)
                        {
                        rg=(s/100)*4;
                        ns=s+rg;
                        cout << fixed << setprecision(2) << "Novo salario: " << ns << endl << "Reajuste ganho: " << rg << endl << "Em percentual: 4 %" << endl;
                        }
    return 0;}
