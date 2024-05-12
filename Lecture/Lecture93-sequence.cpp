#include <iostream>
using namespace std;

int calculateFn(int n) {
    if (n == 0)
        return 5;
    else if (n % 2 == 0)
        return calculateFn(n - 1) - 21;
    else
        return calculateFn(n - 1) * calculateFn(n - 1);
}

int main() {
    int n;
    cin >> n;
    
    cout << calculateFn(n) << endl;
    
    return 0;
}
