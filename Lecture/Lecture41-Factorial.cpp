#include <iostream>

using namespace std;

int main()
{
    int num,Factorial = 1;
    cin >> num;

    for (int i = 1; i < num + 1; i++)
    {
        Factorial = Factorial * i;
    }
    cout << Factorial;
    
    return 0;
}
