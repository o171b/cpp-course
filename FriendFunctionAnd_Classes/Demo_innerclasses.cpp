#include <iostream>
using namespace std;

class Outer //i've a class that is outer
{
public:
    void fun()
    {
        i.display();
    }
    class Inner //inside it we've a class that is inner
    {
    public:
        void display()
        {
            cout<<"Display of Inner "<<endl;
        }
    };
    Inner i; //after the defination of the class Inner i can create its object
};

/*Now you can see that an outer class is creating an object of Inner class "Inner i; "
and the function of outer class is using that object i.display(); */
/*An outer class can have a nested class or inner class and outer class can use the objects
of inner class, This is to reduce the complexity , if you've lot of code inside outer
class then you can divide the code in seperate inner class */
