#include <iostream>
using namespace std;

int x=10; //global variable

int main()
{
    int x=20; //local variable to main function
    {
        int x=30; //local variable within this block, in c++ we've block level scope, this variable is accessible within this block only
        cout<<x<<endl; //30 will be printed, because its the nearest value to x
    }
    cout<<x<<endl; //it will print 20 as it is in its nearest scope
    cout<<::x<<endl; //if i want to access global variable x, i've to give scope resolution ::
}