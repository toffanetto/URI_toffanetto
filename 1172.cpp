#include <iostream>
using namespace std;
int main() {
    int x,r[10];

    for(int i=0;i<10;i++)
    {
        cin >> x;
        if(x<=0)
        r[i]=1;
        else
            r[i]=x;
    }
    for(int i=0;i<10;i++)
    {
        cout << "X[" << i << "] = " << r[i] << endl;
    }
    return 0;
}
