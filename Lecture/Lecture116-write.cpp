#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    string names[] = {"ali", "mohsen", "zahra"};
    string families[] = {"rezaei", "sadeghi", "karimi"};
    int ages[] = {23, 45, 19};

    ofstream output_file("users.txt");

    if (!output_file)
        return -1;

    for(int i = 0; i < 3; i++)
    {
        output_file << names[i] << " " << families[i] << " " << ages[i] << endl;
    }
    output_file.close();
    return 0;
}