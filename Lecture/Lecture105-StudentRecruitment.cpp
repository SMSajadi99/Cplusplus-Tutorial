#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> students(n - 1);
    for (int i = 0; i < n - 1; ++i) {
        cin >> students[i];
    }

    sort(students.begin(), students.end());

    int missing_student = 1;
    for (int i = 0; i < n - 1; ++i) {
        if (students[i] != i + 1) {
            missing_student = i + 1;
            break;
        }
    }

    cout << missing_student << endl;

    return 0;
}
