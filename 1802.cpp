/*  @toffanetto
*   Gabriel Toffanetto França da Rocha
*   Universidade Federal de Itajubá - Campus Itabira
*   1802 - Catálogo de Livros
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int p,m,f,q,b,k,soma=0;
    vector<int> pi,mi,fi,qi,bi,somas;
    
    cin >> p;
    for(int i=0;i<p;i++){
        int aux;
        cin>>aux;
        pi.push_back(aux);
    }    
    cin >> m;
    for(int i=0;i<m;i++){
        int aux;
        cin>>aux;
        mi.push_back(aux);
    }    
    cin >> f;
    for(int i=0;i<f;i++){
        int aux;
        cin>>aux;
        fi.push_back(aux);
    }    
    cin >> q;
    for(int i=0;i<q;i++){
        int aux;
        cin>>aux;
        qi.push_back(aux);
    }    
    cin >> b;
    for(int i=0;i<b;i++){
        int aux;
        cin>>aux;
        bi.push_back(aux);
    }

    cin>>k;

    for(int i=0;i<p;i++){
        for(int j=0;j<m;j++){
            for(int k=0;k<f;k++){
                for(int l=0;l<q;l++){
                    for(int o=0;o<b;o++){
                        int soma = pi.at(i)+mi.at(j)+fi.at(k)+qi.at(l)+bi.at(o);
                        somas.push_back(soma);
                    }
                }
            }
        }
    }

    sort(somas.begin(), somas.end(), [] (const int &x, const int &y){ return x>y;});

    for(int i=0;i<k;i++){
        soma+=somas.at(i);
    }
    cout << soma << endl;
}