#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<int> numbers;
    int num;
    
    for (int i = 0; i < 10; ++i) {
        cin >> num;
        numbers.push_back(num);
    }
    
    string output;
    for (int i = numbers.size() - 1; i >= 0; --i) {
        output += to_string(numbers[i]);
        if (i != 0) {
            output += "-";
        }
    }
    
    cout << output << endl;
    
    return 0;
}
