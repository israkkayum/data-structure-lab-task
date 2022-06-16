#include <iostream>
#include <list>
using namespace std;

void display(list<int> &value)
{
    list<int>::iterator i;
    for (i = value.begin(); i != value.end(); i++)
    {
        cout << *i << "  ";
    }
}

int main()
{
    list<int> value;
    value.push_back(10);
    value.push_back(20);
    value.push_back(30);
    value.push_back(56);
    value.push_back(60);
    value.push_back(90);

    value.remove(30);
    value.pop_front();
    value.pop_back();

    display(value);
}