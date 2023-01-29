#include <iostream>
using namespace std;

class Rectangle
{
public:
    void area()
    {
        cout<<"Area of a Rectangle"<<endl;
    }
};

class Cuboid:public Rectangle
{
public:
    void volume() 
    {
        cout<<"Volume of a Cuboid"<<endl;
    }
};


int main()
{
    Cuboid c;
    Rectangle *p=&c; //A Rectangle pointer is pointing to a Cuboid Object
    p->area(); //it shows the area
    //p->volume(); //it doesnt show the volume
    //c.area();
    //c.volume();
    return 0;
}

/*the reason it doesnt show volume, conceptually, This is actually a cuboid created here
and im pointing upon the cuboid and saying its a rectangle, though its a cuboid and im sayin
its a rectangle, so im not wrong, as its a rectangular shape */
/* Think that a child knows about Rectangle but he doesnt know about cuboid, keep a cuboid
in front of him and ask him what shape it is, and he will say its a rectangle, so it means
he have the knowledge that a rectanlge has an area, as he doent know about a cuboid, he cannot
know that a cuboid has a volume */
/* Rectangle r; //object r of class rectangle
    Cuboid *q=&r; //a cuboid pointer pointing to address of rectangle object
    This code will give an error, you cannot say to a rectangle that you're a cuboid
    you can say to cuboid you're rectangle, father comes first son later lol*/