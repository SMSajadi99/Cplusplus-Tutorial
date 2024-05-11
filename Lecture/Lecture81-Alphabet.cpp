#include <iostream>
using namespace std;

void Alphabet(int x) {
    for (int i = 0; i < x; ++i) {
        cout << char('a' + i) << endl;
    }
}

void PrintAlphabet(int n) {
    if (n < 1 || n > 26) {
        cout << "INVALID" << endl;
        return;
    }

    while (n > 0) {
        Alphabet(n); 
        break;
    }
}

int main() {
    int n;
    cin >> n;

    PrintAlphabet(n);

    return 0;
}
