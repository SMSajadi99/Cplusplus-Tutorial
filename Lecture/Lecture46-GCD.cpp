#include <iostream>
#include <sstream>
#include <cmath>

using namespace std; 

int main()
{
    string Line;
    getline(cin,Line);

    istringstream iss(Line);
    int num_1, num_2,max_num=0;
    iss >> num_1 >> num_2;

    for (int i = 1; i < max(num_1,num_2); i++)
    {
        if ((num_1 % i == 0) && (num_2 % i == 0))
        {
            max_num = max(max_num,i);
        }
        
    }
    cout << max_num;
   
    return 0;
}
