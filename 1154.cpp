#include <iostream>
#include <iomanip>
using namespace std;
int main () {
    int i=0;
    float  media,s=0,cont=0;

        while(i>=0)
        {
            cin >> i;
            if(i>=0){
            s=s+i;
            cont++;
            }
        }
        media=s/(cont);
        cout << fixed << setprecision(2) << media << endl;

        return 0;
}
