#include <iostream>
#include <iomanip>

using namespace std;
int main() {

    int n;
    float a,b,c,media=0;

        cin >> n;

        for(int cont=0;cont<n;cont++)
        {
            cin >> a >> b >> c;
            media=((a*2)+(b*3)+(c*5))/10;
            cout << fixed << setprecision(1) << media << endl;

        }

return 0;
}
