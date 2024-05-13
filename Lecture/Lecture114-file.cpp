#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    ifstream input_file(R"(D:\GitHub\Cplusplus-Tutorial\Lecture\users.txt)");

    if (!input_file)
        return -1;

    string name, family;
    int age;

    for(int i = 0; i < 3; i++)
    {
        input_file >> name >> family >> age;

        cout << name << " " << family << " " << age << endl;
    }
    input_file.close();
    return 0;
}