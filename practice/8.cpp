#include <iostream>
#include <map>
using namespace std;
int main(){
    map <int , string > student;
    student.insert(pair<int , string>  (1, "abc"));
    student.insert(pair<int , string>  (2, "xyz"));
    student.insert(pair<int , string>  (3, "hgf"));
    map<int,string> :: iterator it;
    for (it=student.begin();it != student.end();it++){
        cout << it->first << " "<< it -> second<< endl;
    }
}