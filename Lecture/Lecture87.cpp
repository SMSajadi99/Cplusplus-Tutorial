#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    int n;
    cin >> n; 

    int max_unique_letters = 0; 

    for (int i = 0; i < n; ++i) {
        string name;
        cin >> name; 

        set<char> unique_letters; 

        for (char c : name) {
            unique_letters.insert(c);
        }

        max_unique_letters = max(max_unique_letters, (int)unique_letters.size());
    }

    cout << max_unique_letters << endl; 
    return 0;
}
