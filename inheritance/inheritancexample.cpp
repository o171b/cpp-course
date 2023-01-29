#include <iostream>
using namespace std;

class Rectangle
{
private:
int length;
int breadth; //its having private data members as length and breadth
public:
Rectangle(); //these three are constructors
Rectangle(int l,int b);
Rectangle(Rectangle &r);
int getLength(){return length;} //these two are accessors or getter methods,for getting values
int getBreadth(){return breadth;}
void setLength(int l); //these two are mutators or setter methods, for changing the values
void setBreadth(int b);
int area();
int perimeter();
bool isSquare(); //this is inspector function
~Rectangle(); //this is destructor function
};
class Cuboid:public Rectangle //class cuboid that is publicly inheriting from Rectangle
{
private:
int height; //in private members we need height of a cuboid
public:
Cuboid(int h) //we'll write our constructor
{
height=h;
}
int getHeight(){return height;} //get and set methods or property methods
void setHeight(int h){height=h;} //setheight is parameterized as we r inputting a value
int volume(){return getLength()*getBreadth()*height;} //we cannot access the members length and breadth as they're private, we acces them with these getter functions
};
int main()
{
Cuboid c(5); //i will create object c from class cuboid and parameter height is 5
c.setLength(10);
c.setBreadth(7);
cout<<"Volume is "<<c.volume()<<endl;
}
Rectangle::Rectangle()
{
length=1;
breadth=1;
}
Rectangle::Rectangle(int l,int b)
{
length=l;
breadth=b;
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
// cout<<"Rectangle Destroyed";
}
