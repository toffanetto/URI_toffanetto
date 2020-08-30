#include <iostream>  //1018

using namespace std;
    int main(){
     int N,b,c,d,e,f,g,h;

     cin >> N;
     b=(N/100);
     c=(N-b*100)/50;
     d=(N-b*100-c*50)/20;
     e=(N-b*100-c*50-d*20)/10;
     f=(N-b*100-c*50-d*20-e*10)/5;
     g=(N-b*100-c*50-d*20-e*10-f*5)/2;
     h=(N-b*100-c*50-d*20-e*10-f*5-g*2)/1;

     cout << N << endl << b << " nota(s) de R$ 100,00" << endl << c <<  " nota(s) de R$ 50,00" << endl << d <<
      " nota(s) de R$ 20,00" << endl << e <<  " nota(s) de R$ 10,00" << endl << f <<  " nota(s) de R$ 5,00" << endl << g
      << " nota(s) de R$ 2,00" << endl << h <<  " nota(s) de R$ 1,00" << endl;

        return 0;
    }


