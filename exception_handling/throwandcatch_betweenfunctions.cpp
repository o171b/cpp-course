#include <iostream>
using namespace std;

int division(int a, int b) //this is division function that's being called by main
{
    if(b==0)
        throw 1;
    return a/b;
}

int main()
{
    int x=10,y=0,z;

    try
    {
        z=division(x,y); //main function is calling division function
        cout<<z<<endl;
    }
    catch (int e)
    {
        cout<<"Division by zero "<<e<<endl;
    }
    cout<<"Bye "<<endl;
}

/*Throw and catch construct is used for communicating between the functions , otherwise
we can use if and else */