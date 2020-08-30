#include <iostream>
#include <cmath>

using namespace std;
int main() {
    int n,q,c1;
    cin >> n;

    for(int c=1;c<=n;c++)
    {
        q=c*c;
        c1=c*c*c;
        cout << c << " " << q << " " << c1 << endl;
    }

return 0;
}

