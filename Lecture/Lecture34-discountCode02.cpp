#include<iostream>
#include<sstream>
using namespace std;

int main()
{
    string input; 
    getline(cin, input); // Read the entire line

    int counter = 0;

    for (char c : input) {
        if (c == '7') {
            counter += 5;
        } else if (c == 's') {
            counter += 10;
        } else if (c == '*') {
            counter += 30;
        }
    }

    cout << counter;

    return 0;
}
