#include <iostream>
using namespace std;

class Parent
{
private: int a;
protected: int b;
public: int c;

    void funParent()
    {
        a=10;
        b=5;
        c=15;
    }
};
class Child: public Parent
{
    void funChild()
    {
       // a=10; this is private in parent class, so wont be accessible in child class
        b=5;
        c=15;
    }
};
class GrandChild: public Child
{
public:
    void funGrandChild()
    {
        //a=10; private member is not accessible, child class is inhereting it through its parent
        b=5;
        c=20;
    }
};

int main() //now let us see what happens upon an object
{
    Child c; //creating object of class child as object name c
    //c.a=10; im publicly inhereting from parent class ,private member inaccessible
    //c.b=5; im publicly inheriting from parent class, protected member inaccessible
    c.c=20; //only public member is accessible in the object
}

/*Now let us inhereting from parent class in child class protectedly*/
/*1a. So all the members of parent class will be protected in child class inherently*/
/*1b. Now anything inside protected is accessible inside the same class "Child class",
But what about the further GrandChild class? Now, GrandChild class when it is inhereting
from Child class it can access protected and public members. But what about the object
of child? Private and Protected are inaccessible only Public is accessible, Because Child class
is inhereting protecedly from Parent class */
/*1c. Now let us look at another method Privately, class Child: private Parent
so all the members of the Parent class will come inside Child class, So Private is not
accessible we know, Protected and Public will fall inside Private of child class, 
So anything inside this Child class will be accessible like public and private not a 
problem, But if we go further down, GrandChild class cannot access the private members, or 
any of the 3 members private, public, protected.*/
/*play with the code, change child class to public and protected and notice the changes*/