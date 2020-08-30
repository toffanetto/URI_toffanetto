/*  @toffanetto
*   Gabriel Toffanetto França da Rocha
*   Universidade Federal de Itajubá - Campus Itabira
*   2460 - Fila
*/

#include <iostream>
#include <list>
#include <unordered_set>

using namespace std;

int main(){
    int n,m;
    list<int> fila;
    unordered_set<int> saiu;
    cin >> n;
    for(int i=0;i<n;i++){
        int aux;
        cin>>aux;
        fila.push_back(aux);

    }
    cin >> m;
    for(int i=0;i<m;i++){
        int aux;
        cin >> aux;
        saiu.insert(aux);
    }
    string espaco = "";
    while(!fila.empty()){
        if(saiu.find(fila.front())==saiu.end()){
            cout << espaco << fila.front();
            espaco=" ";
        }
        fila.pop_front();
    }
    cout << endl;
}
