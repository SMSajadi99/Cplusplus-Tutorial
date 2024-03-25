#include <iostream>

using namespace std; 

int main()
{
    for (int i = 1; i < 11; i++)
    {
       for (int j = 1; j < 11; j++)
       {
        if (i < j)
        {
            cout << -1 * i * j << " ";
        }
        else if (j < i)
        {
            cout << i * j << " ";
        }
        else
        {
            cout << 0 << " ";
        }
       }
       cout << "\n";

    } 
    return 0;
}
