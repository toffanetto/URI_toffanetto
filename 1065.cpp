#include <iostream>

using namespace std;
int main(){
int a,c=0;
    for (int i=0;i<5;i++)
    {
        cin >> a;
        if (a%2==0)
            c=c+1;
    }
    cout << c << " valores pares" << endl;
return 0;
}
