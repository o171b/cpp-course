#include <iostream>
using namespace std;

struct Demo
{
    int x;
    int y;

    void Display()
    {
        cout<<x<<" "<<y<<endl;
    }
};



int main()
{
    Demo d; //let us take a variable d of type Demo
    d.x=10;
    d.y=5;
    d.Display();
}
/* The structure looks more like a class so the difference is
class have data members as private by default, so in class if you want to make
everything as public you need to write before its data members public: */