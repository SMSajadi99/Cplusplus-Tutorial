#include<iostream>
#include <sstream>
using namespace std;

int main()
{
    string input; 
    int single_tile = 4 * 5;

    getline(cin, input); // Read the entire line

    // Use istringstream to split the line
    istringstream iss(input);

    int firstNumber, secondNumber;

    // Extract the first and second numbers from the stringstream
    iss >> firstNumber >> secondNumber;

    cout << (firstNumber * 100 * secondNumber * 100) / single_tile;
    return 0;
}
