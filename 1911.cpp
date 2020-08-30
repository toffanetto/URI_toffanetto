/*  @toffanetto
*   Gabriel Toffanetto França da Rocha
*   Universidade Federal de Itajubá - Campus Itabira
*   1911 - Ajude Girafales
*/

#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
    int n;

    while(cin>>n && n!=0){
        int m,falsas=0;
        unordered_map<string,string> classe;
        unordered_map<string,string> presentes;

        for(int i=0;i<n;i++){
            string str1, str2;
            cin >> str1 >> str2;
            classe.insert(make_pair(str1,str2));
        }

        cin>>m;

        for(int i=0;i<m;i++){
            int dif=0;
            string str1, str2;
            cin >> str1 >> str2;
            string ass = classe.find(str1)->second;
            for(int j=0;j<ass.size();j++){
                if(ass.at(j)!=str2.at(j))
                    dif++;
            }
            falsas += (dif>1) ? 1 : 0;
        }
        cout << falsas << endl;

    }
}