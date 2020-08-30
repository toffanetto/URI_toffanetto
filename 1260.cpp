/*  @toffanetto
*   Gabriel Toffanetto França da Rocha
*   Universidade Federal de Itajubá - Campus Itabira
*   1260 - Especies de Madeira
*/

#include <iostream>
#include <iomanip>
#include <map>

using namespace std;

int main(){
    int n;
    cin>>n;
    cin>>ws;

    string especie;
    for(int i=0;i<n;i++){
        map<string,int> especies;
        int pop=0;

        while(getline(cin, especie) && especie.length()>1){
            if(especies.find(especie)==especies.end()){
                especies.insert(make_pair(especie,1));
                pop++;
            }
                else{
                    especies.find(especie)->second++;
                    pop++;
                }
        }

        for (const auto& item : especies){
            cout << item.first << endl;
            cout << fixed << setprecision(4) << item.second*100.00/float(pop) << endl;
        }

        if(i!=n-1)
            cout << endl;
            
    }

}
