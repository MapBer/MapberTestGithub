#include <iostream>
using namespace std;

class rationalNumber
{
private:
    int p;
    int q;

public:
    rationalNumber(int p = 0, int q = 1)
    {
        this->p = p;
        this->q = q;
    }
    friend rationalNumber operator+(rationalNumber r1, rationalNumber r2);
    friend ostream &operator<<(ostream &out, rationalNumber &r3);
};
rationalNumber operator+(rationalNumber r1, rationalNumber r2)
{
    rationalNumber temp;
    temp.p = r1.p * r2.q + r1.q * r2.p;
    temp.q = r1.q * r2.q;
    int tempQ = temp.q, tempP = temp.p;
    while (tempP != tempQ)
    {
        if (tempP > tempQ)
            tempP -= tempQ;
        else
            tempQ -= tempP;
    }
    temp.p /= tempP;
    temp.q /= tempQ;
    return temp;
}
ostream &operator<<(ostream &out, rationalNumber &r)
{
    out << "(" << r.p << "/" << r.q << ")";
    return out;
}
int main()
{
    rationalNumber r1(2, 3), r2(6, 9), r3;
    r3 = r1 + r2;
    cout << r3;
}