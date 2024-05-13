#include<iostream>
using namespace std;

int main()
{
    int array[6] = {3, 10, 12, 6, 8, 11};
    int n = 6;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(array[j + 1] < array[j])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}