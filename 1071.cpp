#include <iostream>
using namespace std;
int main() {
int x,y,X,Y,Y1,X1,soma=0;
 cin >> x >> y;
    if (x>=y)
    {
       X=x;
       Y=y;
    }
    else
    {
        X=y;
        Y=x;
    }
        if(Y%2==0)
        Y1=Y-1;
        else
            Y1=Y;

        if(X%2==0)
            X1=X-1;
            else
            X1=X-2;

        while (Y1<X1)
            {
                Y1=Y1+2;
                soma=soma+Y1;
            }
        cout << soma << endl;
return 0;
}
