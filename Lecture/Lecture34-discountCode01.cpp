#include<iostream>
#include<sstream>
using namespace std;

int main()
{
    string input; 
    getline(cin, input); // Read the entire line

    // Use istringstream to split the line
    istringstream iss(input);

    char char1, char2, char3;
    int counter = 0;

    // Extract the first and second numbers from the stringstream
    iss >> char1 >> char2 >> char3;
    if ((char1 == '7') || (char2 == '7') || (char3 == '7'))
    {
        counter += 5;
    }
    if ((char1 == 's') || (char2 == 's') || (char3 == 's'))
    {
        counter += 10;
    }
    if ((char1 == '*') || (char2 == '*') || (char3 == '*'))
    {
        counter += 30;
    }
    cout << counter;

    return 0;
}
