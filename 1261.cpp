/*  @toffanetto
*   Gabriel Toffanetto França da Rocha
*   Universidade Federal de Itajubá - Campus Itabira
*   1261 - Pontos de Feno
*/

#include <iostream>
#include <set>
#include <map>

using namespace std;

int main(){
    int n,m;

    cin>>m>>n;
    map<string,int> money;
    for(int i=0;i<m;i++){
        string word;
        int value;
        cin >> word >> value;
        money.insert(make_pair(word,value));
    }
    for(int i=0;i<n;i++){
        string word;
        int salario=0;
        multiset<string> funcao;
        while(cin>>word && word!="."){
            funcao.insert(word);
        }
        for(auto& palavra:money){
            int cont = funcao.count(palavra.first);
            salario+= cont*palavra.second;
        }
        cout << salario << endl;
    }
}