#include <iostream>
#include <cmath>
#include <iomanip>  //1012

using namespace std;
    int main () {
        double a,b,c,d,e,f,g,h;             /* d = area do triangulo e = area do circulo f = area do trapezio g = area do quadrado
                                            h = area do retangulo*/
            cin >> a >> b >> c;

            d= (a*c)/2;
            e= 3.14159 * pow(c,2);
            f= ((a+b)*c)/2;
            g= pow(b,2);
            h= (a*b);

            cout << "TRIANGULO: " << fixed << setprecision(3) << d << endl << "CIRCULO: " << fixed << setprecision(3) << e << endl <<
            "TRAPEZIO: " << fixed << setprecision(3) << f << endl << "QUADRADO: " << fixed << setprecision(3) << g << endl << "RETANGULO: " <<
            fixed << setprecision(3) << h << endl;
    return 0;
    }
