#include<iostream>
#include<sstream>
#include<cmath>
using namespace std;

int main()
{
    string input; 
    getline(cin, input); // Read the entire line

    // Use istringstream to split the line
    istringstream iss(input);

    float Slide1, Slide2, Slide3, pow_Slide1, pow_Slide2, pow_Slide3;
    //         cout << pow_Slide1 << endl;
    //         cout << Slide1 * Slide1 << endl;
    // https://chat.openai.com/share/8b48d120-d97c-47f4-98af-86a0bd6b8344

    // Extract the first and second numbers from the stringstream
    iss >> Slide1 >> Slide2 >> Slide3;
    pow_Slide1 = pow(Slide1,2);
    pow_Slide2 = pow(Slide2,2);
    pow_Slide3 = pow(Slide3,2);

    if ((pow_Slide1 + pow_Slide2 - pow_Slide3 == 0) || (pow_Slide1 - pow_Slide2 + pow_Slide3 == 0) || (-pow_Slide1 + pow_Slide2 + pow_Slide3 == 0))
    {
        cout << "Bale";
    }
    else
    {
        cout << "Na";
    }

    return 0;
}
