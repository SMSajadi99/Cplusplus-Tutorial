#include<iostream>
#include<sstream>
using namespace std;

int main()
{
    string input; 
    getline(cin, input); // Read the entire line

    // Use istringstream to split the line
    istringstream iss(input);

    int Slide1, Slide2, Slide3;

    // Extract the first and second numbers from the stringstream
    iss >> Slide1 >> Slide2 >> Slide3;

    if (Slide1 + Slide2 > Slide3 && Slide1 + Slide3 > Slide2 && Slide2 + Slide3 > Slide1)
    {
        cout << "Bale";
    }
    else
    {
        cout << "Na";
    }
    

    
    return 0;
}
