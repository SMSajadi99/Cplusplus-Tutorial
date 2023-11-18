#include<iostream>
#include<sstream>
using namespace std;

int main()
{
    string input; 
    getline(cin, input);

    istringstream iss(input);

    int num1 , num2 , num3 , num4 , num5 , num6;
    int King = 1, Queen = 1, Rook = 2, Bishop = 2, Knight = 2, Pawn = 8;

    iss >> num1 >> num2 >> num3 >> num4 >> num5 >> num6;

    cout << King - num1 << " " << Queen - num2 << " " << Rook - num3 << " " << Bishop - num4 << " " << Knight - num5 << " " << Pawn - num6;
    return 0;
}
