#include <iostream>

using namespace std;

int main()
{
    int num_1,num_2;
    cin >> num_1;
    cin >> num_2;
    
    if ((num_2 - num_1) % 12 == 0)
    {
        cout << "Yes" ;
    }
    else
    {
        cout << "No";
    }
    
    return 0;
}
