#include<iostream>
using namespace std;

int main()
{
    int num, NumberCounter = 0;
    cin >> num;
    while (true)
    {
        num /= 10;
        NumberCounter += 1;

        if (num == 0)
        {
            break;
        }
        
    }
    cout << NumberCounter;
    
    return 0;
}
