/*  @toffanetto
*   Gabriel Toffanetto França da Rocha
*   Universidade Federal de Itajubá - Campus Itabira
*   2479 - Ordenando a Lista de Crianças do Papai Noel
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,comportados=0, travessos=0;
    cin>>n;
    cin>>ws;
    vector<string> lista(n,"");
    for(int i=0;i<n;i++){
        string aux;
        getline(cin,aux);

        if(aux.at(0)=='+')
            comportados++;
            else if(aux.at(0)=='-')
                travessos++;

        aux.erase(0,2);
        lista.at(i)=aux;
    }
    
    sort(lista.begin(),lista.end());

    for(auto& nome:lista){
        cout << nome << endl;
    }

    cout << "Se comportaram: " << comportados << " | Nao se comportaram: " << travessos << endl;

}