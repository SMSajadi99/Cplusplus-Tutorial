#include <iostream>
#include <vector>

using namespace std;

void printRanges(const vector<int>& arr, int k) {
    int n = arr.size();
    
    for (int i = 0; i <= n - k; ++i) {
        bool isAscending = true;
        for (int j = i; j < i + k - 1; ++j) {
            if (arr[j] >= arr[j + 1]) {
                isAscending = false;
                break;
            }
        }
        
        if (isAscending) {
            cout << i << " to " << i + k - 1 << endl;
        }
    }
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    printRanges(arr, k);

    return 0;
}
