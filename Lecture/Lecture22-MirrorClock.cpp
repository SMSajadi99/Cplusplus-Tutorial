#include<iostream>
#include<iomanip>
#include<sstream>
using namespace std;

int main()
{
    string input; 
    getline(cin, input); // Read the entire line

    // Use istringstream to split the line
    istringstream iss(input);

    int hour, minute, mirror_hour, mirror_minute;

    // Extract the first and second numbers from the stringstream
    iss >> hour >> minute;
    mirror_hour = (12 - hour) % 12;
    mirror_minute = (60 - minute) % 60;

    cout << setw(2) << setfill('0') << mirror_hour << ":" << setw(2) << setfill('0') << mirror_minute;
    return 0;
}
