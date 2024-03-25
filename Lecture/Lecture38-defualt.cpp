#include<iostream>
using namespace std;

int main(){
    int num = 4;
    switch(num){
        case 1:
            cout << 1 << endl;
            break;
        case 2:
            cout << 2 << endl;
            break;
        case 3:
            cout << 3 << endl;
            break;
        default:
            cout << "Case not found!" << endl;
            break;
    }
    return 0;
}