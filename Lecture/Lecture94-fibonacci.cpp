#include <iostream>
using namespace std;

int fibonacciSum(int n) {
    int fibSum = 0;
    int fibPrev = 1;
    int fibCurr = 1;

    if (n == 1)
        return 1;
    else if (n == 2)
        return 2;

    fibSum = 2; 

    for (int i = 3; i <= n; ++i) {
        int fibNext = fibPrev + fibCurr;
        fibSum += fibNext;
        fibPrev = fibCurr;
        fibCurr = fibNext;
    }

    return fibSum;
}

int main() {
    int n;
    cin >> n;

    cout << fibonacciSum(n) << endl;

    return 0;
}
