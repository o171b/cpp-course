#include <iostream>
using namespace std;

class Rectangle
{
private: //data members are private, not accessible.
    int length;
    int breadth;
public: //functions are public
    void setLength(int l)
    {
        if(l<0)
            length=1; //if l value is negative assign 1
        else
        length =l; //else assign whatever the user input the value of l
    }
    void setBreadth(int b)
    {
        if(b<0)
            breadth=1; //if b value is negative assign 1
        else  
        breadth=b; //else assign whatever the user input the value of b
    }
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length + breadth);
    }
};

int main()
{
    Rectangle r1; //this is an object of rectangle
    r1.setLength(-10);
    r1.setBreadth(-5);
    cout<<r1.area()<<endl;
    r1.getBreadth();
    cout<<r1.getBreadth()<<endl;
    return 0;
}
