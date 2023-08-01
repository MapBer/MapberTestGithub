#include <iostream>
using namespace std;

class rectangle {
    private:
    int length;
    int breadth;
    public:
    void setLenght(int l){
        length =l;
    }
    void setBreadth(int b){
        breadth = b;
    }
    int getLenght(){
        return length;
    }
    int getBreadth(){
        return breadth;
    }
    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
};
class cuboid:public rectangle {
    private:
    int height;
    public:
    cuboid (int l=0, int b=0, int h=0){
        setLenght(l);
        setBreadth(b);
        height =h;
    }
    void setHeight(int h){
        height=h;
    }
    int getHeight(){
        return height;
    }
    int volume(){
        return getLenght()*getBreadth()*height;
    }
};
int main(){
    cuboid c(4,5,6);
    cout<< c.volume();

}