#include <iostream>
#include <sstream>
#include <cmath>

using namespace std; 

int main()
{
    int num, sum_num = 0;
    cin >> num;

    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum_num = sum_num + i;
        }
        
    }
    if (sum_num == num)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
