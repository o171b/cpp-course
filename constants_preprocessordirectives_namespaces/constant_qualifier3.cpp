#include <iostream>
using namespace std;

//third usage of constant

int main()
{
    int x=10;
int * const ptr=&x; //here ptr is constant, read from the right
int y=20;
ptr=&y; //it cannot point on y now, as its already pointing on x
++(*ptr);
}

/*Now here the ptr you cannot modify as its locked with const*/
/*so now the pointer is locked and not the data, so the address in that pointer cannot
be changed anymore.*/
/*so this is a constant pointer of type integer*/
/*when pointer is constant, pointer cannot be modified to point on any other data member*/
