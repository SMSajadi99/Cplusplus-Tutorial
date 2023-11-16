#include<iostream>
using namespace std;

int main()
{
    char Alphabet;
    cin >> Alphabet;

    if (int(Alphabet) > 96 && int(Alphabet) < 123)
    {
        cout << "This letter is " << int(Alphabet) - 97 + 1 << " of Alphabet.";
    }
    else if (int(Alphabet) > 64 && int(Alphabet) < 91)
    {
        cout << "This letter is " << int(Alphabet) - 65 + 1 << " of Alphabet.";
    }
    else
    {
        cout << "oops! pls enter correct letter :)";
    }
    
    return 0;
}
