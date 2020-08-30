/*  @toffanetto
*   Gabriel Toffanetto França da Rocha
*   Universidade Federal de Itajubá - Campus Itabira
*   2065 - Fila do Supermercado
*/

#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main(){
    int n, m,c, identidade, livre, tempo;
    priority_queue<pair<int,int>> fila; // <livre, tempo> 
    
    cin >> n >> m;

    vector<int> v(n); // tempo de cada funcionario

    for(int i=0;i<n;i++){
        cin >> v.at(i);
        fila.push(make_pair(0,-i));
    }
    for(int i=0; i<m;i++){
        cin >> c;
        livre=-fila.top().first; // tempo atual
        identidade = -fila.top().second; // primeiro caixa livre
        tempo = max(tempo, v.at(identidade)*c+livre);
        fila.pop();
        fila.push(make_pair(-(v.at(identidade)*c+livre),-identidade)); // tempo atual apos o atendimento, identidade do caixa
    }

    cout << tempo << endl;
}
