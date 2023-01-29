#include <iostream>
using namespace std;

int main()
{
    int a=10;
    int *p=&a;
    cout<<a<<endl; //prints 10
    cout<<&a<<endl; //prints address of a 0x7fffffffde1c
    cout<<p<<endl; //prints address of a 0x7fffffffde1c
    cout<<&p<<endl; //prints address of pointer p 0x7fffffffde10
    cout<<*p<<endl; //prints value of a, that's 10, its called derefrencing


    return 0;
}