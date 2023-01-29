#include <iostream>
using namespace std;

//second usage of constants using pointers

int main()
{
    int x=10;
    int *ptr=&x;
    ++ *ptr;
    cout<<x; //11 is printed

    int y=20;
   const int *ptr=&y; //now this pointer can point on y and it can access y, but it cannot modify y
    ++ *ptr; //this pointer cannot modify the data, the data is locked for this pointer
    cout<<*ptr; //it can read data normally but cant modify it as its locked with const
/*you read const int *ptr=&y; from the right side, pointer to a integer constant*/
}