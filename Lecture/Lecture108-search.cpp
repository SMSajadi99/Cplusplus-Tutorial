#include <iostream>
#include <vector>
using namespace std;

int searchHouse(int n, vector<int>& nums, int m) {
    for (int i = 0; i < n; ++i) {
        if (nums[i] == m) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    int m;
    cin >> m;

    int result = searchHouse(n, nums, m);
    cout << result << endl;

    return 0;
}
