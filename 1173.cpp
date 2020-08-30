#include <iostream>

using namespace std;
int main() {
    int n,v[10];
    cin >> n;
    for(int i=0;i<10;i++){
            if(i==0)
                v[i]=n;
                else
                    v[i]=v[i-1]*2;
    }
    for(int i=0;i<10;i++){
            cout << "N[" << i <<"] = " << v[i] << endl;
    }
    return 0;
}
