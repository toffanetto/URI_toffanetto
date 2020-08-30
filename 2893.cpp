/*  @toffanetto
*   Gabriel Toffanetto França da Rocha
*   Universidade Federal de Itajubá - Campus Itabira
*   2893 - Fibonac^{k}i
*/

#include <iostream>
#include <queue>

using namespace std;

int main(){
    int n, k, t;
    cin >> t;

    for(int i=0;i<t;i++){
        cin >> k >> n;
        queue<long long int> sequencia;
        long long int soma=0;

        if(n<k){
            cout << n-1 << endl;
            continue;
        }

        for(int j=0;j<n;j++){
            if(j<k){
                sequencia.push(j);
                soma+=j%1000007;
            }
                else if(j==k){
                    sequencia.push(soma%1000007);
                }
                    else{
                        soma+=(soma-sequencia.front())%1000007;
                        sequencia.push(soma%1000007);
                        sequencia.pop();
                    }
        }
        cout << sequencia.back()%1000007 << endl;
    }
}