#include <iostream>
using namespace std;

class Your;//write class Your above class My, so that the compiler can access it.
class My
{
private: int a;
protected: int b;
public: int c;
    friend Your; //declare class Your as friend of class My, inside of class My
};

class Your
{
public:
    My m; //object of class My in class Your
    void fun()
    {
        m.a=10;
        m.b=20;
        m.c=30;
    }
};