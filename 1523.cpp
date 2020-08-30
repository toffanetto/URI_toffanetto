/*  @toffanetto
*   Gabriel Toffanetto França da Rocha
*   Universidade Federal de Itajubá - Campus Itabira
    1523 - Estacionamento Linear
*/
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main(){
    int n, k, c, s, last;
    bool flag0;

    while(true){

        cin >> n >> k;
        if(n==0 && k==0)
            break;

        flag0=true;
        stack<int> patio;
        vector<int> entrada (100001);
        vector<int> saida (100001);   

        for(int i=1;i<=n;i++){
            cin >> c >> s;
            if(s>last  || i==0){
                last = s;
            }
            saida.at(s)=c;
            entrada.at(c)=c;
        }

        for(int i=1;i<=last;i++){
            if(saida.at(i)!=0){
                if(!patio.empty() && patio.top()==saida.at(i))
                    patio.pop();
                    else{
                        flag0=false;
                        break;
                    }
            }
            if(entrada.at(i)!=0){
                if(patio.size()<k)
                    patio.push(entrada.at(i));
                    else{ 
                        flag0=false;
                        break;
                    }
            }
        }

        string s = (flag0) ? "Sim" : "Nao";
        cout << s << endl;
    }
}