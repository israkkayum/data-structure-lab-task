#include <iostream>
#include <list>
using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator i;
    for (i = lst.begin(); i != lst.end(); i++)
    {
        cout << *i << "  ";
    }
}

int main()
{
    list<int> mark;
    mark.push_back(10);
    mark.push_back(20);
    mark.push_back(30);
    mark.push_back(56);
    mark.push_back(60);
    mark.push_back(90);

    mark.remove(30);
    mark.pop_front();
    mark.pop_back();

    display(mark);
}