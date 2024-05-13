#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> findSubstringIndices(const string& s, const string& p) {
    vector<int> indices;
    int n = s.length();
    int m = p.length();

    for (int i = 0; i <= n - m; ++i) {
        bool found = true;
        for (int j = 0; j < m; ++j) {
            if (s[i + j] != p[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            indices.push_back(i + 1);
        }
    }

    return indices;
}

int main() {
    string s, p;
    getline(cin, s);
    getline(cin, p);

    vector<int> result = findSubstringIndices(s, p);

    for (int i = 0; i < result.size(); ++i) {
        cout << result[i];
        if (i < result.size() - 1) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}
