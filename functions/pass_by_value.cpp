#include <iostream>
using namespace std;

void swap(int a, int b) //this is formal parameters
{ int temp;
temp = a;
a = b;
b = temp;
}


int main() 
{
    int x=10, y=20;
    swap(x,y); //this is actual parameters
    cout<<x<<" "<<y;
}
// Call by Value or Pass by value //

/* The Actual parameters are the variables 
that are transferred to the function when it is requested. */
/* The Formal Parameters are the values determined 
by the function that accepts values when the function is declared. */
/* the value of actual parameter is copied in formal parameter
and if any changes is done in formal parameter will not change the actual parameter */
/* call by value is not suitable for swap function, hence the values are not swapped*/