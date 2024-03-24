#include <iostream>>
#include <sstream>

using namespace std; 

int main()
{
    string input1,input2,input3;
    getline(cin, input1); // Read the entire line
    getline(cin, input2); // Read the entire line
    getline(cin, input3); // Read the entire line

    // Use istringstream to split the line
    istringstream iss1(input1);
    int num1_1, num1_2;
    iss1 >> num1_1 >> num1_2;

    istringstream iss2(input2);
    int num2_1, num2_2;
    iss2 >> num2_1 >> num2_2;

    istringstream iss3(input3);
    int num3_1, num3_2;
    iss3 >> num3_1 >> num3_2;

    // Check x
    int x,y;
    if (num1_1 == num2_1)
    {
        if (num1_1 != num3_1)
        {
            x = num3_1;
        }
        
    }
    else if (num1_1 != num2_1)
    {
        if (num1_1 == num3_1)
        {
            x = num2_1;
        }
        else if (num2_1 == num3_1)
        {
            x = num1_1;
        }
    }
    
    // Check x
    if (num1_2 == num2_2)
    {
        if (num1_2 != num3_2)
        {
            y = num3_2;
        }
        
    }
    else if (num1_2 != num2_2)
    {
        if (num1_2 == num3_2)
        {
            y = num2_2;
        }
        else if (num2_2 == num3_2)
        {
            y = num1_2;
        }
    }
    
    cout << x <<" "<< y;
    return 0;
}
