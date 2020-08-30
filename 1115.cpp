#include <iostream>

using namespace std;
int main() {
    int x,y;

    while(x!=0 || y!=0)
    {
        cin >> x >> y;
            if (x>0 && y>0)
                cout << "primeiro" << endl;
            else if (x<0 && y>0)
                cout << "segundo" << endl;
            else if (x<0 && y<0)
                cout << "terceiro" << endl;
            else if (x>0 && y<0)
                cout << "quarto" << endl;
            else if (x==0 || y==0)
                return 0;
    }

    return 0;
}
