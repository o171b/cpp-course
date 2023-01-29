#include <iostream>
using namespace std;

//Polymorphism

/* Same name different actions
Runtime Polymorphism is achieved using function overriding
Virtual functions are abstract functions of base class
Derived class must override virtual function
Base class pointer pointing to derived class object and a override function is called
Summary: class car is defined, then sub classes override, then base class method made as
virtual the pure virtual */
class Car
{
public:
virtual void start()=0;
};
class Lexus:public Car
{
public:
void start(){cout<<"Lexus Started"<<endl;}
};
class Toyota:public Car
{
public:
void start(){cout<<"Toyota Started"<<endl;}
};
int main()
{
//Car c; //creating object without pointer
Car *p=new Lexus(); //creating object with pointer
p->start();
p=new Toyota();
p->start();
}
