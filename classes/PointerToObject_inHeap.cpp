#include <iostream>
using namespace std;

//using pointers of objects in heap
class Rectangle
{
    public:
        int length;
        int breadth;

    int area()
    {
        return length * breadth;
    }

    int perimeter()
    {
        return 2*(length+breadth);
    }
};


int main()
{
    Rectangle *p=new Rectangle(); //we created an object in heap
    p->length=10; //accessing data member of an object using pointer, read as p's length assigned 10
    p->breadth=5;
    //r.length=10; //this is how we normally access if we have variable name
    cout<<p->area()<<endl;
    cout<<p->perimeter()<<endl;
}
/* this arrow is a derefrencing operator, this can be used for accessing,
the members of an object, you can access data members aswell as functions */