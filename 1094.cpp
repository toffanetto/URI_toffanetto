#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int N,Q=0,t=0;
    char T;
    float pc,ps,pr,tc=0,ts=0,tr=0;

    cin >> N;
        for(int cont=0;cont<N;cont++)
           {
                cin >> Q >> T;
                t=t+Q;
                    if (T=='C')
                        tc=tc+Q;
                    else if(T=='S')
                        ts=ts+Q;
                    else if(T=='R')
                        tr=tr+Q;
           }
           pc=((tc/t)*100);
           ps=((ts/t)*100);
           pr=((tr/t)*100);

           cout << "Total: " << t << " cobaias" << endl << "Total de coelhos: " << tc << endl <<
           "Total de ratos: " << tr << endl << "Total de sapos: " << ts << endl << fixed << setprecision(2) <<
           "Percentual de coelhos: " << pc << " %" << endl << "Percentual de ratos: " << pr << " %" << endl <<
           "Percentual de sapos: " << ps << " %" << endl;
return 0;
}

