#include <iostream>
#include <cmath>        //1074

using namespace std;
    int main() {
    int N,x;
    cin >> N;
    for(int n=0; n<N; n++)
        {
            cin >> x;
            if (x==0)
                cout << "NULL" << endl;
                else if (x<0 && x%2==0)
                    cout << "EVEN NEGATIVE" << endl;
                    else if (x<0 && x%2!=0)
                        cout << "ODD NEGATIVE" << endl;
                            else if (x>0 && x%2==0)
                                cout << "EVEN POSITIVE" << endl;
                                else if (x>0 && x%2!=0)
                                    cout << "ODD POSITIVE" << endl;
        }

    return 0;
    }
