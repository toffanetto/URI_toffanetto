/*  @toffanetto
*   Gabriel Toffanetto França da Rocha
*   Universidade Federal de Itajubá - Campus Itabira
*   1548 - Fila do Recreio
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        vector<int> fila;        
        vector<int> fila_ordenada;

        int m;
        cin>>m;

        int ficou=m;

        for(int j=0;j<m;j++){
            int aux;
            cin>> aux;
            fila.push_back(aux);
        }

        fila_ordenada=fila;
        sort(fila_ordenada.begin(),fila_ordenada.end(),greater<int>());

        for(int j=0;j<m;j++){
            if(fila_ordenada.at(j)!=fila.at(j))
                ficou--;
        }
        
        cout << ficou << endl;
    }
}
