#include<iostream>
using namespace std;

int main()
{
    char ch = 'c';
    cout << "The ASCII code of character" << ch << " is " << int(ch) << endl;

    int ascii_code = 99;
    cout << char(ascii_code) << endl;
    return 0;
}