/*  @toffanetto
*   Gabriel Toffanetto França da Rocha
*   Universidade Federal de Itajubá - Campus Itabira
*   1944 - BRINDE FACE 2015
*/
#include <iostream>
#include <stack>
#include <string>

using namespace std;

void inicia_painel(stack<char> &pilha){
    pilha.push('F');
    pilha.push('A');
    pilha.push('C');
    pilha.push('E');
}


int main(){
    int n,cont=0;
    stack<char> painel;

    cin >> n;

    inicia_painel(painel);

    for(int i=0;i<n;i++){
        string entrada;
        cin >> ws;
        getline(cin, entrada);
        
        string letras, last_in;
        
        for(int j=0;j<entrada.size();j++){
            if(entrada.at(j)!= ' ')
                letras.push_back(entrada.at(j));
        }

        for(int j=0;j<4;j++){
            last_in+=(painel.top());
            painel.pop();
        }

        if(letras==last_in){
            cont++;
            if(painel.empty()){    
                inicia_painel(painel);
            }
        }
            else{
                for(int j=3;j>=0;j--){
                    painel.push(last_in.at(j));
                }
                for(int j=0;j<4;j++){
                    painel.push(letras.at(j));
                }
            }
    }

    cout << cont << endl;

}
