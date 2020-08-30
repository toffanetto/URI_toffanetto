#include <iostream>

 using namespace std;
    int main(){
    int N, a, m,d;
    cin >> N;
     a=N/365;
     m=(N%365)/30;
     d=(N%365)%30;

     cout << a << " ano(s)" << endl <<
     m << " mes(es)" << endl << d << " dia(s)" << endl;

    return 0;
    }
