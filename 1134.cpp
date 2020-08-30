#include <iostream>

using namespace std;
int main() {
    int a=0,g=0,d=0,flag=0,x;

    while(flag!=4)
       {
            cin >> x;
            if(x==1)
                a++;
                else if (x==2)
                    g++;
                    else if (x==3)
                        d++;
                        else if (x==4)
                           flag=4;
       }
      cout << "MUITO OBRIGADO" << endl << "Alcool: " << a << endl << "Gasolina: " << g << endl << "Diesel: " << d << endl;
       return 0;
}
