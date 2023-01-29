#include <iostream>
using namespace std;

class Rectangle //initiating a class
{   
    public: //by defaul everything in a class is private, make it public to access them
    int length; //declaring data members or properties
    int breadth;

    int area() //this is a function or behaviour for rectanlge
    {
        return length*breadth;
    }
    
    int perimeter()
    {
        return 2*(length+breadth);
    }
};

int main() //the main function, you can write int main or void main depending on your compiler
{
    Rectangle r1, r2; //these are objects of a rectangle
    
    r1.length = 10; //for accessing the members of a class we can use dot operator
    r1.breadth = 5; //but to access the members we should make class as public:
    cout<<r1.area(); //we print the area that shows 50 in terminal

    r2.length = 15; //accessing the second rectangle object
    r2.breadth = 3;
    cout<<r2.area();
    //now we have two objects r1 and r2 and each is having its own functions and data
    // you can n number of objects using classes


}

/* r1 and r2 are variables of Rectangle type, so we've defined own data type.
so this class is used for defining our own data type */
