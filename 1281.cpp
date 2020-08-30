/*  @toffanetto
*   Gabriel Toffanetto França da Rocha
*   Universidade Federal de Itajubá - Campus Itabira
*   1281 - Ida à Feira
*/

#include <iostream>
#include <map>
#include <iomanip>

using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        int m;
        int p;
        double total=0;
        map<string,double> produtos;
        map<string,int> pedido;

        cin >> m;

        for(int j=0;j<m;j++){
            string nome;
            double valor;
            cin >> nome >> valor;
            produtos.insert( pair<string,double>(nome,valor));
        }

        cin >> p;

        for(int j=0;j<p;j++){
            string nome;
            int qnt;
            cin >> nome >> qnt;
            pedido.insert(pair<string,int>(nome,qnt));
        }

        for(const auto& item : pedido){
            total+=item.second*produtos.find(item.first)->second;
        }

        cout << "R$ " << fixed << setprecision(2) << total << endl;

    }
}