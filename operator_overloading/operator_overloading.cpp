#include <iostream>
using namespace std;

class Complex //MATHEMATICS COMPLEX NUMBERS ADDITION
{
    public:
        int real; //real number
        int img; //imaginary number

    //Complex add(Complex c) //function to add two complex number, return type is Complex or our class name
    Complex operator+(Complex c) //here i've changed the code for operator overloading and we get the same result
    {
        Complex temp; //temporary complex number variable
        temp.real=real+c.real; //temporary complex numbers real part is equals to real part of the same complex number and c.real
        temp.img=img+c.img; //temp's imaginary is assigned with imaginary + c.img
        return temp; //finally we return temp
    }

};

int main()
{
    Complex c1,c2,c3; //we created three objects of Complex class
    c1.real=5;c1.img=3;
    c2.real=10;c2.img=5;
    c3=c1+c2; //instead of writing the function add below we can simplify it this way we change the code to operator+ or operator overloading
    //c3=c1.add(c2); //here im calling the function of c1 and passing c2 as parameter, you can even call c2 and pass c1
    cout<<c3.real<<"+i"<<c3.img<<endl;
}
//sum of two complex number result is 15+i8
/*in c++ we can add integers normally with + */
/*but for adding structures or objects we need to define a class*/
