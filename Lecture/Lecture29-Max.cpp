#include<iostream>
#include <algorithm> // for std::max_element
#include <list>
using namespace std;

// https://www.geeksforgeeks.org/insert-elements-c-stl-list/

int main()
{
    int num, loop = 4;
    list<int> list_num; 

    for (int i = 0; i < loop; i++)
    {
        cin >> num;
        list_num.push_front(num); 
    }

    auto maxElement = max_element(list_num.begin(), list_num.end());
    cout << *maxElement;
    /* If you print maxElement without dereferencing it (without the *),
    you will be printing the iterator itself, 
    not the value it points to. In C++, printing an iterator directly may not give you the desired value; 
    instead, it might print the memory address or some internal representation of the iterator.
    */
    return 0;
}
