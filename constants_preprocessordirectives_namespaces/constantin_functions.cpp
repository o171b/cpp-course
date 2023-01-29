#include <iostream>
using namespace std;

//constant keyword in functions

class Demo
{
public:
    int x=10;
    int y=20;

    void Display() const//write const after the function if you want to read the value and not modify them
    {
        x++; //so this will not be allowed
        cout<<x<<" "<<y<<endl;
    }
};

int main()
{
    Demo d;
    d.Display();
}
/*so if you're sure that so and so function is not going to modify any data members,
just declare const there, so if by mistake if you're modifying anything inside the 
function compiler will come for your help and say that you said that you're not going
to modify anything, but by mistake you're trying to modify*/