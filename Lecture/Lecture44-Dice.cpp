#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    int flow = 0, Result = 0;
    while (true)
    {
        cin >> flow;
        if (flow == 0)
            break;
        Result = Result + flow;
    }
    cout << Result;

    return 0;
}