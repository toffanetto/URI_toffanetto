#include <iostream>

using namespace std;
int main () {
    double N;
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0;

    cin >> N;

    while (N>=100)
        {
            a++;
            N=N-100;
        }
    while (N>=50)
    {
        b++;
        N=N-50;
    }
    while (N>=20)
    {
        c++;
        N=N-20;
    }
    while (N>=10)
    {
        d++;
        N=N-10;
    }
    while (N>=5)
    {
        e++;
        N=N-5;
    }
    while (N>=2)
    {
        f++;
        N=N-2;
    }
    while (N>=1)
    {
        g++;
        N=N-1;
    }
    while (N>=0.5)
    {
        h++;
        N=N-0.5;
    }
    while (N>=0.25)
    {
        i++;
        N=N-0.25;
    }
    while (N>=0.10)
    {
        j++;
        N=N-0.1;
    }
    while (N>=0.05)
    {
        k++;
        N=N-0.05;
    }
    while (N>=0.01)
    {
        l++;
        N=N-0.01;
    }

    cout << "NOTAS: " << endl << a << " nota(s) de R$ 100.00 " << endl << b <<  " nota(s) de R$ 50.00 " << endl << c <<
      " nota(s) de R$ 20.00 " << endl << d <<  " nota(s) de R$ 10.00 " << endl << e <<  " nota(s) de R$ 5.00 " << endl << f <<
      " nota(s) de R$ 2.00 " << endl << "MOEDAS: " << endl << g <<  " moeda(s) de R$ 1.00 " << endl << h << " moeda(s) de R$ 0.50 " <<
      endl << i << " moeda(s) de R$ 0.25 " << endl << j << " moeda(s) de R$ 0.10 " << endl << k <<" moeda(s) de R$ 0.05 " <<
      endl << l << " moeda(s) de R$ 0.01 " << endl;

      return 0;
}
