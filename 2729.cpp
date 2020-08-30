/*  @toffanetto
*   Gabriel Toffanetto França da Rocha
*   Universidade Federal de Itajubá - Campus Itabira
*   2729 - Lista de Compras
*/

#include <iostream>
#include <bits/stdc++.h> 
#include <set>
#include <string>

using namespace std;

int main(){
    int n;
    cin>>n;
    cin>>ws;
    for(int i=0;i<n;i++){
        string palavra,frase,space="";
        set<string> lista;
        
        getline(cin,frase);
        stringstream X(frase);

        while(getline(X, palavra,' ')) 
            lista.insert(palavra);
        
        for(auto& prod : lista){
            cout << space << prod;
            space=" ";
        }
        cout << endl;
    }
}
