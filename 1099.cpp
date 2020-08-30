#include <iostream>
using namespace std;
int main(){
int n,x,y,cont=0;
cin >> n;
for(int j=0;j<n;j++){
cin >> x >> y;
if(y>x){
int aux;
aux=x;
x=y;
y=aux;
}

for(int i=x;i<y;i++){
if(i%2!=0){
cont=i;
}
}
cout << cont << endl;
}
}
