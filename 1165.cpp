#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int N,y,X,x,c1=0;
    float Y;
    cin >> N;
    while(c1<N)
    {
        cin >> X;
        Y=sqrt(float(X));
        Y=ceil(Y);

        for(int c2=2;c2<Y;c2++)
        {
            x=X%c2;
            if(x==0)
                y=x;
        }

        if(X%2==0 || y==0)
            cout  << X << " nao eh primo" << endl;
            else
                cout << X << " eh primo" << endl;

    c1++;
    Y=0;
    x=0;
    y=0;
    }
    return 0;
}
