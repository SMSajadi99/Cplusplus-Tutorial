#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    string Line;
    getline(cin,Line);

    istringstream iss(Line);
    int num_1, num_2;
    iss >> num_1 >> num_2;

    for (int i = (num_1 + 1); i < num_2; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << " ";
        }
    }
    
    return 0;
}
