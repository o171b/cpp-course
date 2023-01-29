#include <iostream>
using namespace std;

int main()
{
    try
    {
        throw 12.5; //change it into integer number and character and try
    }
    catch(int e)
    {
        cout<<"Int catch"<<endl;
    }
    catch(double e)
    {
        cout<<"Double catch"<<endl;
    }
   /* catch(char e)
    {
        cout<<"Char catch"<<endl;
    } */
    catch(...) //catches all kinds of exceptions that has no catch blocks defined
    {
        cout<<"All catch"<<endl;
    }
}