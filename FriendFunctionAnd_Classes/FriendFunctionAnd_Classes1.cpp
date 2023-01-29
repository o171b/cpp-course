#include <iostream>
using namespace std;

class your; //you've to declare the class above my to make it as a friend
class My
{
private:
    int a=10;
friend your; //you made class your friend of class my,but the compiler will say you dont have any class your, so you've to write class name your before my.
};

class your
{ 
public:
    My m;
    void fun()
    {
        cout<<m.a;
    }
};

/*the above class my your is having hasA relationship with My class as its taking an object
My m; of My class. Upon an object we can access only the public members of a class, but My class
has only one private member so i cannot access it, here i have a function and its trying
to print the value of m.a but it cant as variable a is private.
So if you want one class to access private member of another class upon object then you've
to make the class in which the object is created as a friend of the class whose member you
want to access. see code above */
/*the reason we write the friend class above my class is that the compiler checks code
from top to bottom, so if it comes to the line friend your; , it can recognize it,
hence you've to write class your on top of class my*/