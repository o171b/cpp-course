#include <iostream>
using namespace std;

int main()
{
    int A[5]{2,4,6,8,10};
    int *p=A;

    cout<<*p<<endl;; //this will print first element in array , 2
    p++;
    cout<<*p<<endl; //using p++, it will go to next location and print 4
    p--;
    cout<<*p<<endl; //using p--, it will go to previous location and print 2

    cout<<p<<endl; //this will show memory location 0x7fffffffde10
    cout<<p+2<<endl; //this will show memory location 0x7fffffffde18 , as integer takes 4bytes in our compilor, the last digits of memory location change from 10 to 18
    cout<<*p<<endl; //when u dereference it with * you get value 2
    cout<<*(p+2)<<endl; //when you dereference it with * you get value 6


    return 0;
}