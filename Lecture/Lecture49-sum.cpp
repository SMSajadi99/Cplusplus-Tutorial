#include <iostream>

using namespace std; 

int main()
{
    int num, count_flow = 0, count_final = 0;
    cin >> num;

    for (int i = 1; i < num + 1; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if (j == i)
            {
                cout << j;
                count_flow += 1;
            }

            else if (j != 0)
            {
                cout << j << "+";
                count_flow += 1;
            }

            
            
        }
        cout << " = "<< count_flow << endl;
        count_final += count_flow;
        
    } 
    cout << "Total sum of series is: " << count_final;
    return 0;
}
