#include<iostream>
using namespace std;

int main(){
    int x;
    int *p = &x;
    cout << "Address of x is: " << &x << endl;
    cout << "The p contains: " << p << endl;
    return 0;
}