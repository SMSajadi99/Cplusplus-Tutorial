#include <iostream>
using namespace std;

void bubbleSortDescending(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] < arr[j+1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    int numbers[n];
    
    // Input numbers
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    // Sort the numbers
    bubbleSortDescending(numbers, n);

    // Output the sorted numbers
    for (int i = 0; i < n; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
