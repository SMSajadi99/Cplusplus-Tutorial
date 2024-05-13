#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int binarySearch(vector<int>& arr, int x) {
    int left = 0, right = arr.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x)
            return 1; // Found
        else if (arr[mid] < x)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return 0; // Not found
}

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    for (int i = 0; i < q; ++i) {
        char query;
        int x;
        cin >> query >> x;
        
        if (query == '?') {
            cout << binarySearch(arr, x) << endl;
        }
    }

    return 0;
}
