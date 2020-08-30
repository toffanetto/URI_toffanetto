/*  @toffanetto
*   Gabriel Toffanetto França da Rocha
*   Universidade Federal de Itajubá - Campus Itabira
*   2020
*/

#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(){
    int n;
    string jazida;
    cin >> n;
    for(int i=0;i<n;i++){
        stack<char> mina;
        int c=0;
        cin >> ws;
        getline(cin, jazida);
        for(int j=0;j<jazida.size();j++){
            if(jazida.at(j)=='<')
                mina.push('<');
                else if(jazida.at(j)=='>'){
                    if(!mina.empty()){
                        if(jazida.at(j) != mina.top()){
                            c++;
                            mina.pop();
                        }
                    }
                }
        }
        cout << c << endl;
    }
}

