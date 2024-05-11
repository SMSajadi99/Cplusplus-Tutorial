#include <iostream>
#include <vector>

using namespace std;

int main() {
    int q;
    cin >> q;

    vector<int> arr;

    for (int i = 0; i < q; ++i) {
        char op;
        cin >> op;

        if (op == '+') {
            int pos, num;
            cin >> pos >> num;
            if (pos > arr.size()) {
                arr.push_back(num);
            } else {
                arr.insert(arr.begin() + pos - 1, num);
            }
        } else if (op == '-') {
            int pos;
            cin >> pos;
            arr.erase(arr.begin() + pos - 1);
        }

        if (arr.empty()) {
            cout << "EMPTY" << endl;
        } else {
            for (int j = 0; j < arr.size(); ++j) {
                cout << arr[j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
