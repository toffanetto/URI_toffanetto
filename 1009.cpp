#include <iostream> //1009
#include <string> //necessario para uso de STRING
#include <iomanip>

using namespace std;

    int main(){
        double a,b,c;
        string name;
    cin >> name >>  a >> b;
    c= a+((b/100)*15);
    cout << "TOTAL = R$ " << fixed << setprecision(2) << c << endl;


    return(0);

}
