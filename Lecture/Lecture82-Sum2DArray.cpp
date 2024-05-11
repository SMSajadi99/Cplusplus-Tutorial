#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int A[n][m], B[n][m];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> B[i][j];
        }
    }

    int C[n][m];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << C[i][j];
            if (j != m - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
