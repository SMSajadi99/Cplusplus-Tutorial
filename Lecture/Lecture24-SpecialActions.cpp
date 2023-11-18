#include<iostream>
using namespace std;

int main()
{
    int a = 4;
    int b = 7;
    a += 9;
    b -= 2;
    a %= b;
    cout << a << " " << b << endl;
    return 0;
}