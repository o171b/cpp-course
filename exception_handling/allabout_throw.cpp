#include <iostream>
using namespace std;

//class MyException : exception //inherets from c++ builtin class exception
//{

//};

int main()
{
    int x=10,y=10,z;

    try
    {
        if(y==0)
            throw 1; //this can be any number, float, double, even character 
        z=x/y;
        cout<<z<<endl;
    }
    catch (int e)
    {
        cout<<"Division by zero "<<e<<endl;
    }
    cout<<"Bye"<<endl;
}
//throw 1.5; catch(double e)
//throw string("Div by 0"); catch (string e)
/*we can even throw the objects of our own class, first define the class, "class MyException"
then throw MyException() "throw the constructor of class MyException" , catch(MyException e) */