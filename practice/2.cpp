#include<iostream>
using namespace std;
    
class Outer
{   public:
	class Inner
    {
	public:
	void display()
	{
	cout<<"Display of Inner"<<endl;
	}
	
};

    
	void fun()
	{
		i.display();
	}
	                
    Inner i;
    
};
    
int main()
{
	Outer:: Inner f;
    f.display();
}
    