#include <iostream>
using namespace std;

class Rectangle
{
private: //data members are private
    int length;
    int breadth;
public: //all type of function for our Rectangle class made as public
    Rectangle(); //Non-parameterized constructor
    Rectangle(int l, int b); //Parameterized constructor
    Rectangle(Rectangle &r); //Copy constructor with takes a reference
    int getLength(){return length;} //get Length method as inline function
    int getBreadth(){return breadth;} //get Breadth method as inline function 
    void setLength(int l); //setters
    void setBreadth(int b);
    int area(); //area function, these are also called facilitators
    int perimeter(); //perimeter function
    bool isSquare(); //enquiry function, whether rectangle is square in shape
    ~Rectangle(); //destructor which starts with tilda ~ ,for deallocation of object we have it
    //This makes a complete class or a perfect class
};

int main() //Rectangle Object is created inside the main function
{
    Rectangle r1(10,10);
    cout<<"Area "<<r1.area()<<endl;
    if (r1.isSquare())
        cout<<"Yes"<<endl;
}

Rectangle::Rectangle() //implementation using scope resolution
{
    length=1;
    breadth=1;
}
Rectangle::Rectangle(Rectangle &r)
{
    length=r.length;
    breadth=r.breadth;
}
void Rectangle::setLength(int l)
{
    length=l;
}
void Rectangle::setBreadth(int b)
{
    breadth=b;
}
int Rectangle::area()
{
    return length*breadth;
}
int Rectangle::perimeter()
{
    return 2*(length+breadth);
}
bool Rectangle::isSquare()
{
    return length==breadth;
}
Rectangle::~Rectangle()
{
    cout<<"Rectangle Destroyed";
}
