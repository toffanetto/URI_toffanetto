#include <iostream>
#include <iomanip>      //1040

using namespace std;
    int main () {
    double n1,n2,n3,n4,m1,ne,mf;
    cin >> n1 >> n2 >> n3 >> n4;
    m1= ((n1*2)+(n2*3)+(n3*4)+(n4*1))/10;
    cout << fixed << setprecision(1) << "Media: " << m1 << endl;
    if (m1<5)
        cout << "Aluno reprovado." << endl;
        else if (m1>=7)
            cout << "Aluno aprovado." << endl;
            else if (m1>=5 && m1<=6.9)
            {
                cout << "Aluno em exame." << endl;
                cin >> ne;
                cout << fixed << setprecision(1) << "Nota do exame: " << ne << endl;
                mf=(m1+ne)/2;
                if (mf>=5)
                    cout << fixed << setprecision(1) << "Aluno aprovado." << endl << "Media final: " << mf << endl;
                    else
                        cout <<"Aluno reprovado." << endl << "Media final: " << mf << endl;
            }
    return 0;
    }

