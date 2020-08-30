#include <iostream>
#include <iomanip>

using namespace std;
int main(){
int c=0,qp=0;
float a,soma=0,m;
    while (c<6)
    {
        cin >> a;
        if (a>0)
           {
               qp = qp + 1;
               soma = soma + a;
           }
        c=c+1;
    }
    m=(soma)/(qp);
    cout << fixed << setprecision(1) << qp <<" valores positivos" << endl << m << endl;
return 0;
}
