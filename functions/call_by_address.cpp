#include <iostream>
using namespace std;

void swap(int *a, int *b) //formal parameters are pointers
{
int temp;
temp = *a; //here we are dereferencing the pointer hence *a
*a = *b;
*b = temp;
}

int main()
{
    int x =10, y=20; //main function is having values and it sends them to swap function
    swap(&x, &y); //it sends the addresses and not the values
    cout<<x<<" "<<y;
}