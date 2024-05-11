#include <iostream>
#include <string>
using namespace std;

bool isValidBloodTest(string father, string mother, string child) {
    // Check if each blood type in child exists in parents' blood types
    for (char blood : child) {
        if (blood == '+' || blood == '-') continue; // Ignore Rh factor
        if (father.find(blood) == string::npos && mother.find(blood) == string::npos) {
            return false; // Child has a blood type not present in parents
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string father, mother, child;
        cin >> father >> mother >> child;

        if (isValidBloodTest(father, mother, child)) {
            cout << "valid" << endl;
        } else {
            cout << "invalid" << endl;
        }
    }

    return 0;
}
