/*  @toffanetto
*   Gabriel Toffanetto França da Rocha
*   Universidade Federal de Itajubá - Campus Itabira
*   2567 - Virus
*/

#include <iostream>
#include <list>

using namespace  std;

int main(){
    int n;
    while(cin>>n){
        int soma=0;
        list<int> virus;
        for(int i=0;i<n;i++){
            int aux;
            cin>>aux;
            virus.push_back(aux);
        }
        
        virus.sort();

        while(virus.size()>1){
            soma+=virus.back()-virus.front();
            virus.pop_back();
            virus.pop_front();
        }
        
        cout << soma << endl;
    }
}
