#include <iostream>
#include <string>
using namespace std;

class Test
{
private:
    string name;
    int mark;

public:
    Test(string name, int mark)
    {
        this->name = name;
        this->mark = mark;
    }
    friend ostream &operator<<(ostream &out, Test &t);
};
ostream &operator<<(ostream &out, Test &t)
{
    out << "Name of student is " << t.name << endl
        << "Mark is" << t.mark;
    return out;
}

int main()
{
    int n;
    string name;
    int mark;
    cin >> n;
    Test *p[n];
    for (int i = 0; i < n; i++)
    {
        cin >> name;
        cin >> mark;
        p[i] = new Test(name, mark);
    }
    for (int i = 0; i < n; i++)
    {
        cout << *p[i] << endl;
    }
}