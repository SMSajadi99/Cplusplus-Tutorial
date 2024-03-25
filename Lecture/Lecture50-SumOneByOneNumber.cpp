#include <iostream>
#include <cmath>
    
using namespace std;

int main()
{
    long long num, count = 0, sum = 0, remind_num = 0;
    cin >> num;
    int size = num > 0 ? trunc(log10(num)) + 1 : 1;

    while (true)
    {
        remind_num = num % 10;
        num = num / 10;
        sum = sum + remind_num;

        if ((sum > 9) && (count == size))
        {
            num = sum;
            count = 0;
            sum = 0;
            size = num > 0 ? trunc(log10(num)) + 1 : 1;
        }
        else if ((sum <= 9) && (count == size))
        {
            break;
        }
        count += 1;
    }
    cout << sum;
    return 0;
}
