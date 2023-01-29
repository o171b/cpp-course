#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
public:
    Rectangle(int l, int b)
    {
        this->length=length; //this->length is the private member length
        this->breadth=breadth; //as we cannot write length=length; as it will not access the private members so we use this->
        //as the object r1 is created below in main(), this->length is read is r1's length
    }

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
    Rectangle r1(10,5);

    return 0;
}