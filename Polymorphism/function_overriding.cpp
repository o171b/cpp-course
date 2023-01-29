#include <iostream>
using namespace std;

class Parent
{
public:
    void display()
    {
        cout<<"Display of Parent"<<endl;
    }
};

class Child : public Parent
{
public: //inside the Child class if we give the keyword public
    void display() //it is already borrowing a function from Parent
    {
        cout<<"Display of Child"<<endl; //but it will redefine its function, that's function overriding
    }
};

int main()
{
    Parent p;
    p.display(); //it will show Display of Parent

    Child c;
    c.display(); //it will show Display of Parent as its inhereting from Parent
}

/*lets take a real world example, Suppose i've a design of my car, and you've a design of
your car, the feature availible in my car , same are availible in your car, which is borrowed
from my car design. But those features you're redefining them, writing them once again, suppose
manual windows are already there in my car, but you want to redefine the working of windows
of your car and make them automatic, so same feature is availible in your car that is 
windows but its redefined.*/