#include <iostream>

void towerOfHanoi(int n, char source, char target, char auxiliary, int &step) {
    if (n == 1) {
        std::cout << step << " " << source << " " << target << std::endl;
        step++;
        return;
    }
    towerOfHanoi(n - 1, source, auxiliary, target, step);
    std::cout << step << " " << source << " " << target << std::endl;
    step++;
    towerOfHanoi(n - 1, auxiliary, target, source, step);
}

int main() {
    int n;
    std::cin >> n;
    int step = 1;
    towerOfHanoi(n, 'A', 'C', 'B', step);
    return 0;
}
