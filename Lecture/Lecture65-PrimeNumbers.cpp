#include <iostream>
using namespace std;

void is_prime(int num) {
    int counter = 0;
    for (int i = 2; i < num; i++) {
        if (num % i == 0)
            counter += 1;
    }
    if (counter == 0)
    {
        cout << num << endl;
    }
     
}

int main() {
    int a, b;
    cin >> a;
    cin >> b;

    for (int i = a; i <= b; i++) {
        is_prime(i);
    }

    return 0;
}
