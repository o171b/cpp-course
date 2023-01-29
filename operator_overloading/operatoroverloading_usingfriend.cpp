#include <iostream>
using namespace std;

//operator overloading using friend functions

class Complex
{
private:
    int real;
    int img;
public:
    Complex(int r=0, int i=0) //this is a constructor, we've given default arguments to its parameters
    {
        real=r; //real assign r
        img=i; //imaginary assign i
    }
    void display() //display function for display values
    {
        cout<<real<<"+i"<<img<<endl;
    }
friend Complex operator+(Complex c1,Complex c2); //friend function should be written outside the class without using scope resolution
};
Complex operator+(Complex c1,Complex c2) //i've overloaded addition operator using a member function
{   //this is an independent function that doesnt belong to a class but is a friend of a class so we dont use any scope resolution operator
        Complex temp; //here we take a temporary variable temp
        temp.real=c1.real+c2.real;
        temp.img=c1.img+c2.img;
        return temp;
}

int main()
{
    Complex c1(5,3), c2(10,5), c3;

    c3=c1+c2; //and it is called same way as the previous operator overloading function, result is stored in c3
    c3.display();
}

/* 1a. already we've seen how to overload + operator, that time the idea was that
either c1 will add or c2 will add, either i add or you add our money*/
/*1b. Now we want not me or you but some body else add our money, so we'll take
the help of our friend to add the money, hence operator overloading using friend */
/*1c. if a friend is adding money, i've to give my money as parameter and you've to give
your money as parameter then he can add it*/
/*1d. friend Complex operator+(complex c1, complex c2). so in the begining we write friend
and he will take two parameters my money and your money complex c1 and complex c2, so
neither c1 is adding nor c2 is adding, someone else is adding*/
/*1e. friend function should be written outside the class without using scope resolution*/
/*1f. the same function we saw previously is implemented here and is declared as friend,
so this is another of overloading operator, so some operators you can overload as 
member functions aswell as friend functions*/