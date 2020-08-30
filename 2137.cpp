/*  @toffanetto
*   Gabriel Toffanetto França da Rocha
*   Universidade Federal de Itajubá - Campus Itabira
    2137 - A Biblioteca do Senhor Severino
*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n;

    while(cin>>n){
        vector<string> catalago(n);
        for(int i=0;i<n;i++){
            cin >> catalago.at(i);
        }
        sort(catalago.begin(),catalago.end());
        for(auto& num : catalago)
            cout << num << endl;
    }
    return EXIT_SUCCESS;
}

