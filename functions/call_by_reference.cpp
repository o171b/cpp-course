#include <iostream>
using namespace std;

void swap(int &a, int &b) //in call by reference we modify the parameters of the function only
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10, y = 20;
    swap(x,y);
    cout<<x<<" "<<y;
}

//this method can modify the actual parameters
//it works similiar to call by address
//we know that one function cannot access the variables of another function
//but when we use call by reference it wont generate it wont generate,
//seperate machine code for the formal function, it will use the machine code of,
//actual function
//so this swap is not a seperate function, it is a part of main function.
//call by reference wont create seperate activation record in stack for swap function,
//only for the main function activation record is created in stack.
//this is a feature of c++ and no other language has it.
//you can use call by reference, if you want the actual parameters to be modified.