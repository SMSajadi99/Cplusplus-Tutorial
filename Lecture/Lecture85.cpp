#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    while (q--) {
        int t, l, r;
        cin >> t >> l >> r;
        if (t == 1) {
            int sum = 0;
            vector<int> temp(a.begin() + l - 1, a.begin() + r);
            for (int x : temp) {
                sum += x;
            }
            cout << sum << endl;
        } else {
            int temp = a[r - 1];
            for (int i = r - 1; i > l - 1; --i) {
                a[i] = a[i - 1];
            }
            a[l - 1] = temp;
        }
    }

    return 0;
}
