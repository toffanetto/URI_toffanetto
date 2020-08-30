/*  @toffanetto
*   Gabriel Toffanetto França da Rocha
*   Universidade Federal de Itajubá - Campus Itabira
*   1851 - Como Treinar Seu Dragão
*/

#include <iostream>
#include <queue>

using namespace std;

class Drag{
public:
    long long int multa;
    long long int dia_atual;
    long long int dia_treino;
    Drag(long long int multa, long long int dia_atual, long long int dia_treino){
        this->multa=multa;
        this->dia_atual=dia_atual;
        this->dia_treino=dia_treino;
    }

    bool operator<(const Drag&) const;
};

bool Drag::operator<(const Drag& d) const{
    return multa*d.dia_treino < d.multa*dia_treino;
}

int main(){
    long long int dias, multa, multa_total=0,dia=0,dia_treino=0;
    priority_queue<Drag> dragao;

    while(cin >> dias >> multa){
        dragao.push(Drag(multa, dia, dias));        
        if(dia_treino==0){
            multa_total+=(dia-dragao.top().dia_atual)*dragao.top().multa;
            dia_treino=dragao.top().dia_treino;
            dragao.pop();
        }
        dia_treino--;
        dia++;
    }
    while(!dragao.empty()){
        if(dia_treino==0){
            multa_total+=(dia-dragao.top().dia_atual)*dragao.top().multa;
            dia_treino=dragao.top().dia_treino;
            dragao.pop();
        }
        dia_treino--;
        dia++;
    }
    cout << multa_total << endl;
}