#include <iostream>
using namespace std;

class Test
{
    public:

        void fun1()
        {
            cout<<"fun1 is Inline"<<endl;
        }
        void fun2();
    //inline void fun2(); //this is another way of making a function inline even though its outside a class
        
        
};

void Test::fun2()
{
    cout<<"fun2 is non-inline"<<endl;
}

int main()
{
    Test t;
    t.fun1();
    t.fun2();
}