#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    int count_a = 0, count_b = 0, count_c = 0;
    string Line;
    while (true)
    {
        
        getline(cin,Line);

        istringstream iss(Line);
        int num_1, num_2, num_3;
        iss >> num_1 >> num_2 >> num_3;

        if ((num_1 < num_2) && (num_1 < num_3))
        {
            count_a += 1;
        }
        else if ((num_2 < num_1) && (num_2 < num_3))
        {
            count_b += 1;
        }
        else if ((num_3 < num_1) && (num_3 < num_2))
        {
            count_c += 1;
        }
        
        
        if ((num_1 == num_2) && (num_1 == num_3))
            break;
        ;
    }
    if ((count_a > count_b) && (count_a > count_c))
    {
        cout << "Eyval Bijan!";
    }
    else
    {
        cout << "Ey baba! Eshkal nadare.";
    }
    

    return 0;
}