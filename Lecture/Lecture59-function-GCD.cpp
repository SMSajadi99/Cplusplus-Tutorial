#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;

int GCD(int x, int y, int z, int a, int b)
{

    return __gcd(__gcd(__gcd(__gcd(x, y),z),a),b);
}

int main()
{
    string Line;
    getline(cin,Line);

    istringstream iss(Line);
    int num_1, num_2, num_3, num_4, num_5;
    iss >> num_1 >> num_2 >> num_3 >> num_4 >> num_5;

    cout << GCD(num_1, num_2, num_3, num_4, num_5);
    return 0;
}