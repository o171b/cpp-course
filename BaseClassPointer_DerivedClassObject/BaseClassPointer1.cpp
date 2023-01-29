#include <iostream>
using namespace std;

class Base
{
public:
    void fun1()
    {
        cout<<"fun1 of Base"<<endl;
    }
};

class Derived:public Base
{
public:
    void fun2()
    {
        cout<<"fun2 of Derived"<<endl;
    }
};

int main()
{
    Derived d; //created an object d of class Derived
    Base *ptr=&d; //inside main i'll take Base class pointer and assign it to the address of derived class object
    ptr->fun1(); //pointer of base class will look for the functions inside base class
    //ptr->fun2(); //this function cannot be called as its in derived class, and pointer of base class will look for function defined inside base class

    //d.fun1(); //terminal result: fun1 of Base , as derived class is inhereting from base
    //d.fun2(); //fun2 of Derived
    return 0;
}

//exercise: make the pointer as Derived class and object as base class and test the code
//hint: this is not possible this is not allowed