#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> numbers(n);
    
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }
    
    for (int i = n - 1; i >= 0; --i) {
        int reversed = 0;
        int temp = numbers[i];
        while (temp != 0) {
            reversed = reversed * 10 + temp % 10;
            temp /= 10;
        }
        std::cout << reversed << std::endl;
    }
    
    return 0;
}
