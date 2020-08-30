/*  @toffanetto
*   Gabriel Toffanetto França da Rocha
*   Universidade Federal de Itajubá - Campus Itabira
*   1062 - Trilhos
*/
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main(){
    bool flag0=false, flag1=false;
    int n, cont0=0, cont1=0;
    vector<int> entrada (1001);

    while(true){
        cin >> n;
        if(n==0)
            break;

        while(true){
            cont0=0;
            cont1=1;
            flag0=false;
            flag1=false;

            for(int i=0;i<n;i++){
                cin >> entrada.at(i);
                if(entrada.at(i)==0){
                    flag0=true;
                    cout << endl;
                    break;
                }     
            }

            stack<int> vagoes;

            while(cont0<n && !flag0 && !flag1){

                while (true){                    
                    if(!vagoes.empty() && vagoes.top()==entrada.at(cont0)){
                        vagoes.pop();          
                        break;
                    }
                        else if(cont1<=n){
                            vagoes.push(cont1);
                            cont1++;
                            if(vagoes.top()==entrada.at(cont0)){
                                vagoes.pop();
                                break;
                            }
                        }
                            else {
                                flag1=true;
                                break;
                            }
                }
                cont0++;       
            }

            if(flag0)
                break;
            
            if(vagoes.empty())
                cout << "Yes" << endl;
                else 
                    cout << "No" << endl;  
        }
    }
}
