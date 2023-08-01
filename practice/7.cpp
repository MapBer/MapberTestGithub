#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v = {4,6,7,8,9,12};
    v.push_back(14);
   v.push_back(30);
    vector<int> :: iterator it;
    for (it= v.begin(); it != v.end(); it++){
        cout << *it << endl;
    }
   
}