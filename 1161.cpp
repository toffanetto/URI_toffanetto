#include <iostream>

using namespace std;
int main() {
    int M,N,FM=0,FN=0,soma=0;

    while(cin >> M >> N){

        if(M==0)
            FM=1;
            else{
        for(int cont=1; cont < M; cont++)
            FM=FM+ (M*(M-cont));
            }

        if(N==0)
            FN=1;
            else{
        for(int cont2=1; cont2 < N; cont2++)
            FN=FN+(N*(N-cont2));
            }


        soma=FN+FM;

        cout << soma << endl;
        FN=0;
        FN=0;

    }

    return 0;
}



