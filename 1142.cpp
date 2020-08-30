#include <iostream>
using namespace std;
int main() {
int n,s=0,cont2=1;
cin >> n;
for(int cont1=0;cont1<n;cont1++){
for(int cont=1;cont<=4;cont++){
s=cont2;
	if (cont%4==0)
	cout << "PUM";
	else
	cout << s << " ";
cont2++;
}
cout << endl;
}
return 0;
}
