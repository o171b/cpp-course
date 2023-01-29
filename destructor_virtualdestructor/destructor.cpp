#include <iostream>
using namespace std;

class Demo
{
public:
    Demo() //constructor of class Demo
    {
        cout<<"Constructor of Demo"<<endl;
    }
    ~Demo() //Destructor of class Demo
    {
        cout<<"Destructor of Demo"<<endl;
    }
};

void fun() //global function
{
    //Demo d; //in this function i'll create an object of Demo as d
    Demo *p=new Demo(); //creating an object dynamically in heap
    delete p; //deleting or destructing using delete operator

}

int main()
{
    fun(); //from main function i'll call this function fun()

}
/*let us understand the flow, from main function im calling a function fun(), 
and fun() function is creating an object of Demo class, so once the function is called
an object is created and when object is created, constructor is called and when
the function fun() end, automatically destructor is called. So i should get both the
messages, Constructor of Demo and Destructor of Demo. */
/*to delete array memory in heap we say delete []p; */