#include <iostream>
using namespace std;

class Test
{
private:
    int a; //two private data members
    int b;
public:
    static int count; //i've declared a static member as variab name count

Test() //this is a constructor for initializing a and b
{
    a=10;
    b=10;
    count++; //i'll do count++ inside constructor
}
  static int getcount() //this is static member function, thats a property this is a behaviour
    {
        return count; //this static member function is returning count
        //static functions can access only static data
    }
};

int Test::count=0; //we want this to be accessible only inside class Test so we use scope resolution

int main()
{
    Test t1; //object of class Test t1 is created, and when i create an object constructor is called and it will initiliaze a and b and assign values 10 and 10.
    Test t2;
    cout<<t1.count; //we can access the static member this way, terminal result is 2
    cout<<t2.count; //terminal result is 2
    cout<<Test::count; //we can access using scope resolution also, they're public so you can access using class name 
    cout<<Test::getcount(); //we can access get count function this way using class name
    cout<<t1.getcount(); //we can access get count function this way using object
}


/*object of class Test t1 is created, and when i create an object constructor is 
called and it will initiliaze a and b and assign values 10 and 10.*/ 
/*So i've created two object of same class and every object is having a and b members
of its own seperately  */
/*let us understand static members, I declare one data member as public 
"public: static int count;" */
/*when im creating an object of Test t1, how many members are there? we have a,b and count.
Similary for t2 we've a,b and count. Now t1 is having a,b and count and t2 is also having
a,b and count, so t1 and t2 are sharing the same count, so count variable is allocated only
one time in the memory. so this variable "static int count" when you make it static, it will
occupy memory only once. So static variables or static data members of a class belongs 
to a class doesnt belong to an object, but objects can share it.*/ 
/*lets see how the above code works, Test t1, constructor is called a assign 10 and b assign 10
and count++, lets assume count is 0 initially so count becomes 1, similarly Test t2, constructor
is called a assign 10 and b assign 10 and count++, so count becomes 2, so both the objects
are accessing the same member.*/
/*lets see one more thing syntatically, when you've a static member inside a class, you've
to declare it again outside the class , so it becomes a global variable, yes, but we want
it only to be accessed inside class Test so we give to scope resolution int Test::count=0; */
/*static functions can access only static data members, so we can increment count++ but
we wont be able to increment a and b a++ b++ for example.*/