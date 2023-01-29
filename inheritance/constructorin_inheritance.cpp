#include <iostream>
using namespace std;

class Base //inside the class i wont write anything just constructors
{
public:
Base() //first constructor is Base which is not having any arguments
{
	cout<<"Default of Base"<<endl;
}
Base(int x) //second constructor is taking some argument x
{
	cout<<"param of base"<<x<<endl;
}
}; //so this is the base class that's having two constructors.

//i'll write a class derived that will inherit from base

class Derived:public Base
{
public:
Derived() //1st constructor which is default or non-argument constructor
{
	cout<<"Default of Derived";
}
Derived(int a)
{
	cout<<"Param of Derived"<<a<<endl;
}
Derived(int x, int a):Base(x)
{
    cout<<"param of Derived"<<a;
}
};

/*now let us create an object of Derived class and see how the constructors
are executed*/
int main()
{
	Derived d(20,10);
}