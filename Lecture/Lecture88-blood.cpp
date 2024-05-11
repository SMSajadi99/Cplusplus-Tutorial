#include <iostream>
#include <string>
using namespace std;

bool isValidBloodType(string father, string mother, string child) {

    for (char c : child) {
        if (father.find(c) == string::npos && mother.find(c) == string::npos) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        string father, mother, child;
        cin >> father >> mother >> child;

        if (child == "O-" || child == "O+") {
            cout << "valid" << endl; 
        } else if (isValidBloodType(father, mother, child)) {
            cout << "valid" << endl;
        } else {
            cout << "invalid" << endl;
        }
    }

    return 0;
}
