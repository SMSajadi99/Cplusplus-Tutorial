#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> carrots(n);

    for (int i = 0; i < n; ++i) {
        cin >> carrots[i];
    }

    int max_carrot = *max_element(carrots.begin(), carrots.end());
    int min_carrot = *min_element(carrots.begin(), carrots.end());

    cout << "MAX: " << max_carrot << endl;
    cout << "MIN: " << min_carrot << endl;

    return 0;
}
