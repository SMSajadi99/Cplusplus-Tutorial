#include<iostream>
using namespace std;
// This code has error which conveys the correct understanding of the term Constance
int main()
{
    const int myNum = 15;
    myNum = myNum + 5;
    cout << myNum;
}