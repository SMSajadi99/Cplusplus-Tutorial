#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;

int main()
{
    string line;
    getline(cin,line);

    istringstream iss(line);
    int num_1, num_2, num_3, num_4, num_5;
    iss >> num_1 >> num_2 >> num_3 >> num_4 >> num_5;

        int max_num = max(max(max(max(num_1, num_2), num_3), num_4), num_5);

    if (num_1 == max_num)
        cout << 1 << endl;
    else if (num_2 == max_num)
        cout << 2 << endl;
    else if (num_3 == max_num)
        cout << 3 << endl;
    else if (num_4 == max_num)
        cout << 4 << endl;
    else
        cout << 5 << endl;

    return 0;
}
