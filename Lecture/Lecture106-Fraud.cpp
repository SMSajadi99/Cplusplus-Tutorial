#include <iostream>
#include <map>

int main() {
    int n;
    std::cin >> n;

    std::map<int, int> counts;

    for (int i = 0; i < n; ++i) {
        int bill;
        std::cin >> bill;
        counts[bill]++;
    }

    int maxCount = 0;
    int winningBill = 0;

    for (const auto& pair : counts) {
        if (pair.second > maxCount || (pair.second == maxCount && pair.first < winningBill)) {
            maxCount = pair.second;
            winningBill = pair.first;
        }
    }

    std::cout << winningBill << " " << maxCount << std::endl;

    return 0;
}
