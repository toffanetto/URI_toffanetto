#include <iostream>

using namespace std;
int main() {
    int  N,R,contM=0,contJ=0;
    cin >> N;
    while(N!=0){
    for(int i=0;i<N;i++)
    {
        cin >> R;
        if(R==1)
            contJ++;
            else if(R==0)
            contM++;
    }
    cout << "Mary won " << contM << " times and John won " << contJ << " times" << endl;
    contM=0;
    contJ=0;
    cin >> N;
    }

return 0;
}
