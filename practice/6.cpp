#include <iostream>
using namespace std;
int main()
{
    int a = 3, b = 7, c = 18;
    int *p[3];

    p[0] = &a;
    p[1] = &7;
    p[2] = &c;

    for (int i = 0; i < 3; i++)
    {
        cout << *p[i] << endl;
    }
}