#include <iostream>
using namespace std;

int main()
{
    int x=10;
    int &y=x;
    
    cout<<x<<endl;
    y++; //that value of x will increment
    x++; //the value of x will increment
    cout<<x<<endl; //here am incrementing value of x and y  

    cout<<&x<<" "<<&y; //cout address of x and y, same addresses will be printed
}