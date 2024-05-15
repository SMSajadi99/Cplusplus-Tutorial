#include <fstream>
using namespace std;

int main() {
    ofstream outputFile;

    outputFile.open("my_first_file.txt");

    if (outputFile.is_open()) {

        outputFile << "Hello File!\n";

        outputFile.close();
    }

    return 0;
}
