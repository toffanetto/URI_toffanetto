#include <iostream>
#include <cmath>
using namespace std;
int main() {
int N,q,N1,n=0;

cin >> N ;
N1=N-1;
    if (N%2==0 && N>5 && N<2000)
    while (n<N)
    {
      n=n+2;
      q=pow(n,2);
      cout << n << "^2" << " = " << q << endl;

    }
    else if (N%2!=0 && N>5 && N<2000)
    while (n<N1)
    {
      n=n+2;
      q=pow(n,2);
      cout << "2^"<< n << " = " << q << endl;

    }

return 0;
}

