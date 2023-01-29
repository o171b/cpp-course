#include <iostream>
using namespace std;

int g=5; //this is a global variable, it can be accessed by all functions()

void fun()
{
    int a=10; //this is a local variable, it can be accessed by this function only
    a++;
    cout<<a<<endl;
}

int main()
{
    g++; //global variable g becomes 6
    cout<<g<<endl; //we're accessing global variable g
}