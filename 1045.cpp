#include <iostream>
#include <cmath>

using namespace std;
int main () {
double a,b,c,A,B,C;
cin >> a >> b >> c;

    {if (a>b && a>c && b>c)
        {
        A=a;
        B=b;
        C=c;
        }
        else if (a>b && a>c && c>b)
            {
            A=a;
            B=c;
            C=b;
            }
            else if (b>a && a>c && b>c)
                {
                A=b;
                B=a;
                C=c;
                }

                else if (b>a && c>a && b>c)
                   {
                    A=b;
                    B=c;
                    C=a;
                   }
                    else if (c>a && c>b && a>b)
                        {
                        A=c;
                        B=a;
                        C=b;
                        }

                        else if (c>a && c>b && b>a)
                            {
                            A=c;
                            B=b;
                            C=a;
                            }
                            else if (a==b && a>c)
                                {
                                A=a;
                                B=b;
                                C=c;
                                }
                                else if (a==b && a<c)
                                {
                                    A=c;
                                    B=b;
                                    C=a;
                                }
                                    else if (b==c && c>a)
                                    {
                                        A=b;
                                        B=c;
                                        C=a;
                                    }
                                        else if (b==c && a>c)
                                            {
                                                A=a;
                                                B=b;
                                                C=c;
                                            }
                                            else if (a==b && b==c && c==a)
                                            {
                                                A=a;
                                                B=b;
                                                C=c;
                                            }


    }


    if (A>=B+C)
        cout << "NAO FORMA TRIANGULO" << endl;
        else{
        if ((A*A) == (B*B)+(C*C))
            cout << "TRIANGULO RETANGULO" << endl;
            else if ((A*A) > (B*B)+(C*C))
                cout << "TRIANGULO OBTUSANGULO" << endl;
                else if ((A*A) < (B*B)+(C*C))
                    cout << "TRIANGULO ACUTANGULO" << endl;

    if (a==b && b==c && a==c)
        cout << "TRIANGULO EQUILATERO" << endl;
        else if (a==b || a==c || b==c)
            cout << "TRIANGULO ISOSCELES" << endl;
    }
    return 0;
}
