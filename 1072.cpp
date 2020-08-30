#include <iostream>

using namespace std;
int main() {
    int N,x,in=0,out=0;

    cin >> N;

    for(int cont=0;cont<N;cont++)
        {
            cin >> x;
            if (x<10 || x>20)
                out=out+1;
            else if (x>=10 && x<=20)
                in=in+1;
        }
    cout << in << " in" << endl << out << " out" << endl;

return 0;
}
