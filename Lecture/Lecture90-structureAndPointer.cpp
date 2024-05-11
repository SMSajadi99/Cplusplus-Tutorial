#include<iostream>
using namespace std;

struct student{
    string name;
    string family_name;
    int age;
    float score;
};

int main(){
    student stu;
    stu.name = "Ali";
    stu.family_name = "Rezaei";
    stu.age = 18;
    stu.score = 18.78;

    student* p = &stu;
    cout << p->name << endl;
    cout << p->family_name << endl;
    cout << p->age << endl;
    cout << p->score << endl;
    return 0;
}