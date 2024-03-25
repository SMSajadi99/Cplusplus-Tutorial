#include <iostream>
#include<cmath>

using namespace std; 

int main()
{
    int num,splite_num,remin_num;
    cin >> num;
    splite_num = num;

    int size = trunc(log10(num)) + 1;
    int Result = 0;

    while (true)
    {
        remin_num = splite_num % 10;
        splite_num = splite_num / 10;

        Result = Result + remin_num * pow(10, size - 1);
        if (size == 1)
        {
            break;
        }
        size -= 1;
    }
    cout << Result;
    return 0;
}
