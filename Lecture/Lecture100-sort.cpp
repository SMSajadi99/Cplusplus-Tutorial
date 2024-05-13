#include<iostream>
using namespace std;

int main()
{
    int array[6] = {5, 8, 1, 3, 2, 6};
    int n = 6;
    for(int i = 0; i < n; i++)
    {
        int min_index = i;
        for(int j = i; j < n; j++)
        {
            if(array[j] < array[min_index])
            {
                min_index = j;
            }
        }
        int temp = array[i];
        array[i] = array[min_index];
        array[min_index] = temp;
    }
    for(int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}