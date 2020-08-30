/*  @toffanetto
*   Gabriel Toffanetto França da Rocha
*   Universidade Federal de Itajubá - Campus Itabira
*   1063 - Trilhos novamente... Traçando Movimentos
*/
#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main(){
    bool flag0=false, flag1=false;
    int n, cont0=0, cont1=0;
    vector<char> entrada (27);
    vector<char> saida (27);
    while(true){
        cont0=0;
        cont1=0;
        flag0=false;
        cin >> n;
        if(n==0)
            break;
        for(int i=0;i<n;i++){
            cin >> entrada.at(i);
        }
        for(int i=0;i<n;i++){
            cin >> saida.at(i);
        }

        stack<char> vagoes;

        while(cont0<n && !flag0){
            while(true){
                if(!vagoes.empty() && vagoes.top()==saida.at(cont0)){
                    vagoes.pop();
                    cout << "R"; // RETIRA VAGÃO
                    break;
                }
                    else if(cont1<n){
                        vagoes.push(entrada.at(cont1));
                        cout << "I"; // INSERE VAGÃO
                        cont1++;
                        if(vagoes.top()==saida.at(cont0)){
                            vagoes.pop();
                            cout << "R"; // RETIRA VAGÂO
                            break;
                        }
                    }
                        else{
                            flag0=true;
                            break;
                        }
            }
            cont0++;
        }

        if(vagoes.empty()){
            cout << endl;
        }
            else{
                cout << " Impossible" << endl;
            }

    }
}