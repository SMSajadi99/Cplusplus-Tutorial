#include <iostream>
using namespace std;

void drawRoundedSquare(int n, int k, char c) {
    while (n > 0) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cout << c;
            }
            cout << endl;
        }
        n -= k;
    }
}

int main() {
    int n, k;
    char c;
    cin >> n >> k >> c;

    drawRoundedSquare(n, k, c);

    return 0;
}
