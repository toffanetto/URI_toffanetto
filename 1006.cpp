#include <iostream>
#include <iomanip>      //1006

using namespace std;
    int main(){
        double a,b,c,d;
        cin >> a >> b >> c;
        d=((a*2)+(b*3)+(c*5))/10;
        cout << "MEDIA = " << fixed << setprecision(1) << d << endl;


    return(0);
}
