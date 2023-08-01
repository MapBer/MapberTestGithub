#include <iostream >
using namespace std;

class base
{
private:
    int x;

public:
    base()
    {
        cout << "Default";
    }
    base(int x)
    {
        this->x = x;
        cout << "Parameter is " << x << endl;
    }
};
class derive : public base
{
private:
    int a;

public:
    derive()
    {
        cout << "default";
    }
    derive(int a)
    {
        cout << " Parameter is " << a << endl;
    }
    derive(int x, int a) : base(x)
    {
        cout << "Parameter is " << a << endl;
    }
};

int main()
{
    // base r(8);
    derive(7, 9);
}