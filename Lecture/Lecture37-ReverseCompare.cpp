#include <iostream>

using namespace std; 

int main()
{
    int reverse_num_1,reverse_num_2, num_1, num_2;
    cin >> reverse_num_1;
    cin >> reverse_num_2;
    num_1 = reverse_num_1 / 100 + (reverse_num_1 - (reverse_num_1 / 100) * 100 -  reverse_num_1 % 10) + (reverse_num_1 % 10) * 100;
    num_2 = reverse_num_2 / 100 + (reverse_num_2 - (reverse_num_2 / 100) * 100 -  reverse_num_2 % 10) + (reverse_num_2 % 10) * 100;

    if (num_1 > num_2)
    {
        cout << reverse_num_2 << " < " << reverse_num_1;
    }
    else if (num_1 < num_2)
    {
        cout << reverse_num_1 << " < " << reverse_num_2;
    }
    else
    {
        cout << reverse_num_1 << " = " << reverse_num_2;
    }
    
    
    return 0;
}
