#include <iostream>
using namespace std;



int main()
{
    int x=10;
    const int *ptr=&x;
    //++*ptr;
    cout<<*ptr<<" "<<x<<endl;   
}