#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // Open the input file
    ifstream inputFile("my_belladi_code.txt");

    // Check if the file opened successfully
    if (!inputFile) {
        cerr << "Error opening file!" << endl;
        return 1; // Exit with error code
    }

    int n;
    inputFile >> n; // Read the number of elements

    int sum = 0;
    int number;

    // Read and sum the numbers
    for (int i = 0; i < n; ++i) {
        inputFile >> number;
        sum += number;
    }

    // Close the file
    inputFile.close();

    // Output the sum
    cout << sum;

    return 0;
}
