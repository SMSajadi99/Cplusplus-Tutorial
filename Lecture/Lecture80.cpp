#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> colors(100, 0); 

    for (int i = 0; i < N; ++i) {
        int color;
        cin >> color;
        colors[color - 1]++;
    }

    int min_count = N + 1; 
    int min_color = -1;
    for (int i = 0; i < 100; ++i) {
        if (colors[i] > 0 && colors[i] < min_count) {
            min_count = colors[i];
            min_color = i + 1;
        }
    }

    cout << min_color << endl;

    return 0;
}
