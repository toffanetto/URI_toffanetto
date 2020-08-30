/*  @toffanetto
*   Gabriel Toffanetto França da Rocha
*   Universidade Federal de Itajubá - Campus Itabira
*   2018 - Olimpiadas de Natal
*/

#include <unordered_map>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Pais{
    public:
        string nome;
        int ouro, prata, bronze;
        Pais(string nome){
            this->nome=nome;
            this->ouro=0;
            this->prata=0;
            this->bronze=0;
        }
        void primeiroLugar(){
            this->ouro++;
        }
        void segundoLugar(){
            this->prata++;
        }
        void terceiroLugar(){
            this->bronze++;
        }
};

bool sortPais(const Pais& x, const Pais& y){
    if(x.ouro==y.ouro){
        if(x.prata==y.prata){
            if(x.bronze==y.bronze){
                if(x.nome.compare(y.nome)<0)
                    return true;
                    else 
                        return false;
            }
            return x.bronze>y.bronze;
        }
        return x.prata>y.prata;
    }
    return x.ouro>y.ouro;
}


int main(){
    unordered_map<string, Pais> quadro_de_medalhas;
    string modalidade,pais;
    vector<Pais> classificacao;

    while(getline(cin,modalidade)){
        for(int i=0;i<3;i++){
            getline(cin,pais);
            if(quadro_de_medalhas.find(pais)==quadro_de_medalhas.end()){
                quadro_de_medalhas.insert(make_pair(pais,Pais(pais)));
                switch(i){
                    case 0:
                    quadro_de_medalhas.find(pais)->second.primeiroLugar();
                    break;

                    case 1:
                    quadro_de_medalhas.find(pais)->second.segundoLugar();
                    break;
                    
                    case 2:
                    quadro_de_medalhas.find(pais)->second.terceiroLugar();
                    break;
                    }
            }
                else{
                    switch(i){
                        case 0:
                        quadro_de_medalhas.find(pais)->second.primeiroLugar();
                        break;

                        case 1:
                        quadro_de_medalhas.find(pais)->second.segundoLugar();
                        break;
                        
                        case 2:
                        quadro_de_medalhas.find(pais)->second.terceiroLugar();
                        break;
                    }
                }
        }
    }
    
    for (const auto& item : quadro_de_medalhas) {
        classificacao.push_back(item.second);
    }

    sort(classificacao.begin(), classificacao.end(), sortPais);

    cout << "Quadro de Medalhas" << endl;

    for(const auto& p : classificacao){
        cout << p.nome << " " << p.ouro << " " << p.prata << " " << p.bronze << endl;
    }
}