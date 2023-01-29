#include <iostream>
using namespace std;

class Base
{
public:
    virtual void fun() //virtual keyword
    {
        cout<<"fun of Base";
    }
};

class Derived:public Base
{
public:
    void fun()
    {
        cout<<"fun of Derived";
    }
};

int main()
{
    Base *p= new Derived(); //i'll take Base class pointer and to that i assigned Derived class object
    //Base *ptr=&d; //you can write the above statment this way also
    p->fun(); //using Base class pointer i can call only those function present in Base class,But that function is overrided in Derived class also, its availible in Derived class
    //Derived d;
    //d.fun() //this will normally calls the Derived class function
    //ambiguity arises when you use a pointer of one class and object of another as above
}
/*1a. when there is Base class pointer and Derived class object, so the functions in Base
class will be called and displayed, Function is called based on pointer used here*/
/*1b. let us take an example of a real life situation and understand it. I've a BasicCar
pointer, and AdvancedCar object, so im pointing on a BasicCar with my finger but the actual
object is AdvancedCar, Im thinking its a BasicCar and I'll drive it, How will it drive? Will it
drive how im thinking that its a BasicCar or will it run how it actually is as AdvancedCar?
It will run like an AdvancedCar, not by how im thinking or how im pointing. Hence based on
the object the function should be called not based on the pointer.
One more example, If you see a Donkey and you point and say its a Horse, whatever you're
thinking but actually it will run as a Horse. So Logically it's Wrong. So in C++ this 
doesnt happen logically so if you call a Donkey a Horse, it will run like a Horse in C++.*/
/*1c. Now lets see How to make the function of the Derived class execute and not the Base
class. C++ is having a keyword called virtual, so in Base class when you make the function
as virtual and when you override it then if this is the situation that Base class pointer and
Derived class object and im calling a function thats same in both the classes
 then Derived class function will be called */
 /*1d. so to give it real life meaning or real life logic we use virtual functions*/
 /*1e. Normally when you use Derived d; Derived class object and call the function
 d.fun(); then Derived class object is called, the ambiguity arises when you use a 
 pointer. */
 /*1f. at the end of the day everything is in the control of the programmer, he has two
 options He can use a Derived class pointer and Base class object and call a Derived class
 function or He can use virtual functions anc call the Derived class object*/