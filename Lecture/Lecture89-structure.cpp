#include<iostream>
using namespace std;

struct student{
    string name;
    string family_name;
    int age;
    float score;
};

int main(){
    int n;
    cin >> n;

    student* students = new student[n];

    for(int i = 0; i < n; i++){
        student stu;
        cin >> stu.name;
        cin >> stu.family_name;
        cin >> stu.age;
        cin >> stu.score;

        students[i] = stu;
    }

    for(int i = 0; i < n; i++){
        cout << students[i].name << endl;
        cout << students[i].family_name << endl;
        cout << students[i].age << endl;
        cout << students[i].score << endl;
    }

    delete[] students;
    return 0;
}