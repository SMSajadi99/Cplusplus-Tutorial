#include<iostream>
using namespace std;

int main()
{
    int array[8] = {1, 15, 12, 13, 9, 5, 4, 2};
    int n = 8;
    for(int i = 0; i < n; i++)
    {
        int j = i;
        while(j > 0 && array[j] < array[j - 1])
        {
            int temp = array[j];
            array[j] = array[j - 1];
            array[j - 1] = temp;
            j--;
        }
    }
    for(int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}