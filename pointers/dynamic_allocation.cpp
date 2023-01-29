#include <iostream>
using namespace std;
//once an array is created inside a program it cannot be modified as its in stack
//so we'll use dynamic allocation

int main()
{
    int *p= new int[20]; //suppose initially we created an array of size 20
    delete[]p; //we delete the first pointer

    p=new int[40]; //then create the new pointer
    
    return 0;
}