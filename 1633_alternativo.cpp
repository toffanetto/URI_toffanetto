/*  @toffanetto
*   Gabriel Toffanetto França da Rocha
*   Universidade Federal de Itajubá - Campus Itabira
*   1633 - SBC
*/

#include <iostream>
#include <queue>

using namespace std;

typedef pair<long long, long long> pll;

int main(){

    int n;

    while(cin >> n){

        uint64_t tempo=0;
        int t, c, clock=1, executando=0;
        priority_queue<pll,  vector<pll>, greater<pll>> executar; //<tempo_chegou, tempo_executando>
        priority_queue<pll,  vector<pll>, greater<pll>> iniciar;

        for(int i=0;i<n;i++){
            cin >> t >> c;
            iniciar.push(make_pair(t,c));
        }
        
        while(!iniciar.empty() || !executar.empty()){
            while(!iniciar.empty() && (iniciar.top().first)<=clock){
                executar.push(make_pair(iniciar.top().second,iniciar.top().first));
                iniciar.pop();
            }
            if(!executar.empty()){
                tempo+=(clock-executar.top().second);
                clock+=executar.top().first;
                executar.pop();
            }   else{
                    clock++;
            }
        }
        cout << tempo << endl;
    }
}