#include<iostream>
using namespace std;

int main()
{
    int array[5] = {1, 2, 3};
    array[4] = 5;
    for(int i = 0; i < 5; i ++)
    {
        cout << array[i] << " ";
    }
    return 0;
}