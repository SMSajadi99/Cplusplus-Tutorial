#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> studentNumbers(n - 1);
    for (int i = 0; i < n - 1; ++i) {
        cin >> studentNumbers[i];
    }

    sort(studentNumbers.begin(), studentNumbers.end());

    int missingStudent = -1;
    for (int i = 0; i < n - 1; ++i) {
        if (studentNumbers[i] != i + 1) {
            missingStudent = i + 1;
            break;
        }
    }

    if (missingStudent == -1) {
        missingStudent = n;
    }

    cout << missingStudent << endl;

    return 0;
}
