#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;

int main()
{
    string Line_1,Line_2;
    getline(cin,Line_1);
    getline(cin,Line_2);

    istringstream iss1(Line_1);
    string char_1, char_2, char_3;
    iss1 >> char_1 >> char_2 >> char_3;

    istringstream iss2(Line_2);
    int num_1, num_2, num_3;
    iss2 >> num_1 >> num_2 >> num_3;

    if (char_1 == char_2)
    {
        cout << "Max : " << max(max(num_1,num_2),num_3);
    }
    else if (char_1 == char_3)
    {
        cout << "Min : " << min(min(num_1,num_2),num_3);
    }
    else
    {
        cout << "None";
    }
    
    return 0;
}
