#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() {
    vector<double> numbers;
    double sum = 0;

    for (int i = 0; i < 10; ++i) {
        double num;
        cin >> num;
        numbers.push_back(num);
        sum += num;
    }

    double average = sum / 10;

    int count = 0;
    for (double num : numbers) {
        if (num > average) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
