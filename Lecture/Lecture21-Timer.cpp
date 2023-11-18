#include<iostream>
using namespace std;

int main()
{
    int totla_second, hours, minute, second;
    cin >> totla_second;

    hours = totla_second / (60 * 60);
    minute = (totla_second - hours * 60 * 60) / 60;
    second = totla_second - hours * 60 * 60 - minute * 60;

    cout << hours << " : " << minute << " : " << second;
    return 0;
}
