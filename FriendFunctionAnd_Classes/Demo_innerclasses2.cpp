#include <iostream>
using namespace std;

class Outer
{
public:
    int a=10; //first member is non static
    static int b; //second member is static

    void fun()
    {
        i.show();
        cout<<i.x; //access the object member of inner class in outer class function
    }
    class Inner //this is a nested class
    {
    public:
        int x=25;
        void show()
        {
            cout<<b; //in inner class i can access static members
        }
    };
    Inner i; //third member is an Inner class object
};
int Outer::b=20;

/*The inner class, can it access a=10; ? No it cannot access a because its a non static member,
but it can access b, so it can access static members only */
/*can the outer class create the objects of inner class? yes it can create Inner i; as
shown above. Now using that object can it access all the members of the outer class?
Yes now it can.*/
/*A nested class is just like a class outside, but we write it in nested form, so
that its visibe to the parent class*/