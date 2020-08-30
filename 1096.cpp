#include <iostream>
using namespace std;
int main(){
int i=1,j=7,cont=0;
for(int k=0;k<15;k++){
cout << "I=" << i << " J=" << j << endl;
cont++;
j--;
if(cont==3){
cont=0;
i+=2;
j=7;
}
}
}

