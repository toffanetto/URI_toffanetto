#include <iostream>
using namespace std;
int main(){
int cont=1;
float j=1,i=0;
while(i<2.2){
j=i+cont;
cout << "I=" << i << " J=" << j << endl;
cont++;
j--;
if(cont>3){
cont=1;
i+=0.2;
}
}
}

