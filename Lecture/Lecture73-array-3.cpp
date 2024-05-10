#include<iostream>
using namespace std;

int main()
{
    int list_adad[10] = {1, 2, 3, 4, 5 , 6, 7, 8, 9, 10};
    int new_list[4] = {list_adad[2], list_adad[3], list_adad[4], list_adad[5]};
    for(int i = 0; i < 5; i++)
    {
        cout << list_adad[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < 4; i++)
    {
        cout << new_list[i] << " ";
    }
    return 0;
}
