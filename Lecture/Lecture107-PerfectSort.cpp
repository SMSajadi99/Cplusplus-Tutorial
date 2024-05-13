#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Student {
    string name;
    double gpa;
    int sports;
};

// Function to compare students for sorting
bool compareStudents(const Student &a, const Student &b) {
    if (a.gpa != b.gpa)
        return a.gpa > b.gpa; // Sort by GPA in descending order
    return a.sports > b.sports; // If GPA is the same, sort by number of sports in descending order
}

int main() {
    int n;
    cin >> n;
    
    vector<Student> students(n);
    
    // Input students' data
    for (int i = 0; i < n; ++i) {
        cin >> students[i].name;
        int numGrades;
        cin >> numGrades;
        double sum = 0;
        for (int j = 0; j < numGrades; ++j) {
            double grade;
            cin >> grade;
            sum += grade;
        }
        // Calculate GPA
        students[i].gpa = sum / numGrades;
        cin >> students[i].sports;
        // Ignore sports names
        string sport;
        for (int j = 0; j < students[i].sports; ++j)
            cin >> sport;
    }
    
    // Sort students
    sort(students.begin(), students.end(), compareStudents);
    
    // Output sorted student names
    for (const auto &student : students)
        cout << student.name << endl;
    
    return 0;
}
