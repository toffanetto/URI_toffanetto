#include <iostream>
using namespace std;
int main() {
    int N,a,b,c1=0,c2=0;
    cin >> N;
    while(N!=0){
    for(int i=0;i<N;i++){
        cin >> a >> b;
        if(a>b)
        c1++;
        else if(a<b)
        c2++;
    }

    cout << c1 << " " <<  c2 << endl;
    c1=0;
    c2=0;
    cin >> N;
    }
    return 0;
}

