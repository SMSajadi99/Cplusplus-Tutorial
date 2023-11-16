#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int a = 567;

    cout << "pass is: " << setw(8) << setfill('*') << a << endl;
    return 0;
}