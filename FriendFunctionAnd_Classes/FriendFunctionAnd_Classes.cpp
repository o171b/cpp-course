#include <iostream>
using namespace std;

class Test
{
private:
    int a;
protected:
    int b;
public:
    int c;
friend void fun(); //void fun() is friend of class Test
};

void fun()
{
    Test t;
    t.a=15; //this is private, so not accessible, after makin fun() as friend it is accessible
    t.b=10; //this is protected so not accessible, now its accessible
    t.c=5; //this is public so accessible
} 

/*1a. But i want this function void fun() to access the private and protected member, so how
to do that? so Class show allow this function to access its members. you can do that by
writing in the body of the class "friend void fun()" */ 
/*This is useful in operator overloading mostly*/