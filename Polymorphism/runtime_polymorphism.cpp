#include <iostream>
using namespace std;

class car
{
public:
    virtual void start()=0;
    /*{
        cout<<"car has started ";
    }*/
    virtual void stop()=0;
    /*{
        cout<<"car has stopped ";
    }*/
};

class Lexus:public car
{
public:
    void start()
    {
        cout<<"Lexus has started ";
    }
    void stop()
    {
        cout<<"Lexus has stopped, ";
    }
};

class Toyota:public car
{
public:
    void start()
    {
        cout<<"Toyota has started ";
    }
    void stop()
    {
        cout<<"Toyota has stopped ";
    }
};

int main()
{
    car *c= new Lexus(); //but the functions called are different
    c->start(); //if you notice, lines are same
    c->stop();
    c=new Toyota(); //the functions called are different, so that's polymorphism
    c->start(); //lines are same
    c->stop();
}

/*in simple terms, virtual means that it exists as a term but its not an actual object
eg, shape is virtual, rectangle is real, car is virtual, Lexus is real*/
/*same statement car start(), but the function calls are different, because one object is Lexus
and the other object is Toyota, so we have achieved polymorphism*/
/*So Lexus class is already existing and Toyota class is already existing, then we've 
written a class called car to achieve polymorphism, so that we can call Lexus as car and
Toyota as car aswell.*/
/*so functions in class car are virutal functions, so we dont need their bodies,
we just need their declarations, so what is their purpose? To achieve polymorphism, 
we wrote those function because we want those functions
to be implemented by subclasses, now that became a super class, a parent class, and we want
to force the Derived classes to implement so that any class that says "inherit from car"
then it must override those two functions in class car using virtual keyword. So how to force
the Derived classes or how to compel them? by writing =0; at then end of the virtual function.
So these functions are called as Pure Virtual Functions. */
/*So what is the purpose of pure virtual functions? Those functions in class car must be
overrided by derived classes, otherwise the derived class will become abstract, and that
class car is actually abstract, so you cannot create an object of class car, as it is
abstract. When a subclass or child class or derived class inherits from parent class, 
then child class also becomes abstract, if it is not overriding, so it must override.*/