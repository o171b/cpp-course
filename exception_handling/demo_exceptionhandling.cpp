#include <iostream>
using namespace std;


int main()
{
    int x=10, y=0,z;
    try
    {
        if(y==0)
            throw 55; //you've to throw any number, throw an exception
        z=x/y;
        cout<<z<<endl;
    }
    catch(int e) //so that it can be caught by catch block
    {
        cout<<"Division by Zero "<<e<<endl;
    }
        cout<<"Bye"<<endl; //this bye statment is executed whether there is an exception or not, this proves that my program has terminated successfully
}