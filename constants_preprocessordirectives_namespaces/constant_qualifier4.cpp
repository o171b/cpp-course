#include <iostream>
using namespace std;

//fourth usage of constant

int main()
{
    int x=10;
    const int * const ptr=&x; //this is a constant pointer to integer constant, read from right to left
    ptr=&y; //i cannot modify the pointer to point on y
    ++(*ptr); //i cannot modify the variable or increment it, lock on both

}

/*This pointer cannot be modified to any other data member and even it cannot modify
this data member, so it has placed a lock on both, the pointer aswell as the data
member*/