#include <iostream>

int main() {
    float n;
    int a,b,c,d,e,f,g,h,i,j,k,l;

    cin >> n;

    a=n/100;
    b=n-a*100/50;
    c=n-a*100-b*50/20;
    d=n-a*100-b*50-c*20/10;
	e=n-a*100-b*50-c*20-d*10/5;
	f=n-a*100-b*50-c*20-d*10-e*5/2;
	g=n-a*100-b*50-c*20-d*10-e*5-f*2/1;
	h=n-a*100-b*50-c*20-d*10-e*5-f*2-g*1/0.5;
	i=n-a*100-b*50-c*20-d*10-e*5-f*2-g*1-h*0.5/0.25;
	j=n-a*100-b*50-c*20-d*10-e*5-f*2-g*1-h*0.5-i*0.25/0.10;
	k=n-a*100-b*50-c*20-d*10-e*5-f*2-g*1-h*0.5-i*0.25-j*0.10/0.05;
	l=n-a*100-b*50-c*20-d*10-e*5-f*2-g*1-h*0.5-i*0.25-j*0.10-k*0.05/0.01;

		cout << "NOTAS: " << endl << a << " nota(s) de R$ 100.00 " << endl << b <<  " nota(s) de R$ 50.00 " << endl << c <<
      " nota(s) de R$ 20.00 " << endl << d <<  " nota(s) de R$ 10.00 " << endl << e <<  " nota(s) de R$ 5.00 " << endl << f <<
      " nota(s) de R$ 2.00 " << endl << "MOEDAS: " << endl << g <<  " moeda(s) de R$ 1.00 " << endl << h << " moeda(s) de R$ 0.50 " <<
      endl << i << " moeda(s) de R$ 0.25 " << endl << j << " moeda(s) de R$ 0.10 " << endl << k <<" moeda(s) de R$ 0.05 " <<
      endl << l << " moeda(s) de R$ 0.01 " << endl;

return 0;
}

