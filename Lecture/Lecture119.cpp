#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int main() {
    ifstream inputFile(R"(entry_file.txt)");

    if (!inputFile.is_open()) {
        cout << "Unable to open file";
        return 1;
    }

    vector<string> lines;
    string line;

    while (getline(inputFile, line)) {
        lines.push_back(line);
    }

    inputFile.close();

    lines[0].replace(lines[0].find('\n'), 1, "#\n");

    ofstream outputFile(R"(entry_file.txt)");

    if (!outputFile.is_open()) {
        cout << "Unable to open file";
        return 1;
    }

    for (const auto &line : lines) {
        outputFile << line << endl;
    }

    outputFile.close();

    cout << "Changes applied successfully.";

    return 0;
}
