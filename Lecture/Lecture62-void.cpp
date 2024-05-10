#include <iostream>
using namespace std;

void parity(int x)
{
    if(x % 2 == 0)
        cout << "even";
    else
        cout << "odd";
}

int main()
{
    int a = 12;
    parity(a);
    return 0;
}