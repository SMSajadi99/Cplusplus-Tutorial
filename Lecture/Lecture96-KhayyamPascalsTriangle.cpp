#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;


    for (int i = 0; i < n; i++) {
        int number = 1; 
        cout << "1 "; 


        for (int j = 1; j <= i; j++) {

            number = number * (i - j + 1) / j;
            cout << number << " "; 
        }
        cout << endl; 
    }

    return 0;
}
