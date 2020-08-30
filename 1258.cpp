/*  @toffanetto
*   Gabriel Toffanetto França da Rocha
*   Universidade Federal de Itajubá - Campus Itabira
*   1258 - Camisetas
*/

#include <iostream>
#include <algorithm>
#include <set>
#include <vector>

using namespace std;

class Pedido{
    public:
        string nome;
        string cor;
        char tamanho;
        
        Pedido(string nome, string cor, char tamanho){
            this->cor=cor;
            this->nome=nome;
            this->tamanho=tamanho;
        };

};

int main(){
    auto cmp = [](Pedido left, Pedido right){ if(left.cor==right.cor && left.tamanho==right.tamanho)
                                                    return left.nome < right.nome;
                                                    else if(left.cor==right.cor)
                                                        return right.tamanho < left.tamanho;
                                                        else
                                                            return left.cor < right.cor;
                                            };

    int n;
    bool primeiro=true;
    while(cin>>n && n!=0){
        if(!primeiro)
            cout << endl;
        primeiro=false;

        vector<Pedido> pedidos;
        //
        for(int i=0;i<n;i++){
            string nome,cor;
            char tamanho;
            cin>>ws;
            getline(cin,nome);
            cin >> cor;
            cin >> tamanho;

            pedidos.push_back(Pedido(nome,cor,tamanho));

        }

        sort(pedidos.begin(),pedidos.end(), cmp);
        for(auto &item : pedidos){
            cout << item.cor << " " << item.tamanho << " " << item.nome << endl;
        }


    }

}
