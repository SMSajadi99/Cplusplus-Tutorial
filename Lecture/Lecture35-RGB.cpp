#include<iostream>
#include<sstream>

using namespace std;

int main()
{
    string input;
    getline(cin, input); // Read the entire line

    // Use istringstream to split the line
    istringstream iss(input);

    string Collor_1, Collor_2, Collor_3;

    iss >> Collor_1 >> Collor_2 >> Collor_3;

    if ((Collor_1 == "R") && (Collor_2 == "R"))
    {
        cout << "Ghermezo Eshghe!";
    }
    else if (((Collor_1 == "B") && (Collor_2 == "B")) || ((Collor_1 == "B") && (Collor_3 == "B")))
    {
        cout << "Abio Eshghe!";
    }
    else
    {
        cout << "Doost Nadaram!";
    }

    return 0;
}

