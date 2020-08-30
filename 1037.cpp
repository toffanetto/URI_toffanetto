#include <iostream>

using namespace std;
int main(){
double a=0;
cin >> a;
    if (a>=0.0000000 &&  a<=25.0000000)
    cout << "Intervalo [0,25]"<< endl;
        else if (a>25.00001 && a<=50.00000000)
            cout << "Intervalo (25,50]" << endl;
                else if (a>50.00001 && a<=75.0000000)
                    cout << "Intervalo (50,75]" << endl;
                        else if (a>75.00001 && a<=100.0000000)
                        cout << "Intervalo (75,100]" << endl;
                            else
                                cout << "Fora de intervalo" << endl;
return 0;
}
