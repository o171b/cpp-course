#include <iostream>
using namespace std;

int & fun(int &x) //we'll make fun() take reference variable x
{
    return x;
}

int main()
{
    int a=10; //we're taking this value of a as reference of x
    fun(a); //this entire function becomes a reference, and now it becomes a reference of local variable of main()
    fun(a)=25; //i can even assign a value to the function fun() and it will return 25 and gives no error
    cout<<a<<endl;

}