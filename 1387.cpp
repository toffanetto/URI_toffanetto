#include <iostream>
using namespace std;
int main() {
int L,S,soma;
cin >> L >> S;
while(L!=0 || S!=0)
{
    soma=L+S;
    cout << soma << endl;
    cin >> L >> S;
}
return 0;
}
