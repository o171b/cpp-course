#include <iostream>
using namespace std;

//first usage of costants
 int main()
{
    int x=10;
    x++;
    cout<<x; //11 will be printed

    const int y=10; //when you say const in this one
    y++; //you cannot modify or increment
    cout<<y;
} 


/*we know when we declare a variable x, it will have some memory, let us say
the address of that memory is 200/201 "assuming int takes 2 bytes" and value 10 is stored,
we're familiar with such stuff already.*/