#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, i;
    double sm = 0;
    for(i=0; i < 10; ++i){
        n = i + 1;
        sm += 1/(pow(n, 3) + pow(n, 1/5));
        cout << n << ") " << 1/(pow(n, 3) + pow(n, 1/5)) << endl;
    }
    cout << "Sum = " << sm;
    return 0;
}


/* 1) 0.5
2) 0.111111
3) 0.0357143
4) 0.0153846
5) 0.00793651
6) 0.00460829
7) 0.00290698
8) 0.00194932
9) 0.00136986
10) 0.000999001
Sum = 0.68198 */
