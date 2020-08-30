/*  @toffanetto
*   Gabriel Toffanetto França da Rocha
*   Universidade Federal de Itajubá - Campus Itabira
*   2893 - Fibonac^{k}i
*/

#include <iostream>
#include <queue>

using namespace std;

int main(){
    long long int t, n, k;

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
            if(j<k)
                sequencia.push(j);
                else{
                    for(int l=0;l<k;l++){
                        long long int aux = sequencia.front();
                        soma+=aux;
                        sequencia.push(aux);
                        sequencia.pop();
                    }
                    sequencia.push(soma%1000007);
                    sequencia.pop();
                }
                soma=0;
        }
        cout << sequencia.back()%1000007 << endl;
    }
}