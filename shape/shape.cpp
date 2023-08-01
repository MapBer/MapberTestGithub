#include <iostream>
using namespace std;

class shape
{
public:
    virtual float area() = 0;
    virtual float perimeter() = 0;
};
class rectangle : public shape
{
private:
    float length;
    float breadth;

public:
    rectangle(float l, float b)
    {
        length = l;
        breadth = b;
    }
    float area()
    {
        return breadth * length;
    }
    float perimeter()
    {
        return 2 * (length + breadth);
    }
};
class circle : public shape
{
private:
    float radius;

public:
    circle(float r)
    {
        radius = r;
    }
    float area()
    {
        return 3.14f * radius * radius;
    }
    float perimeter()
    {
        return 3.14 * 2 * radius;
    }
};
int main()
{
    shape *s = new rectangle(10, 5);
    cout << "Area of Rectangle " << s->area() << endl;
    cout << "Perimeter of Rectangle " << s->perimeter() << endl;

    s = new circle(10);
    cout << "Area of Circle " << s->area() << endl;
    cout << "Perimeter of Circle " << s->perimeter() << endl;
}