#include <iostream>
using namespace std;

//parameters as constants

void fun(const int &x, int &y) //parameters can also be made as constant
{
    x++; //now it cannot modify this variable as we made it const
    cout<<x<<" "<<y;

}

int main()
{
    int a=10,b=20;
    fun(a,b);
}
/*we know call by reference &, which is nickname. &x will be directly accessing a,
and &y will be accessing b.*/
/*what is benefit of call by reference? First of all the code is simple, and formal
parameters doesnt consume any memory, so thats the benefit of call by reference &*/