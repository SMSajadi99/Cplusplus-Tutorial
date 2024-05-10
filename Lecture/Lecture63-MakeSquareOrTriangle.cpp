#include <iostream>
using namespace std;

void drawSquare(int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "*";
        }
        cout << endl;
    }
}

void drawTriangle(int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - i; ++j) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    char shape;
    cin >> n >> shape;

    if (shape == 's') {
        drawSquare(n);
    } else if (shape == 't') {
        drawTriangle(n);
    } else {
        cout << "Invalid shape input!";
    }

    return 0;
}
