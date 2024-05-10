#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n % 2 == 0) {
        cout << "Zoj" << endl;
        cout << n + 2 << endl;
    } else {
        cout << "Fard" << endl;
        cout << n + 1 << endl;
    }

    return 0;
}
