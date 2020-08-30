//sequencia de fibonacci
#include <iostream>
//toffanetto
using namespace std;
int main(){
int n,fst=1,snd=0,trd;
cin >> n;
for(int i=0;i<n;i++){
    trd=fst+snd;
    if(i==n-1)
    cout << snd;
    else
    cout << snd << " ";

    fst=snd;
    snd=trd;

}
}
