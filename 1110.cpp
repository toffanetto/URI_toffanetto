/*  @toffanetto
*   Gabriel Toffanetto França da Rocha
*   Universidade Federal de Itajubá - Campus Itabira
*   1110 - Jogando Cartas Fora
*/

#include <iostream>
#include <queue>

using namespace std;

int main(){
    int n;
    queue<int> monte;

    while(true){
        cin >> n;
        if(n==0)
            break;
        
        for(int i=1;i<=n;i++){
            monte.push(i);
        }
        cout << "Discarded cards: ";
        while(monte.size()>1){
            int aux;
            cout << monte.front();
            monte.pop();
            aux=monte.front();
            monte.pop();
            monte.push(aux);
            if(monte.size()==1)
            cout << endl;
                else 
                    cout << ", ";   
        }
        cout << "Remaining card: " << monte.front() << endl;
        monte.pop();
    }
}