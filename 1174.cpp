#include <iostream>
#include <iomanip>
using namespace std;
int main() {
 int cont=0;
 float v[101],r[100];
 for(int i=0;i<10;i++){
    cin >> v[i];
 }
 for(int i=0;i<10;i++){
    if(v[i]<=10){
        r[cont]=v[i];
        cont++;
    }
 }

for(int i=0;i<cont;i++){
    cout << "A[" << i << "] = " << fixed << setprecision(1) << r[i] << endl;
}

}
