#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int img;
public:
    Complex(int r=0, int i=0)
    {
        real=r;
        img=i;
    }

    /*void display() //i dont want a function to display the complex number i want cout<<c
     {
        cout<<real<<"+i"<<img<<endl;
    } */
    friend ostream & operator<<(ostream &out, Complex &c); //signature or prototype of a friend function
    
};

ostream & operator<<(ostream &out, Complex &c)
{
    out<<c.real<<"+i"<<c.img<<endl;
    return out;
}

int main()
{
    Complex c(10,5);
    //c.display(); //using this function i get the output 10+i5 that's a complex number,but i dont want a function i want cout<<c;
    cout<<c;
    operator<<(cout,c); //i can even write like this and get same result
    //operator<< operator insertion is a function name which is taking cout and c
}

/*1a. so the logic is, for overloading an insertion operator i need the help of a friend
function */
/*1b. return type is ostream reference and the function name is operator and the
parameters are ostream and reference name i will write it as out and next parameter is 
Complex reference c */
/*1c. Now i can overload this operator so i will write the body of the function outside
the class*/
/*1d. so here i will use the object out c.real and i should also display +i and c.img
and i should also return out that is it is returned by reference*/
/*1e. finally in main() we can call cout<<c; so the operator << will be called which
will be taking two arguments that is one is ostream operator and another is complex
number, so as you can see for << operator cout<<c; there are two operands , cout as
and object and c as an object*/
/*1f. if instead of return type as ostream  you can even return void and this will work,
but then you cannot write endl; or insert more objects such as c1<<c2<<endl; , so you've
to use ostream as return type*/
