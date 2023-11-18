#include<iostream>
using namespace std;

int main()
{
    int a = 4;
    int b = 5;

    cout << "a * 1.0 / b = " << a * 1.0 / b << endl;
    cout << "a / (b * 1.0) = " << a / (b * 1.0) << endl;
    cout << "float(a) / b = " << float(a) / b << endl;
    cout << "a / float(b) = " << a / float(b) << endl;
    cout << "------ These have different meaning! ------" << endl;
    cout << "float(a / b) = " << float(a / b) << endl;
    cout << "a / b * 1.0 = " << a / b * 1.0 << endl;
    return 0;
}