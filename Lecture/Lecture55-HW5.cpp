#include <iostream>
#include <sstream>
#include <cmath>
using namespace std;

int main()
{
    string line;
    getline(cin,line);

    istringstream iss(line);
    int num_1, num_2;
    iss >> num_1 >> num_2;
    
    if (num_2 > 10)
    {
        cout << "Left " << 10 - num_1 + 1 << " " << abs(num_2 - 10) + 1 << endl;
    }
    else
    {
        cout << "Right " << 10 - num_1 + 1 << " " << abs(num_2 - 10) + 1 << endl;
    }
    
    
    return 0;
}
