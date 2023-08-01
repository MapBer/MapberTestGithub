#include <iostream>
#include <cstring>
#include <string>
using namespace std;
class Student
{
private:
    int roll;
    string name;
    int subject1;
    int subject2;
    int subject3;

public:
    Student(int roll, string name, int subject1, int subject2, int subject3)
    {
        this->roll = roll;
        this->name = name;
        this->subject1 = subject1;
        this->subject2 = subject2;
        this->subject3 = subject3;
    }
    int totalMark();
    char grade();
};
int Student ::totalMark()
{
    return subject1 + subject2 + subject3;
}
char Student ::grade()
{
    float percentage = (subject1 + subject2 + subject3) * 100 / 30;
    if (percentage < 40)
        return 'C';
    else if (percentage >= 40 && percentage <= 60)
        return 'B';
    else
        return 'A';
}
int main()
{
    int roll;
    string name;
    int subject1;
    int subject2;
    int subject3;
    cout << "Enter the roll of student: ";
    cin >> roll;
    cin.ignore();
    cout << "Enter the name of student: ";
    getline(cin, name);
    cout << "Enter the mark in 3 subjects: ";
    cin >> subject1 >> subject2 >> subject3;
    Student vo(roll, name, subject1, subject2, subject3);
    cout << vo.totalMark() << endl;
    cout << vo.grade(); 
}
