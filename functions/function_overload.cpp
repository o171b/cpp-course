#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a+b;
}

float sum(float a, float b)
{
    return a+b;
}

int sum(int a, int b, int c)
{
    return a+b+c;
}

int main()
{
    cout<<sum(10,5)<<endl;
    cout<<sum(10.2f,12.3f)<<endl;
    cout<<sum(10,5,5)<<endl;
    //cout<<sum(10,3,4,5)<<endl; //gives an overloading function error,function name is same it can be used, but argument list is different
    
}

//function overload is when you use the same name of function and give difference number of arguments
//C++ lets you specify more than one function of the same name in the same scope.