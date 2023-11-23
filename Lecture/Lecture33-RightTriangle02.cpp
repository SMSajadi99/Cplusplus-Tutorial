#include<iostream>
#include<sstream>
using namespace std;

int main()
{
    string input; 
    getline(cin, input); // Read the entire line

    // Use istringstream to split the line
    istringstream iss(input);

    int angle1, angle2, angle3;

    // Extract the first and second numbers from the stringstream
    iss >> angle1 >> angle2 >> angle3;

    if ((angle1 + angle2 + angle3 == 180) && (angle1 == 90 || angle2 == 90 || angle3 == 90) && (angle1 > 0 && angle2 > 0 && angle3 > 0))
    {
        cout << "Bale";
    }
    else
    {
        cout << "Na";
    }

    return 0;
}
