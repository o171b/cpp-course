#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    /* Rectangle() //we create a Rectange with non-parameterized constructor
    {
        length=1; //we dont need this constructor anymore, as we've given parameterized constructors parameters default values as 1
        breadth=1;
    } */

    Rectangle(int l=1, int b=1) //we create a Rectange with parameterized constructor and give its paremeters value as 1, so we dont need default constructor anymore Rectangle(),now this will work as a no argument constructor aswell
    {
        setLength(l); //we use setLength() function, to avoid the user to give negative values,its inbuilt in set function
        setBreadth(b);
    }

    Rectangle(Rectangle &r) //Copy Constructor taking reference or nickname
    {
        length=r.length; //so its copying length and breadth of rectangle thats passed &r
        breadth=r.breadth;
    }
//notice constructor doesnt have return type as we learned beforehand



    void setLength(int l)
    {
        if(l>0)
            length=l;
        else
        length = 1;
    }
    void setBreadth(int b)
    {
        if(b>0)
            breadth=b;
        else
        breadth=1;
    }
    int getLength(){return length;}
    int getBreadth(){return breadth;}

    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }

};

int main()
{
    Rectangle r1(10,5); //calling paremeterized constructor by passing arguments
    //Rectangle r1; //object of rectangle, calling non-parameterized constructor
    Rectangle r2(r1); //we created a new object or Rectangle as r2 by passing r1
    cout<<r1.area()<<endl;
    cout<<r2.area()<<endl;
}
