#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int a = 123;
    int b = -5622;

    cout << "a is: " << setw(2) << setfill('0') << a << endl;
    cout << "b is : " << setw(8) << setfill('0') << b << endl;
    return 0;
}