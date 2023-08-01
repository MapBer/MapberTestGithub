#include <iostream>
using namespace std;

class complex{
    public:
    int real;
    int img;
    
    complex (int r=0, int i=0){
        real =r;
        img =i;
    }
    friend complex operator+ (complex x1, complex x2){
        complex temp; 
        temp.real = x1.real + x2.real ;
        temp.img = x1.img + x2.img;
        return temp;
    }
    friend ostream & operator<< (ostream &out , complex &x);
};
    ostream & operator<< (ostream &out , complex &x){
        out<< x.real<< "+" << x.img << "i";
        return out ;
    }
int main(){
    complex c1 (9,10);
    cout <<  c1;

}