#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    string line;
    getline(cin,line);

    istringstream iss(line);
    int num_1, num_2, num_3, num_4;
    iss >> num_1 >> num_2 >> num_3 >> num_4;
    
    if ((num_1 + num_2 + num_3) % num_4 == 0)
    {
        cout << "nemituni" << endl;
    }
    else
    {
        cout << "mituni" << endl;
    }
    
    
    return 0;
}
