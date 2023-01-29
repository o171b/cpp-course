#include <iostream>
using namespace std;

int add(int x, int y, int z=0) //z=0 is the default argument
{
    return x+y+z;
}

int main()
{
    int c = add(2,5); //you can either take two arguments
    cout<<c<<endl;
    int d = add(9,9,9); //or three arguments
    cout<<d<<endl;
}