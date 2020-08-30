/*  @toffanetto
*   Gabriel Toffanetto França da Rocha
*   Universidade Federal de Itajubá - Campus Itabira
*   1259 - Pares e Ímpares
*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> im,p;
    for(int i=0;i<n;i++){
        int aux;
        cin >> aux;
        if(aux%2==0)
            p.push_back(aux);
            else 
                im.push_back(aux);
    }

    sort(p.begin(),p.end());
    sort(im.begin(),im.end());
    reverse(im.begin(),im.end());

    for(int i=0;i<p.size();i++){
        cout << p.at(i) << endl;
    }
    for(int i=0;i<im.size();i++){
        cout << im.at(i) << endl;
    }
    return EXIT_SUCCESS;
}