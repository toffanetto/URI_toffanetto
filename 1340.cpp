/*  @toffanetto
*   Gabriel Toffanetto França da Rocha
*   Universidade Federal de Itajubá - Campus Itabira
*   1340 - Eu Posso Adivinhar a Estrutura de Dados!
*/

#include <iostream>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

int main(){
    int n;
    while(cin>>n){

        bool filaf=true, filapf=true, pilhaf=true;

        queue<int> fila;
        priority_queue<int> filap;
        stack<int> pilha;

        int op, num;

        for(int i=0;i<n;i++){
            cin>> op >> num;
            if(op==1){
                fila.push(num);
                filap.push(num);
                pilha.push(num);
            }
                else if(op==2){
                    if(filaf==true && fila.front()!=num){
                        filaf=false;
                        fila.pop();
                    }
                        else if(filaf==true && fila.front()==num)
                            fila.pop();
                    if(filapf==true && filap.top()!=num){
                        filapf=false;
                        filap.pop();
                    }
                        else if(filapf==true && filap.top()==num)
                            filap.pop();
                    if(pilhaf==true && pilha.top()!=num){
                        pilhaf=false;
                        pilha.pop();
                    }
                        else if(pilhaf==true && pilha.top()==num)
                            pilha.pop();
                }
        }

        if(filaf&&filapf || filaf&&pilhaf || filapf&&pilhaf || filaf&&filapf&&pilhaf)
            cout << "not sure" << endl;
            else if(filaf)
                cout << "queue" << endl;
                else if(filapf)
                    cout << "priority queue" << endl;
                    else if(pilhaf)
                        cout << "stack" << endl;
                        else if(!filaf && !filapf && !pilhaf)
                            cout << "impossible" << endl;
    }
}