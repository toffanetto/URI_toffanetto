#include <iostream>     //1019

using namespace std;
    int main(){
    int N,h,m,s,M;

    cin >> N;

    M=N/60;
    m=M%60;
    h=M/60;
    s=N%60;
    cout << h <<":"<< m << ":" << s << endl;
    return 0;
    }
