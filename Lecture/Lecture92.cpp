#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    string input;
    getline(cin, input);

    istringstream iss(input);
    vector<int> numbers;
    int num;

    while (iss >> num) {
        numbers.push_back(num);
    }

    for (int i = 0; i < numbers.size(); ++i) {
        if (numbers[i] % 12 != 0) {
            cout << numbers[i] << " ";
        }
    }

    return 0;
}
