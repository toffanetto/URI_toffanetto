#include <iostream>

using namespace std;
int main() {
    int x,y;

    do
    {
        cin >> x >> y;
        if(x==y)
            return 0;
            else if (x<y)
                cout << "Crescente" << endl;
                else if (x>y)
                    cout << "Decrescente" << endl;

    }while (x!=y);



    return 0;
}
