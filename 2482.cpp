/*  @toffanetto
*   Gabriel Toffanetto França da Rocha
*   Universidade Federal de Itajubá - Campus Itabira
*   2482 - Etiquetas de Noel
*/
#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
    int n,m;
    unordered_map<string,string> mensagens;
    
    cin>>n;
    cin>>ws;

    for(int i=0;i<n;i++){
       string idioma, mensagem;
       getline(cin,idioma);
       getline(cin,mensagem);
       mensagens.insert(make_pair(idioma,mensagem));
    }

    cin>>m;
    cin>>ws;

    for(int j=0;j<m;j++){
        string idioma, nome;
        getline(cin,nome);
        getline(cin,idioma); 

        cout<< nome << endl << mensagens.find(idioma)->second << endl << endl;
    }
 
}