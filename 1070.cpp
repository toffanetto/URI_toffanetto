#include <iostream>

using namespace std;
int main() {
int a,n,b,d,c=0;
    cin >> a;
        if (a%2==0)
            b=a-1;
            else if (a%2!=0)
                b=a-2;
        n=b;
        while(c<6){
                n=n+2;
                cout << n << endl;
                c=c+1;
        }

return 0;
}
