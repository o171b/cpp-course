#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        cout<<"Base constructor"<<endl;
    }
   virtual ~Base() //making base class destructor as virtual, so that Derived class get called first
    {
        cout<<"Base destructor"<<endl;
    }
};

class Derived:public Base
{
public:
    Derived()
    {
        cout<<"Derived constructor"<<endl;
    }
    ~Derived()
    {
        cout<<"Derived destructor"<<endl;
    }
};

int main()
{
    Base *p=new Derived(); //here we've a base class pointer and derived class object
    delete p;
}

/*Destructor is a member function of a class that is used for releasing the
resources acquired by object of a class. suppose in a class you're using a file, so 
in the constructor you're opening the file then in Destructor we should close the file.
another eg: a class may be using network connection, so in constructor it may be getting
the network connection, and in Destructor it should  release the network connection.
eg: in your college you want to play football, so you acquire the resources, and
after playing you release the resources, return the equipment back. */
/* in inheritance destructors are called from bottom to top, so if you wanna
use destructor for the above code, first it will display Derived Destructor then
it will display Base Destructor*/
/*Base *p=new Derived(); , so when the object is deleted which function will be called?
Because this is Derived class object so first ~Derived() then ~Base() should be called.
But no in reality that will not happen. Remember in c++ the functions are called 
depending on the pointer and not upon the object, so only ~Base() destructor will be called
and not ~Derived() class. C++ compiler thinks that, Base *p is an object of Base class, 
because you're using pointer p, it'll not see what object is attached, so it will
call the Destructor function of Base class.*/
/*But suppose we want the Destructor of Derived class to be also called. we want it to behave
normally, that is the Destructor or Derived class to be called first then the Destructor
of Base class should be called, as calling should be bottom-up. */
/*for that we've to write a keyword virtual before ~Base() , Base class destructor
virtual ~Base()*/
/*constructors are called top-bottom, destructors are called bottom-top*/