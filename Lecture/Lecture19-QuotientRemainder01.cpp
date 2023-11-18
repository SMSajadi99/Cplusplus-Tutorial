#include<iostream>
using namespace std;

int main()
{
    int a = 1 + 2;
    int b = 5.0 - 3;
    cout << "a = " << a << "   b = " << b << endl;
    int c = a * 2;
    int d = c / 2;
    cout << "a = " << a << "   c = " << c << "   d = " << d << endl;
    int s;
    int t = 12;
    cout << "s + t = " << s + t << "   s * 3 = " << s * 3 << "   4 * t = " << 4 * t << endl;
    int x = 2;
    x++;
    cout << x << endl;
    x--;
    cout << x << endl;
    return 0;
}