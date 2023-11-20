#include<iostream>
using namespace std;

int main()
{
    float Temperature;
    cin >> Temperature;

    if (Temperature > 100)
    {
        cout << "Steam";
    }
    else if(Temperature >= 0 & Temperature <= 100)
    {
        cout << "Water";
    }
    else
    {
        cout << "Ice";
    }
    return 0;
}
