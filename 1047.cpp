#include <iostream>
#include <cstdlib>

using namespace std;
int main() {
    int  hi,mi,hf,mf,ht,mt,h1,h2;

    cin >> hi >> mi >> hf >> mf;
    h1=(hi*60+mi);
    h2=(hf*60+mf);

    if ((hi)>=(hf))
        {
                ht=abs(h1-h2-1440)/60;
                if (mi>mf)
                    mt=(abs(h1-h2-60)%60);
                    else if (mi<=mf)
                        mt=abs(h1-h2)%60;

        }
    else if ((hi) < (hf))
        {
                ht=abs(h1-h2)/60;
                if (mi>mf)
                    mt=abs(h1-h2-60)%60;
                    else if (mi<=mf)
                        mt=abs(h1-h2)%60;
        }


    cout << "O JOGO DUROU " << ht << " HORA(S) E " << mt << " MINUTO(S)" << endl;

return 0;
}
