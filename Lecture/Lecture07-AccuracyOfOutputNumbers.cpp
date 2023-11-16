#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    float a = 2.45;
    float b = -12.12456;

    cout << "a is: " << fixed << setprecision(3) << a << endl;
    cout << "b is: " << fixed << setprecision(2) << b << endl;
    return 0;
}