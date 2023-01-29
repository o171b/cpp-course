#include <iostream>
using namespace std;

//Exception handling construct

int main()
{
    int a=10; b=0; c;

    try
    {
        if(b==0)
            throw 1; //you can throw any integer value 1,2,4,6
        c=a/b;
        cout<<c;
    }
    catch (int e) //so that it can be caught by catch block, it has int value as parameter
    {
        cout<<"Division by zero";
    }
};

/*1a. try and catch is the construct*/
/*1b.inside try block if there is any error then it will jump to the catch block
and execute the statments inside catch block, if there are no error in try block
then catch block will not execute. */

//eg:

try
{
    //some lines of code
}
catch
{
    //some lines of code
}