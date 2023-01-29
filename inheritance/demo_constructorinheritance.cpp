#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        cout<<"Non-param Base"<<endl;
    }
    Base(int x)
    {
        cout<<"Param of Base"<<x<<endl;
    }
};

class Derived:public Base
{
public:
    Derived(){cout<<"Non-param Derived"<<endl;}
    Derived(int y){cout<<"Param of Derived"<<y<<endl;}
    
    Derived (int x, int y):Base(x) //with this constructor we'll be able to call the parameterized Base constructor and not the default
    {
        cout<<"Param of Derived "<<y<<endl;
    }
};
int main()
{
    //Derived d; //output is Non-param Base, Non-param Derived
    //Derived d(10); //output is Non-param Base, Param of Derived 10
    Derived d(5,10); //output is Param of Base 5, Param of Derived 10
}