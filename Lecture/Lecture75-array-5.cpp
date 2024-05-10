#include<iostream>
using namespace std;

int main()
{
    int array[50];
    for(int i = 0; i < 50; i++)
    {
        cin >> array[i];
    }
    int sum = 0;
    for(int i = 0; i < 50; i++)
    {
        if(array[i] == 0)
        {
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}