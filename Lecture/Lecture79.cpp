#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    for (int i = 0; i < x; ++i) {
        int last = arr[n - 1];
        for (int j = n - 1; j > 0; --j) {
            arr[j] = arr[j - 1];
        }
        arr[0] = last;
    }
    
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
