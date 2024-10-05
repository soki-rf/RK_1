#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, i;
    double sm = 0;
    for(i=0; i < 10; ++i){
        n = i + 1;
        double t = 1.0/(pow(n, 3.0) + pow(n, 1.0/5.0));
        cout << n << ") " << t << endl;
        sm += t;
    }
    cout << "Sum = " << sm;
    return 0;
}

/* 1) 0.5
2) 0.109305
3) 0.0354036
4) 0.0153094
5) 0.00791266
6) 0.00459916
7) 0.00290296
8) 0.00194736
9) 0.00136883
10) 0.000998418
Sum = 0.679747 */
