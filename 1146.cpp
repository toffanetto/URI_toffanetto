#include <iostream>
using namespace std;
int main() {
int x=1,X,cont2=1;
do{
cin >> x;
for(int cont=0;cont<x;cont++){
X=cont2;
if(X==x)
cout << X;
else if (X<x)
cout << X << " ";
cont2++;
}
cout << endl;
cont2=1;
}while(x!=0);
return 0;
}

