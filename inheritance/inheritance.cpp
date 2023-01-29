#include <iostream>
using namespace std;

class Base
{
public:
    int x;

    void show()
    {
        cout<<x;
    }
};

class Derived : public Base //this colon : is used for showing extension from Base class here
{
    public:
     int y; //this derived class is having only one variable y
     void display()
     {
        cout<<x<<" "<<y; //so th is x is inherited or borrowed from above class Base
     }
};

int main()
{
    Base b;
    b.x=25;
    b.show();

    Derived d;
    d.x=10;
    d.y=15;
    d.show();
    d.display();
}
/*1a. Inside main() i created the object of base base b; , so this object will have variable
x . as everything is public i can say b.x=25; and call b.show() which has inside of it
cout<<x; , so it will show the value of x that is 25, so this object b is having two things
variable x and function show()*/
/*1b. Now let us create the object of Derived class  as d; , so this object d is having 
its data member as y and its inheriting from Base class so it's having x aswell, then its 
having its function as display() and also its inheriting function show()*/
/*1c. Now i can access data member x using d.x and its own data member as d.y,  and when i call
d.show() , so show is part of Base class, so it will show value of x and then i say
d.display it will show the values of x and y so the output will be 10 and 15*/