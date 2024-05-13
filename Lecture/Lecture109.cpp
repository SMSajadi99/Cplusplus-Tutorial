#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    unordered_set<int> numbers;
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        numbers.insert(num);
    }

    for (int i = 0; i < q; ++i) {
        char op;
        int x;
        cin >> op >> x;
        if (op == '?') {
            if (numbers.find(x) != numbers.end()) {
                cout << "1\n";
            } else {
                cout << "0\n";
            }
        }
    }

    return 0;
}
