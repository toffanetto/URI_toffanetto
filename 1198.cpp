#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    int h , o , d;

    while(cin >> h >> o){
        if (o>=h)
        d= o-h;
        else
            d=h-o;
        cout << d << endl;
    }

return 0;
}
