#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> excersise = {12,45,67,89,123,213,309,463,522,657,812} ;
    vector<int>:: iterator it;
    it = excersise.begin();
    excersise.erase( it);
    int size = excersise.size();
    for (int i=0;i<size ;i++){
        cout << excersise[i] <<" ";
    }
}