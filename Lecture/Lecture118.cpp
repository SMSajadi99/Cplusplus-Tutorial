#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    fstream file;
    file.open("users.txt");

    if (!file)
        return -1;

    string name, family;
    int score;

    string new_names[] = { "soroush", "reyhaneh" };
    int new_scores[] = { 13, 21 };
    string names[4];
    int scores[4];

    for (int i = 0; i < 4; i++)
    {
        file >> names[i] >> scores[i];
        scores[i]++;
    }

    file.seekg(0, ios::beg);

    for (int i = 0; i < 4; i++)
    {
        file << names[i] << " " << scores[i] << endl;
    }
    for (int i = 0; i < 2; i++)
    {
        file << new_names[i] << " " << new_scores[i] << endl;
    }

    file.close();
    return 0;
}