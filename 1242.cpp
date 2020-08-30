/*  @toffanetto
*   Gabriel Toffanetto França da Rocha
*   Universidade Federal de Itajubá - Campus Itabira
*   1242 - Ácido Ribonucleico Alienígena
*/
#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(){
    string entrada;

    while(getline(cin, entrada)){
        stack<char> rnaa;
        int cont=0;

        for(int i=0;i<entrada.size();i++){
            if(!rnaa.empty() && (entrada.at(i)=='C' && rnaa.top()=='F' ||
                                 entrada.at(i)=='F' && rnaa.top()=='C' ||
                                 entrada.at(i)=='S' && rnaa.top()=='B' ||
                                 entrada.at(i)=='B' && rnaa.top()=='S')){
                rnaa.pop();
                cont++;
            }
            else 
                rnaa.push(entrada.at(i));
        }
        cout << cont << endl;
    }
    return 0;
}