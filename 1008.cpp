#include <iostream>
#include <iomanip> //1008

using namespace std;
    int main() {
    float sh, st; //salario por hora e salario total
    int n, h; // numero do funcionario e horas trabalhadas

    cin >> n >> h >> sh;
    st = h*sh;
    cout << "NUMBER = " << fixed << setprecision(2) <<  n << endl << "SALARY = U$ " << st << endl;
    return(0);
    }
