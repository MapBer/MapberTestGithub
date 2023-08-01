#include <iostream>
#include <fstream>
#include <set>
using namespace std;
int main()
{
    ifstream infile("My.txt");
    if (infile.is_open())
        cout << "File is opened" << endl;
    int id;
    string name;
    int roll;
    infile >>id>> name >> roll;
    if (infile.eof())
        cout << "File is end" << endl;
    infile.close();
    cout << id<<endl << name << endl
         << roll;

}
