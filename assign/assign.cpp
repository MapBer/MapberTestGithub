#include <iostream>
#include <cstdlib>
#include <vector>
#include <time.h>
using namespace std;

int main()
{
    srand(time(0));
    vector<int> excersise = {12, 45, 67, 89, 123, 213, 309, 463, 522, 657, 812, 976, 11, 567, 85};
    int size = excersise.size();
    cout << size << endl;
    int member = 4;
    int number = size / member;
    int remainer = size % member;
    int srand(size);
    vector<int>::iterator it;
    it = excersise.begin();
    for (int i = 1; i <= member; i++)
    {
        cout << "Person " << i << ": ";
        if (remainer > 0)
        {
            for (int i = 0; i <= number; i++)
            {
                int assigment = rand() % ((size - 1) - 0 + 1) + 0;
                cout << excersise[assigment] << " ";
                excersise.erase(it + assigment);
                size -= 1;
            }
        }
        else
        {
            for (int i = 0; i < number; i++)
            {
                int assigment = rand() % ((size - 1) - 0 + 1) + 0;
                cout << excersise[assigment] << " ";
                excersise.erase(it + assigment);
                size -= 1;
            }
        }
        remainer -= 1;
        cout << endl;
    }
}