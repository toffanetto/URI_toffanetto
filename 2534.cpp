/*  @toffanetto
*   Gabriel Toffanetto França da Rocha
*   Universidade Federal de Itajubá - Campus Itabira
*   2534 - Exame Geral
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,q;
    while(cin>>n && cin>>q){
        vector<int> pontos, pedidos;
        for(int i=0;i<n;i++){
            int aux;
            cin>>aux;
            pontos.push_back(aux);
        }
        for(int i=0;i<q;i++){
            int aux;
            cin>>aux;
            pedidos.push_back(aux);
        }
        sort(pontos.begin(),pontos.end(),greater<int>());
        for(auto &posicao : pedidos){
            cout << pontos.at(posicao-1) << endl;
        }

    }
}
