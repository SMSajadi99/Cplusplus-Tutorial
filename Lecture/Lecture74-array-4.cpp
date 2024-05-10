#include<iostream>
using namespace std;

int main()
{
    int array[10];
    for(int i = 0; i < 10; i++)
    {
        cin >> array[i];
    }
    int sum = 0;
    for(int i = 0; i < 10; i++)
    {
        sum += array[i];
    }
    cout << sum << endl;
    return 0;
}