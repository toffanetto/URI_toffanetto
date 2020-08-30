/*  @toffanetto
*   Gabriel Toffanetto França da Rocha
*   Universidade Federal de Itajubá - Campus Itabira
*   1244 - Ordenação por Tamanho 
*   Using vector data structure
*/
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

typedef pair<int, int> par;

int main(){
    int n;
    cin>>n;
    cin >> ws;

    for(int i=0;i<n;i++){
        
        vector<par> palavras;
        vector<string> palavra;
        vector<int> espacos;
        string linha;
        int num=0;

        getline(cin, linha);
        /

        for(int j=0;j<linha.size();j++){
            if(linha.at(j)==' ')
                espacos.push_back(j);
        }

        if(espacos.size()>0){

            string str = linha.substr(0,espacos.at(0)); //Primeiro
            int tam = str.size();
            palavras.push_back(make_pair(tam, num));
            palavra.push_back(str);
            num++;

            for(int j=0;j<espacos.size();j++){

                if(j==espacos.size()-1){ //Ultimo
                    string str = linha.substr(espacos.at(j)+1);
                    int tam = str.size();
                    palavras.push_back(make_pair(tam, num));
                    palavra.push_back(str);
                    num++;
                } 
                    else{ // meio
                        string str = linha.substr(espacos.at(j)+1,(espacos.at(j+1)-espacos.at(j)-1));
                        int tam = str.size();
                        palavras.push_back(make_pair(tam, num));
                        palavra.push_back(str);
                        num++; 
                    }
            }

            sort(palavras.begin(),palavras.end(), [](const par& x, const par& y){ if(x.first != y.first) 
                                                                                    return x.first > y.first;
                                                                                    else 
                                                                                        return y.second > x.second; });

            //stable_sort() funcionaria perfeitamente sem gambiarra

            
            for(int j=0;j<palavras.size();j++){

                cout << palavra.at(palavras.at(j).second);

                if(j!=palavras.size()-1)
                    cout << " ";
            
            }
        }
            else 
                cout << linha;

        cout << endl;

    }
}