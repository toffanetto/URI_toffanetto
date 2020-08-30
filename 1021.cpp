#include <iostream>  //1021
#include <cstdlib>
using namespace std;
int main(){
     int b,c,d,e,f,g,h,i,j,k,l,m,n;
     float N;
     cin >> N;
     n=N*100;
     b=(n/10000);
     n=n%10000;
     c=n/5000;
     n=n%5000;
     d=n/2000;
     n=n%2000;
     e=n/1000;
     n=n%1000;
     f=n/500;
     n=n%500;
     g=n/200;
     n=n%200;
     h=n/100;
     n=n%100;
     i=n/50;
     i=n%50;
     j=n/25;
     j=n%25;
     k=n/10;
     k=n%10;
     l=n/5;
     l=n%5;
     m=n/1;

     cout << "NOTAS: " << endl << b << " nota(s) de R$ 100.00" << endl << c <<  " nota(s) de R$ 50.00" << endl << d <<
      " nota(s) de R$ 20.00" << endl << e <<  " nota(s) de R$ 10.00" << endl << f <<  " nota(s) de R$ 5.00" << endl << g <<
      " nota(s) de R$ 2.00" << endl << "MOEDAS: " << endl << h <<  " moeda(s) de R$ 1.00" << endl << i << " moeda(s) de R$ 0.50" <<
      endl << j << " moeda(s) de R$ 0.25" << endl << k << " moeda(s) de R$ 0.10" << endl << l <<" moeda(s) de R$ 0.05" <<
      endl << m << " moeda(s) de R$ 0.01" << endl;

return 0;
}

