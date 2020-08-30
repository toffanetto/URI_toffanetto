#include <iostream>

using namespace std;
int main(){
int c=0,qp=0;
float a;
    while (c<6)
    {
        cin >> a;
        if (a>0)
            qp=qp+1;
        c=c+1;
    }
    cout << qp <<" valores positivos" << endl;
return 0;
}
