/*  @toffanetto
*   Gabriel Toffanetto França da Rocha
*   Universidade Federal de Itajubá - Campus Itabira
*   1451 - Teclado Quebrado
*/

#include <iostream>
#include <list>
#include <stack>

using namespace std;

int main(){
    string line;
    while(getline(cin,line)){
        list<char> digitado;
        stack<char> fora;
        bool flag=false;
        for(int i=0;i<line.size();i++){
            char letra = line.at(i);

            if(letra=='[' && flag){
                while(!fora.empty()){
                        digitado.push_front(fora.top());
                        fora.pop();
                    }
            }
                else if(letra=='[')
                    flag=true;
                    else if(letra==']'){
                        flag=false;
                        while(!fora.empty()){
                            digitado.push_front(fora.top());
                            fora.pop();
                        }
                    }
                        else{
                            if(!flag)
                                digitado.push_back(letra);
                                else
                                    fora.push(letra);
                        }
        }

        while(!fora.empty()){
            digitado.push_front(fora.top());
            fora.pop();
        }
        while(!digitado.empty()){
            cout << digitado.front();
            digitado.pop_front();
        }
        cout << endl;
    }
}