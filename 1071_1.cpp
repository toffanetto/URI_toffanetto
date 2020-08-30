#include <iostream>

using namespace std;
int main() {
int a,b,A,B,c,n=0,cont=0,soma=0,N;

cin >> a >> b;
    if (a>b)
        {
            A=a;
            B=b;
        }
        else
        {
            A=b;
            B=a;
        }

     if (B%2==0)
            c=B-1;

        n=B;
        cont=B;
        while(cont<A){
                N=n+2;
                soma=soma+N;
                cont=cont+2;
        }

            cout << soma << endl;


return 0;
}
