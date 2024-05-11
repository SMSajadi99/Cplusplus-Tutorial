#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> flowers(m);
    for (int i = 0; i < m; ++i) {
        cin >> flowers[i];
    }

    vector<char> result(n, 'F'); 

    for (int j = 0; j < n; ++j) {
        int white_count = 0;
        for (int i = 0; i < m; ++i) {
            if (flowers[i][j] == 'W') {
                white_count++;
            }
        }
        if (white_count % 2 == 0) {
            result[j] = 'B'; 
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << result[i];
    }
    cout << endl;

    return 0;
}
