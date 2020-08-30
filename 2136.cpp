/*  @toffanetto
*   Gabriel Toffanetto França da Rocha
*   Universidade Federal de Itajubá - Campus Itabira
*   2136 - Amigos do Habay
*/

#include <iostream>
#include <string>
#include <set>
using namespace std;

int main(){
    string name, choice;
    pair<string,int> friend_data = make_pair("",0);
    set<string> list_friends, list_nofriends;

    while(cin>> name && name!="FIM" && cin>>ws && cin>>choice){
        if(choice=="NO")
            list_nofriends.insert(name);
            else{          
                list_friends.insert(name);
                    if(name.size()>friend_data.second){
                        friend_data.second=name.size();
                        friend_data.first=name;
                    }
            }
            
    }
    for(auto &nome : list_friends)
        cout << nome << endl;
    for(auto &nome : list_nofriends)
        cout << nome << endl;
    cout << endl << "Amigo do Habay:" << endl << friend_data.first << endl; 

}
