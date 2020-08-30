#include <iostream>
#include <string>

using namespace std;
int main() {
    string s;
    while(cin >> s)
    {
        int p=0;      //p representa a quantidade de espaços antes do texto
        for(int i=0;i<s.length();i++){      //i representa a quantidade de linhas
            for(int j=0;j<s.length();j++){
                   while(j<p){
                    cout << " ";
                    j++;
                   }

                    if(j-p==0)
                    {
                        cout << s.at(j-p);     //j é o tamanho da string menos p que sera ate onde ela deve ser impressa
                    }
                    else
                        cout << " " << s.at(j-p);
            }
            cout << endl;
            p++;


            }
            cout << endl;
    }
    return 0;
}
