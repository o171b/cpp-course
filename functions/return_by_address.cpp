#include <iostream>
using namespace std;

int * fun()
{
    int *p = new int[5]; //using this pointer it'll create heap memory of size 5
    for (int i=0;i<5;i++)
    {
        p[i]=5*i; //and it'll initialize this array with multiple of 5, 5*0, 5*1 and so on
    }
    cout<<p<<endl; //this will give address 0x55555556aeb0
    return p; //and it'll return the address allocated in heap
}

int main()
{
    int *q=fun(); //in main() i'll declare a pointer of name q and call function fun(), and that function will allocate memory in heap and address of p will be stored in q
    cout<<q<<endl; //0x55555556aeb0 q will give the same address as p, it means q is pointing onto same memory
    for(int i=0;i<5;i++ )
    cout<<q[i]<<endl;

}
//Terminal Result
//0 5 10 15 20