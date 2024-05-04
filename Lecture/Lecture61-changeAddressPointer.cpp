#include<iostream>
using namespace std;

int main(){
    int x = 45;
    cout << "X: " << x << endl;

    int *p = &x;
    cout << "*p: " << *p << endl;

    *p = 56;
    cout << "*p: " << *p << endl;
    cout << "X: " << x << endl;
    return 0;
}