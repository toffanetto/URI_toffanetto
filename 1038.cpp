#include <iostream>
#include <iomanip>

using namespace std;
    int main(){
    int q,c;
    float p;
    cin >> c >> q;
    if (c==1)
        p=q*4.00;
        else if (c==2)
            p=q*4.50;
            else if (c==3)
                p=q*5.00;
                else if (c==4)
                    p=q*2.00;
                    else if (c==5)
                        p=q*1.50;
    cout << fixed << setprecision(2) << "Total: R$ " << p << endl;
    return 0;
    }
