#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int star_count = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            char c;
            cin >> c;
            if (c == '*') {
                star_count++;
            }
        }
    }

    cout << star_count << endl;

    return 0;
}
