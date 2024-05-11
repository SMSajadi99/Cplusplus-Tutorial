#include <iostream>
using namespace std;

void Alphabet(int x) {
    for (int i = 0; i < x; ++i) {
        cout << char('a' + i) << endl;
    }
}

void PrintAlphabet(int n) {
    if (n < 1) {
        cout << "INVALID" << endl;
        return;
    }

    while (n > 0) {
        if (n > 26) {
            Alphabet(26); 
            n -= 26; 
        } else {
            Alphabet(n); 
            n = 0; 
        }
    }
}

int main() {
    int n;
    cin >> n;

    PrintAlphabet(n);

    return 0;
}
