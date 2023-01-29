#include <iostream>
using namespace std;

class Demo
{
public:
    int x=10;
    int y=20;

    void Display() //const, remove the forward slash and try the code
    {
        x++; //use  of const in function protoype or definition will not make x increment
        cout<<x<<" "<<y<<endl;
    }
};

int main()
{
    Demo d;
    d.Display();
}